a = int(input('a = '))
b = int(input('b = '))
# for i in range (1 , (a + b) // 2):
#     if a % i == 0 and b % i == 0 :
#         if i < a and i < b :
#             print(i , end = ' ')
print({i for i in range (1 , (a + b) // 2) if a % i == 0 and b % i == 0 if i < a and i < b})