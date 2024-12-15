def checkNumberStatus(i):
    digitSum = 0
    
    while(i > 0):
        digit = i%10
        digitSum = digitSum + digit
        i = i // 10
    if digitSum % 2 == 0:
        return "Evenish"
    else:
        return "Oddish"

number = int(input("Enter number: "))
print(checkNumberStatus(number))
