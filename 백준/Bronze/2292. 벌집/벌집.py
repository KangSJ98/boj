import math

n = int(input())

def find_xyz(n):
    '''
    n 입력받아 x,y,z 좌표 찾기
    '''

    # 껍질 찾기
    '''
    0번째 껍질 : 1
    i번째 껍질 : 6 * (i(i-1) / 2) + 2           부터    6 * (i(i+1) / 2) + 1까지
    '''
    if n == 1:
        return 0, 0, 0
    else:
        # shell = 1
        # while True:
        #     shell_start = int(6 * (shell * (shell - 1) / 2) + 1)
        #     if (shell_start < n) and (n < shell_start + 6 * shell + 1):
        #         break
        #     else:
        #         shell += 1
        shell = math.ceil(float((math.sqrt(4 / 3 * (n-1) + 1) - 1) / 2))
        shell_start = int(6 * (shell * (shell - 1) / 2) + 1)

    # 구역 찾기
    '''
    1번 구역 : 6 * (i(i-1) / 2) + 2         부터    6 * (i(i-1) / 2) + i + 1
    2번 구역 : 6 * (i(i-1) / 2) + i + 2     부터    6 * (i(i-1) / 2) + 2 * i + 1 ...
    '''
    position = ((n - shell_start - 1) // shell)

    # 좌표 계산
    if position == 0:
        x = shell
        y = 0
        z = shell_start + shell - n
    elif position == 1:
        x = 0
        y = - (shell_start + 2 * shell - n)
        z = - shell
    elif position == 2:
        x = shell_start + 3 * shell - n
        y = shell
        z = 0
    elif position == 3:
        x = - shell
        y = 0
        z = - (shell_start + 4 * shell - n)
    elif position == 4:
        x = 0
        y = shell_start + 5 * shell - n
        z = shell
    elif position == 5:
        x = - (shell_start + 6 * shell - n)
        y = - shell
        z = 0
    
    return x, y, z

def make_zero(x, y, z):
    '''
    1, 1, 1 = 0, 0, 0
    연산을 통해 x or y or z의 값을 0으로 만듬
    '''

    xyz = [x, y, z]
    xyz_sort = [x, y, z]
    xyz_sort.sort()

    for i in range(3):
        xyz[i] -= xyz_sort[1]
    return xyz[0], xyz[1], xyz[2]

nx, ny, nz = find_xyz(n)
nx, ny, nz = make_zero(nx, ny, nz)

print(abs(nx) + abs(ny) + abs(nz) + 1)