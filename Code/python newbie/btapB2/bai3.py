
def area2(x1 , x2 , x3 , y1 , y2 , y3):
    return abs( (x2 - x1) * (y3 - y1) - (x3 - x1) * (y2 - y1) ) / 2
x1 = int( input( 'x1 = '))
x2 = int( input( 'x2 = ')) 
x3 = int( input( 'x3 = '))
y1 = int( input( 'y1 = '))
y2 = int( input( 'y2 = '))
y3 = int( input( 'y3 = '))
print('Dien tich tam giac = ',area2(x1 , x2 , x3 , y1 , y2 , y3))