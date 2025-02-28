# def sum(num1, num2, num3=0):
#     return num1+num2+num3

# print(sum(1,2,3))

def summ(n1,n2,*numbers):
    sum = 0
    for i in numbers:
        sum+=i

    sum+=n1
    sum+=n2
    return sum

total = summ(6,7,1,2,3,4,5)
print(total)