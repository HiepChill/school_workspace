def isPrime( n ):
    if n < 2 :
        return False
    else:
        for i in range (2 , n-1):
            if n % i == 0:
                return False
    return True
n = int (input('Nhập N = '))
if isPrime(n) == True:
    print('Đây là số nguyên tố')
else:
    print('Đây không phải số nguyên tố')