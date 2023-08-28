#!/usr/bin/python3

def magic_calculation(a, c):
    result = 0
    for i in range(1, 3):
        try:
            if i > a:
                raise Exception('Too far')
            else:
                result += a ** c / i
        except:
            result = c + a
            break
    return (result)
