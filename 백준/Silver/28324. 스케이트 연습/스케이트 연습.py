N = int(input())

V = list(map(int, input().split()))

sum = 0
current_speed = 0

for i in range(N-1, -1, -1):
    current_speed = min(current_speed + 1, V[i])
    sum += current_speed

print(sum)