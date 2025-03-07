K, N = map(int, input().split())

lines = []

for _ in range(K):
    lines.append(int(input()))

std = max(lines)
max_len = 0
def binary(start, end):
    if end < start:
        return
    global N
    global lines
    global max_len

    mid = (end + start) // 2
    sum = 0

    for i in lines:
        sum += i//mid
    if sum >= N:
        max_len = mid
        binary(mid + 1, end)
    else:
        binary(start, mid - 1)

binary(0, std * 2)
print(max_len)