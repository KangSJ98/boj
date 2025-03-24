n, p = map(int, input().split())

mul = 1
for i in range(p):
    mul *= (n - i)

for i in range(1, p+1):
    mul /= i
    mul = int(mul)
    
print(mul)