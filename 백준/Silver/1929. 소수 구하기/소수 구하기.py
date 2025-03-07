import math

M, N = map(int, input().split())

prime = []

for i in range(2, N+1):
    isprime = True
    for j in range(2, int(math.sqrt(i)) + 1):
        if i % j == 0:
            isprime = False

    if isprime:
        prime.append(i)

for i in range(len(prime)):
    if M<=prime[i]:
        print(prime[i])
