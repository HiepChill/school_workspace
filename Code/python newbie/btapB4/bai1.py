s = str(input('Nhập chuỗi:'))
if s.endswith('!!!'):
    print('True')
else:
    print('False')
    for i in s:
        s = s + '!'
        if s[-1] == '!' and s[-2] == '!' and s[-3] == '!':
            break
    print(s)

        

        
