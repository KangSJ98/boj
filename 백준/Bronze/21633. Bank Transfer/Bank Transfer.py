n = int(input())

c = max(100, n/100+25)
c = min(2000, c)
print("{:.2f}".format(c))