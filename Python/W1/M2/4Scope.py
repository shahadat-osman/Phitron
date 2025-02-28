balance = 3000

def shop(item, price):
    global balance
    balance-=price
    print(f'{item} {price}')

shop('banana', 1000)

print(balance)