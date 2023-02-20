from cyaron import *


def p(x):
    if x < 2:
        return False
    for i in range(2, int(sqrt(x))):
        if x % i == 0:
            return False
    return True


for i in range(1, 11):
    test_data = IO(file_prefix="", data_id=i)
    if i <= 2:
        test_data.input_writeln(i)
    elif i <= 6:
        yes = i % 2
        now = randint(1, 1e6)
        if yes:
            while not p(now):
                now = randint(1, 1e6)//2*2+1
        else:
            while p(now):
                now = randint(1, 1e6)//2*2+1
        test_data.input_writeln(now)
    else:
        yes = i % 2
        now = randint(1e11, 1e12)
        if yes:
            while not p(now):
                now = randint(1e11, 1e12)//2*2+1
        else:
            while p(now):
                now = randint(1e11, 1e12)//2*2+1
        test_data.input_writeln(now)
    test_data.output_gen("std.exe")
