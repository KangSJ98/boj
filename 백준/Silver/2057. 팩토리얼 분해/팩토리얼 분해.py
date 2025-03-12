n = int(input())

fac = [1]

mul = 1

for i in range(1, 21):
    mul *= i
    fac.append(mul)
if n == 0:
    n = -1
for i in range(20, -1, -1):
    if n >= fac[i]:
        n -= fac[i]

if n == 0:
    print("YES")
else:
    print("NO")
