#!/usr/bin/python3
def uppercase(some_str):
    leng = len(some_str)
    for z in range(0, leng):
        x = some_str[z]
        if ord(x) >= ord('a') and ord(x) <= ord('z'):
            x = chr(ord(x) - 32)
        print('{}'.format(x), end='')
    print()
