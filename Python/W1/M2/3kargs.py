def full_name(first, last, title):
    name = f'{title} {first} {last}'
    return name

print(full_name(title = 'Mr', first= 'Shahadat', last='Osman'))


def especial_name(first, last, **addition):
    name = f'{first} {last}'

    for key, value in addition.items():
        print(f'{key}, {value}')
    
    return name

name = especial_name('MS', 'Osman', title = 'Mr', desg = 'SWE')

print(name)