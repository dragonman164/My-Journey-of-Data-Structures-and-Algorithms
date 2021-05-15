import math

def check_prime(num):
    if num == 1:
        return False
    elif num == 2:
        return True
    else:
        for i in range(2,int(math.sqrt(num)+ 1)):
            if num%i == 0:
                return False
    return True
