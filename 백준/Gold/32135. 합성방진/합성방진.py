
n = int(input())

bangjin = []
for i in range(1, n+1, 2):
    if i != 7:
        bangjin.append(i)

bangjin.append(7)

for i in range(2, n+1, 2):
    if i != 8:
        bangjin.append(i)
    
bangjin.append(8)

for i in range(n):
    for j in range(n):
        print(bangjin[(i + j)%n], end=" ")
    print()