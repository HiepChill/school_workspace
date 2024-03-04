m = int(input("Nhap m = "))
a = []
for i in range(m):
    a.append(int(input("a[" + str(i+1) + "] = ")))

n = int(input("Nhap n = "))
b = []
for i in range(n):
    b.append(int(input("b[" + str(i+1) + "] = ")))

c = [[0] * (n + 1) for _ in range(m + 1)]
for i in range(m+1):
    for j in range(n+1):
        if (i==0 or j==0):
            c[i][j] = 0
        else:
            if (a[i-1] == b[j-1] and a[i-1] > 0):
                c[i][j] = c[i-1][j-1] + a[i-1]
            else:
                c[i][j] = max(c[i-1][j], c[i][j-1])
print("Day con co tong lon nhat =", c[m][n])
        
