from collections import deque


test = int(input())

for i in range(test):
    N, M = map(int, input().split()) # N : 문서의 개수, M : 궁금한 문서 위치
    important = list(input().split())

    que = deque(enumerate(important))
    order = 0

    while que:
        idx, value = que.popleft()

        if any(value < x[1] for x in que):
            que.append((idx, value))
        else:
            order += 1
            if idx == M:
                print(order)
                break