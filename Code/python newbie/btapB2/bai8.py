a = float( input( 'Nhap A = '))
b = float( input( 'Nhap B = '))
c = float( input( 'Nhap C = '))
m1 = max (a,b,c)
m2 = min (a,b,c)
print('Số lớn nhất trong 3 số là : ',m1)
m3 = a + b + c - m1 - m2
if m3 == m1:
    print ('Số thứ 3 là: ',m2)
