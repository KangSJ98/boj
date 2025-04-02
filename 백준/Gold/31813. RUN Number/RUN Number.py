t = int(input())

while t:
    t -= 1

    n, k = map(int, input().split())
    run_number = []

    while k != 0:
        lenk = len(str(k))
        if (len(str(k)) == 1) or (int(str(k)[0]) <= int(str(k)[1])):
            tmp = int(str(k)[0])
        else:
            tmp = int(str(k)[0]) - 1
        
        if tmp == 0:
            tmp = 9

        run_tmp = 0
        for i in range(lenk):
            run_tmp += tmp * (pow(10, i))
            if run_tmp > k:
                run_tmp -= tmp * (pow(10, i))
                break
        
        run_number.append(run_tmp)

        k -= run_tmp

    print(len(run_number))
    for data in run_number:
        print(data, end=" ")