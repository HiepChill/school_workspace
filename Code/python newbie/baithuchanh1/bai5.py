# a = int(input('A = '))
# b = int(input('B = '))
# c = int(input('C = '))

# if a==b and b==c:
#     print('Xep hang tang dan:',a)
# else:
#     sln == max(a,b,c)
#     snn == min(a,b,c)
#     sog == ( a + b + c - tg1 - tg2 )
#     if(tg3 == tg1):
#         print('Xep hang tang dan:',snn,sog)
#     elif(tg3 == tg2):
#         print('Xep hang tang dan:',tg3,tg1)
#     else:
#         print("Xep hang tang dan:",tg2,tg3,tg1)


a = int (input("A = "))
b = int (input("B = "))
c = int (input("C = "))

if a == b and b == c :
    print("Xep tang dan:",a)
else:
    max1 = max (a,b,c)
    min1 = min(a,b,c)
    t = a + b + c - max1 - min1
    if t == max1:
        print("Xep tang dan:",min1,t)
    elif t == min1:
        print("Xep tang dan:",t,max1)
    else:
        print("Xep tang dan:",min1,t,max1)
