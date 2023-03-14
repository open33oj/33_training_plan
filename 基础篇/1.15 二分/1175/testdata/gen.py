from cyaron import *


for i in range(1, 11):
    test_data = IO(file_prefix="", data_id=i)
    if i <= 9:
        n = q = 10
        l = 1
        r = 100
    else:
        n = q = 1000000
        l = 1
        r = 1000000000
    test_data.input_writeln(n, q)
    a = []
    for i in range(n):
        a.append(randint(l, r))
    test_data.input_writeln(a)
    for i in range(n):
        if i % 2 == 0:
            test_data.input_writeln(a[randint(0, n-1)])
        else:
            test_data.input_writeln(randint(l, r))
    test_data.output_gen("std.exe")
