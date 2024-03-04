def ktra_snt(n , x):
    x = 2
    while (x < n):
        if n % x == 0:
            return False
    else:
        return True
a = int(input('A = '))
b = int(input('B = '))
while(a <= b):
    if(ktra_snt( (a , b) ) == True):
        print((a , b))