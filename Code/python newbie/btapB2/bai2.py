from math import sqrt


def area(a,b,c):
    p = (a + b + c)/2
    S = sqrt(p * (p - a) * (p - b) * (p - c))
    return S
a = float( input( 'Canh thu nhat = '))
b = float( input( 'Canh thu hai = '))
c = float( input( 'Canh thu ba = '))
S = area(a,b,c)
print('Dien tich cua tam giac = ',S) 
