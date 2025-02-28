numbers = [23,33,34,11,56,77,54,63,88,82]

odd_nums=[]

for num in numbers:
    if(num%2==1):
        odd_nums.append(num)

print(odd_nums)

# another method, list comprehension
odd_nums_2 = [num for num in numbers if num%2==1]

print(odd_nums_2)



players = ['tamim', 'mushi', 'fizz']
ages = [40,41,34]

age_comb = []

for player in players:
    for age in ages:
        age_comb.append([player,age])

print(age_comb)


age_comb_2 = [[player,age] for player in players for age in ages]

print(age_comb_2)