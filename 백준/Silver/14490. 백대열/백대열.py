n, m = map(int, input().split(":"))

a = n
b = m
while a != b:
    if a < b:
        b = b - a
    else:
        a = a - b
    

print(f"{int(n/a)}:{int(m/a)}")