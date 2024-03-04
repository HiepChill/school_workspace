def nhuan( y ):
    return ((y % 4 == 0 and y % 100 != 0) or y % 400 == 0)

def ngay_trong_thang( m ):
    if 1 <= m <= 12:
        if m == 1 or m == 3 or m == 5 or m == 7 or m == 8 or m == 10 or m == 12:
            return 31
        elif m == 2:
            if nhuan( y ):
                return 29
            return 28
        elif m == 4 or m == 6 or m == 9 or m == 11:
            return 30
    else:
        print('Nhập sai tháng ! Tháng không tồn tại !')

def next_day( d , m , y ):
    nd == d
    nm == m
    ny == y
    if(y > 0 and m > 0 and m < 13 and d > 0 and d <= (ngay_trong_thang(m , y))):
        nd = d + 1
        if(m != 12 and d == ngay_trong_thang(m , y)):
            nd = 1
            nm = m + 1
        elif(m == 12 and d == ngay_trong_thang(m , y)):
            nd = 1
            ny = y + 1
            nm = 1
        elif(m == 2):
            if(nhuan(y)):
                if(d == 29):
                    nd = 1
                    nm = m + 1
            else:
                if(d == 28):
                    nd = 1
                    nm = m + 1
    print('Ngày tiếp theo là: %d / %d / %d' %nd  %nm  %ny)               

d = int( input( "Nhập ngày: "))
m = int( input( "Nhập tháng: "))
y = int( input( 'Nhập năm: '))

next_day(d , m , y)
