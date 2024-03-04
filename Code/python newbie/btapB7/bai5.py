prices = dict()
stocks = dict()
while True:
    keys = input('Nhap key: ')
    if keys == '':
        break;
    prices[keys] = input('Nhap value ' + keys + ' :')
while True:
    keys = input('Nhap key: ')
    if keys == '':
        break;
    stocks[keys] = input('Nhap value stocks: ')
d = dict()
for i in prices.keys():
    a = dict()
    a[i] = float(prices.setdefault(i , 0)) * float(stocks.setdefault(i , 0))
    d.update(a)
d2 = sorted(d.items() , key = lambda x : x[1] , reverse = True)
print('Ket qua in ra thu tu: ')
for i in d2: print(i[0] , '\t' , i[1])
