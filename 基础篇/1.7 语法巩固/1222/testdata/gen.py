from cyaron import *


def gcd(a, b):
    if b == 0:
        return a
    return gcd(b, a % b)


def lcm(a, b):
    return a//gcd(a, b)*b


for i in range(1, 11):
    test_data = IO(file_prefix="", data_id=i)
    v1 = randint(1, 100)
    v2 = randint(1, v1)
    t = randint(1, 300)
    s = randint(1, 10)
    l = lcm(v1, v2)*randint(1, 10000//lcm(v1, v2))
    test_data.input_writeln(v1, v2, t, s, l)
    test_data.output_gen("std.exe")
