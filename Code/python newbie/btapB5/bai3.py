# def count_uoc(n):
#     sum = 0
#     for i in range (1 , n):
#         if n % i == 0:
#             sum = sum + i
#     if sum > n : print(n , end = ' ')
# n = int(input('Nhap N = '))
# for i in range (1 , n):
#     count_uoc(i)
        

print([k for k in range (1,int(input('N = '))) if sum([i for i in range (1 , k) if k % i == 0]) > k])