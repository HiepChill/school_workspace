def eliminate(n , k) :
    pos = 1
    for i in range (2 , n + 1) :
        pos = (pos + k - 1) % i + 1
    return pos
n = int(input('So nguoi ngoi quanh ban: '))
k = 3 
print('Nguoi o lai cuoi cung la nguoi thu' , eliminate(n , k))

