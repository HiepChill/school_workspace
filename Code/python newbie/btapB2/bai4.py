
def total(n):
    tong = 0
    while(n != 0):
        a = n % 10
        tong += a
        n //= 10
    return tong
n = int( input( 'Nhap N = '))
tong = total( abs(n) )
print('Tong cac chu so trong N = ',tong) 