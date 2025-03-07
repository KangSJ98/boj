N, M = map(int, input().split())

board = [[0 for _ in range(M)] for _ in range(N)]

for i in range(N):
    board[i] = list(input())

for i in range(N):
    for j in range(M):
        if board[i][j] == 'B':
            board[i][j] = 1
        else:
            board[i][j] = 0

min_diff = N*M

for i in range(N-7):
    for j in range(M-7):
        diff_1 = 0
        diff_2 = 0
        for x in range(8):
            for y in range(8):
                if board[i+y][j+x] == (x+y)%2:
                    diff_1 += 1
                else:
                    diff_2 += 1
        min_diff = min(min_diff, diff_1, diff_2)

print(min_diff)