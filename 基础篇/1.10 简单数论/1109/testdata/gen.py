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
    if i <= 8:
        nowP = (int(2e3) - randint(1,100)) // 2 * 2 + 1
        while not p(nowP):
            nowP = (int(2e3) - randint(1,100)) // 2 * 2 + 1
        n = randint(1e3, nowP - 1)
    else:
        nowP = (int(3e6) - randint(1,1000)) // 2 * 2 + 1
        while not p(nowP):
            nowP = (int(3e6) - randint(1,1000)) // 2 * 2 + 1
        n = randint(3e5, nowP - 1)
    test_data.input_writeln(n, nowP)
    test_data.output_gen("std.exe")
