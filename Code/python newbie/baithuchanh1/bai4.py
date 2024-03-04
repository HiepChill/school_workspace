# def fibo(n):
#     if(n == 1 or n == 0 or n == 2 or n == 3):
#         return n
#     else:
#         return fibo(n - 2) + fibo(n - 1) 

# n = int(input('N = '))
# dem = 0
# for i in range (n + 1):
#     if fibo(i) == n:
#         if(n % 2 == 0):
#             dem += 1
# if dem == 1:
#     print('N la so fibonacci chan')
# else:
#     print('N khong phai la so fibonacci chan')

def fibo(n,a = 0,b = 1):
    if n == a:
        return True
    elif n < b:
        return False
    else:
        return fibo(n,b,a + b)

n = int (input("N = "))
if fibo(n) and n % 2 == 0 :
    print("N la so fibonacci chan")
else:
    print ("N khong phai la so fibonacci chan") 