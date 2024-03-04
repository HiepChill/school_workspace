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