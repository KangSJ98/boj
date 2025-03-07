n = int(input())

arr1 = []
arr2 = list(range(n,0,-1))

for i in range(n):
    arr1.append(int(input()))

stack = []
calc = []

for i in range(n):
    if len(stack) == 0:
        stack.append(arr2.pop())
        calc.append("+")

    while True:
        if arr1[i] == stack[-1]:
            stack.pop()
            calc.append("-")
            break
        else:
            if len(arr2) == 0:
                calc = ["NO"]
                break
            stack.append(arr2.pop())
            calc.append("+")
    if calc[0] == "NO":
        break

for i in range(len(calc)):
    print(calc[i])