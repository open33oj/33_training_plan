from cyaron import *


for i in range(1, 11):
    test_data = IO(file_prefix="", data_id=i)
    n = randint(1,30)
    all = 0
    v = []
    for i in range(n):
        v.append(randint(1, 10000))
        all += v[i]
    test_data.input_writeln(20000)
    test_data.input_writeln(n)
    test_data.input_writeln(v)
    test_data.output_gen("std.exe")
