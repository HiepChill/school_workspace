def tinh(a, b):
    result = pow(a, b)
    if result > 10**9:
        result %= 10**9 
    return result

a = int(input("Nhập vào số nguyên a: "))
b = int(input("Nhập vào số nguyên b: "))

result = tinh(a, b)
print(result)
