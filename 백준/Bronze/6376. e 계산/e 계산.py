e = 2.5
mul = 2

print("n e")
print("- -----------")
print("0 1")
print("1 2")
print("2 2.5")

for i in range(3, 10):
    mul *= i
    e += float(1 / mul)
    print(f"{i} {e:.9f}")