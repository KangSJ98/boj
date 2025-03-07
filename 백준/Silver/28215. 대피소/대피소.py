import sys

def calculate_distance(home1, home2):
    return abs(home1[0] - home2[0]) + abs(home1[1] - home2[1])

input = sys.stdin.readline

n, k = map(int, input().split())

home = [list(map(int, input().split())) for _ in range(n)]

ans = sys.maxsize

distance = [[0 for _ in range(n)] for _ in range(n)]


for i in range(n):
    for j in range(n):
        distance[i][j] = calculate_distance(home[i], home[j])

if k == 1:
    max_distance = [0 for _ in range(n)]
    for i in range(n):
        max_distance[i] = max(distance[i])
    min_distance = min(max_distance)
elif k == 2:
    min_distance = sys.maxsize
    for i in range(n):
        for j in range(i+1, n):
            max_distance = 0
            for a in range(n):
                max_distance = max(max_distance, min(distance[i][a], distance[j][a]))
            min_distance = min(min_distance, max_distance)
elif k == 3:
    min_distance = sys.maxsize
    for i in range(n):
        for j in range(i+1, n):
            for l in range(j+1, n):
                max_distance = 0
                for a in range(n):
                    max_distance = max(max_distance, min(distance[i][a], distance[j][a], distance[l][a]))
                min_distance = min(min_distance, max_distance)

print(min_distance)