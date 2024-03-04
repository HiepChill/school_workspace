while True:
    try:
        a = float(input('a = '))
        b = float(input('b = '))
        c = float(input('c = '))
    except ValueError or (a , b , c) <= 0:
        print('Loi! Nhap lai 3 canh.')  
