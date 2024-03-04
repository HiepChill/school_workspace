def Fibo(n):
    if n == 0:
        return 0
    if n == 1:
        return 1
    if n > 1:
        return Fibo(n - 1) + Fibo(n - 2)

n = int(input("Nhap n = "))
a = Fibo(n)
print(f'So Fibonacci thu {n} la: {a}')

    
    