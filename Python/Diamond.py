def print_upper_diamond(n):
    for i in range(n):
        print(' ' * (n - i - 1), end='')
        print('*' * (2 * i + 1))
n = int(input("Enter the number of rows for upper half of diamond: "))
print_upper_diamond(n)