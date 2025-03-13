n = int(input())

sodduck = input()

cnt = 0
if n %2 == 1:
    for i in range(int((n-1) / 2 + 1)):
        if sodduck[i] != sodduck[n-1 - i]:
            cnt += 1
else:
    for i in range(int(n / 2)):
        if sodduck[i] != sodduck[n-1 - i]:
            cnt += 1

print(cnt)