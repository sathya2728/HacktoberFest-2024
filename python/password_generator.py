import random

def password_generator(pw_lengths):
    data_string = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789@$^&**_"
    passwords_list = []
    
    for length in pw_lengths:
        password = ''
        for _ in range(length):
            nxt_ind = random.randrange(len(data_string))
            password += data_string[nxt_ind]  # Concatenate characters
        passwords_list.append(password)
    
    return passwords_list

n = int(input("Number of passwords to generate: "))
print('Generating', n, 'PASSWORDS')
password_lengths = []

for i in range(n):
    print('NOTE: Minimum length of password is 6!')
    length = int(input('Enter the length of password ' + str(i + 1) + ': '))
    if length < 6:
        length = 6
        print('Length set to 6 due to minimum requirement.')
    password_lengths.append(length)

passwords = password_generator(password_lengths)

for i in range(n):
    print('Password', i + 1, '=', passwords[i])
