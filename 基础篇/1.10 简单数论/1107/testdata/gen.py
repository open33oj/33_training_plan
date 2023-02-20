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
        now = randint(900, 1000)
        test_data.input_writeln(now)
    else:
        yes = i % 2
        now = randint(1e6, 1e7)
        test_data.input_writeln(now)
    test_data.output_gen("std.exe")
