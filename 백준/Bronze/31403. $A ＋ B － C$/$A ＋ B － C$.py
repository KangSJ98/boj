import sys

input = sys.stdin.readline

A = int(input())
B = int(input())
C = int(input())

print(A+B-C)

print(A*(10**len(str(B))) + B - C)