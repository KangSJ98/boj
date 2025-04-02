t = int(input())

def find_max_run(n):
    max_run = 0
    for i in range(1, 10):
        tmp = i
        j = 1
        while True:
            if (tmp  + i * pow(10, j) < n):
                tmp += i * pow(10, j)
                j += 1
            else:
                break
        
        max_run = max(max_run, tmp)
    
    return max_run


while t:
    t -= 1

    n, k = map(int, input().split())
    run_number = []

    while k >= 10:
        tmp_run = find_max_run(k)
        run_number.append(tmp_run)
        k -= tmp_run
    
    run_number.append(k)


    print(len(run_number))
    for data in run_number:
        print(data, end=" ")