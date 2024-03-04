def fibo(n , a = 0 , b = 1):
    if n == a:
        return True
    elif n < b:
        return False
    else:
        return fibo(n , b , a + b)
L = [i for i in fibo(int(input('Nhap N = ')))]
print(L)
