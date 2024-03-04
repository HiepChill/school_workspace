# print('NHAP BANG GIA:')
# prices = dict()
# stocks = dict()
# while True:
#     keys = input('Ten mat hang: ')
#     if keys == '':
#         break
#     prices[keys] = input('Gia ban hang: ')
# print('NHAP HANG TON:')
# while True:
#     keys = input('Ten mat hang: ')
#     if keys == '':
#         break
#     stocks[keys] = input('So luong ton kho: ')
# d = dict()
# for i in prices.keys():
#     a = dict()
#     a[i] = float(prices.setdefault(i , 0)) * float(stocks.setdefault(i , 0))
#     d.update(a)
# d2 = sorted(d.items() , key = lambda x : x[1] , reverse = True)
# print('THONG KE HANG TON:')
# for i in d2:
#     print(i[0].ljust(6) , ' ' , i[1])



def nhap(tb1, xxx, tb2):
    print(tb1)
    data = {}
    while True:
        name = input("  Ten mat hang: ")
        if len(name) == 0: break
        data[name] = xxx(input(tb2))
    return data
price = nhap("NHAP BANG GIA:", float, "  Gia ban hang: ")
stock = nhap("NHAP HANG TON:", int, "  So luong ton kho: ")
L = [(w, 0 if w not in stock else stock[w] * price[w]) for w in price]
L.sort(key = lambda x: (-x[1], x[0]))
c1 = max([len(w[0]) for w in L])
print("THONG KE HANG TON:")
for w in L:
    print(" ",w[0].ljust(c1), f'{w[1]:6.2f}')
