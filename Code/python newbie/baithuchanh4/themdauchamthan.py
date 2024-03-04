s = str(input('Nhap S: '))
dem = 0
for i in s[-1 : -4 : -1]:  
    if i == '!':
        dem = dem + 1
    else: break;
if dem == 0 : s = s + '!!!'
if dem == 1 : s = s + '!!'
if dem == 2 : s = s + '!'
print("Chuoi S sau khi xu ly:" , s )