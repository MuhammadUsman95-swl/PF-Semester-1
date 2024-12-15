def lengthOfNumber(i):
    x = 0
    while i > 0:
        i = i // 10 
        x = x + 1
    return x

number = int(input("Enter number: "))
print("Length of number is:", lengthOfNumber(number))
