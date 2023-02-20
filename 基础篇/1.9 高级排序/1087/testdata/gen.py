from cyaron import *

x = []
for i in range(1000000):
    x.append(randint(1, 1000000000))
for i in range(1, 11):
    test_data = IO(file_prefix="", data_id=i)
    if i <= 4:
        n = 10
    elif i <= 6:
        n = 1000
    elif i <= 8:
        n = 100000
    else:
        n = 1000000
    test_data.input_writeln(n)
    now = 0
    for j in range(n):
        if now > 0:
            op = randint(1, 3)
        else:
            op = 1
        if op == 1:
            now += 1
        elif op == 3:
            now -= 1
        test_data.input_writeln(op, x[j])
    test_data.output_gen("std.exe")
