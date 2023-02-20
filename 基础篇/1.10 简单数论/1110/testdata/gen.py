from cyaron import *


def p(x):
    if x < 2:
        return False
    for i in range(2, int(sqrt(x)) + 1):
        if x % i == 0:
            return False
    return True


for i in range(1, 3):
    test_data = IO(file_prefix="", data_id=i)
    nowP = 20000528
    while not p(nowP):
        nowP = randint(2e7 - 1e5, 2e7) // 2 * 2 + 1
    test_data.input_writeln(3000000, nowP)
    test_data.output_gen("std.exe")
