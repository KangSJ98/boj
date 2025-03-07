n = int(input())
for i in range(n):
  N, M = map(int, input().split())
  mul = 1
  for j in range(M-N):
    mul = mul * (M - j) / (j + 1)
  print(int(mul))