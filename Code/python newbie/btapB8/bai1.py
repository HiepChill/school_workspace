while True:
    try:
        a = int(input('Nhap so nguyen a: '))
        b = int(input('Nhap so nguyen b: '))
        print(a / b)
        break
    except ValueError:
        print('Loi! Do nhap sai gia tri!')
    except ZeroDivisionError:
        print('Loi! Do nhap sai gia tri!')
