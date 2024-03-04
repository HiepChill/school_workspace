def isFibo( n ):
    if(n == 1 or n == 0 or n == 2 or n == 3):
        return n
    else:
        return isFibo(n - 2) + isFibo(n - 1) 
n = int (input( 'Nhap N = '))
dem = 0
for i in range(n + 1):
    if(n == isFibo(i)):
        dem += 1
if(dem == 1):
    print('%d la so Fibonacci' %n)
else:
    print('%d khong phai la so Fibonacci' %n)