def C(k , n):
    if (k == 0 or k == n): 
        return 1
    if (k == 1): 
        return n
    return C(k - 1 , n - 1) + C(k , n - 1)
print('<-------PASCAL------->')
n = int(input('Nhap N = '))
for i in range(n):
    for j in range(i + 1):
        print(C(j , i) , end = ' ')
    print('\n')



# def factorial(n):
#     f = 1
#     while (n > 1):
#         f = f * n
#         n = n - 1
#     return f
 
# def ncr(n, r):
#     return int(factorial(n) / (factorial(n - r) * factorial(r)))
 
# n = int(input('N = '))
# print("Ve tam giac Pascal:");
# for i in range(0, n + 1):
#     for j in range(0, n - i + 1):
#         print("", end = "  ")
 
#     for j in range(0, i + 1):
#         print(" {:<3}".format(ncr(i, j)), end="")
 
#     print("")