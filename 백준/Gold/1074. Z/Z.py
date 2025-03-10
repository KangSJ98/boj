n, r, c = map(int, input().split())

def zfind(x, y, n):
    if n == 0:
        return 0
    
    if (x < 2**(n-1) and y < 2**(n-1)):
        return zfind(x, y, n-1)
    elif (x >= 2**(n-1) and y < 2**(n-1)):
        return zfind(x - 2**(n-1), y, n-1) + 4**(n-1)
    elif (x < 2**(n-1) and y >= 2**(n-1)):
        return zfind(x, y - 2**(n-1), n-1) + 2 * (4**(n-1))
    else:
        return zfind(x - 2**(n-1), y - 2**(n-1), n-1) + 3 * (4**(n-1))
    
print(zfind(c, r, n))