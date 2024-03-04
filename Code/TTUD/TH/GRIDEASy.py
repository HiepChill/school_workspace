m = int(input("Nhap M = "))
n = int(input("Nhap N = "))
cuc = {}
def luoi(m , n):
    if (m == 0 or n == 0): return 1 
    if (m == 1): return n + 1
    if (n == 1): return m + 1
    if(cuc[(m , n)]):
        cuc[(m , n)] = luoi(m - 1, n) + luoi(m , n - 1)
    return cuc[(m, n)]
print('So cach =', luoi(m , n))