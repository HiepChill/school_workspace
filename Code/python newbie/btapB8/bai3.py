def checkfoul(n):
    
while True:
    try:
        n = int(input('Nhap so: '))
        if n == 0:
            break
        if n < 0:
            raise Exception('Lỗi số âm!!!')
        if 
    except ValueError:
        print('Lỗi nhập số!!!')
    except Exception as x:
        print(x)
