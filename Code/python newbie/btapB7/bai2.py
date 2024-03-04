dic = dict()
while True:
    keys = input('Nhap key: ')
    if keys == '':
        break;
    dic[keys] = input('Nhap value: ')
print(dic) 