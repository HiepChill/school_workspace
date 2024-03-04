m = int(input("Nhap m = "))
n = int(input("Nhap n = "))
a = []
for i in range(n):
    a.append(int(input("a["+str(i)+"] = ")))

memo = {}

def subarrm(n, m, a):
    if (n, m) in memo:
        return memo[(n, m)]
    elif n == 0:
        return 0
    elif n == 1 and m == a[0]:
        return 1
    else:
        if m > a[n-1]:
            memo[(n, m)] = subarrm(n-1, m-a[n-1], a) + subarrm(n-1, m, a)
        elif m == a[n-1]:
            memo[(n, m)] = 1 + subarrm(n-1, m, a)
        else:
            memo[(n, m)] = subarrm(n-1, m, a)
        return memo[(n, m)]

print("Co tat ca "+str(subarrm(n, m, a))+ " cach phan tich.")