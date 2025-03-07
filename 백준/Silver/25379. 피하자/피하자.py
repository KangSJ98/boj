N = int(input())

numbers = list(map(int, input().split()))

odd = 0
oddlen = 0
even = 0
evenlen = 0

for i in range(len(numbers)):
    numbers[i] = numbers[i] % 2
    if numbers[i] == 0:
        even += i
        evenlen += 1
    else:
        odd += i
        oddlen += 1

print(min(even - int(evenlen*(evenlen-1)/2), odd - int(oddlen*(oddlen-1)/2)))

