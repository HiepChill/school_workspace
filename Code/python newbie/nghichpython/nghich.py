import random
result = random.randint (0,10)
n = -1
while(n != result):
    n = int(input("Hãy đoán số của tôi: "))
    if(n > result):
        print("Bạn đoán sai rồi, số của tôi bé hơn ")
    elif (n < result):
        print("Bạn đoán sai rồi, số của tôi lớn hơn ")
print("Chúc mừng bạn đã đoán đúng, giải thưởng 1 tỉ USD")


# thu_cung = ['chó','mèo','gà','chuột','vịt','cá sấu']
# for babe in thu_cung:
#     if babe == 'gà': 
#         continue
#     print(babe)
# else:
#     print(babe)


# import math

# print(math.lcm(3,4))

# ten = 'Hiep Chu'
# tuoi = 100
# print('Chao ban',ten,'ban da',tuoi,'roi co a')
# s = f'chao ban {ten} ban da {tuoi} roi co a'
# print(s)

# print('a: {}, b: {}, c: {}'.format(1, 2, 3))


# k = input('K = ').rsplit(',',5)
# print(k)

# print('-'.join(('1', '2', '3')))

# s = '12345'
# s.find(str(2))

# n = [a for a in range(100)]
# print(n)

#a = [1 , 2 , 3]
# b = [1 , 2 , 3 , 4]
# print(a + [4] == b)
# a.pop(2)
# print(a)

# s = [n for n in range(100) if str(n) == str(n)[ : : -1]] #list comprehension
# print(s)

# t0 = (c for c in '')
# s = 'Chu Manh Vu Hiep'.split()
# print(s.sort(key = str.lower))

# danhsach = ["apple", "banana", "cherry"]
# for x in danhsach:
#     print(x)
# danhsach.append("orange")
# print(danhsach)
# danhsach.insert(1, "orange")
# danhsach.sort()
# print(danhsach)
# print(danhsach)

# dic = {'a' : 1 , 'b' : 2 , 'c' : 3 , 'd' : 4 , 'e' : 5}
# print(dic.pop('e'))

# while True:
#     try:
#         x = int(input('Nhap: '))
#         break
#     except ValueError as e :
#         print(e)
#     else:
#         x = x + 10
#     finally:
#         print('1')
# print(x)
# n = int(input('n = '))
# k = 3
# pos = 1
# for i in range (2 , n + 1) :
#     pos = (pos + k - 1) % i + 1
# print(pos)
