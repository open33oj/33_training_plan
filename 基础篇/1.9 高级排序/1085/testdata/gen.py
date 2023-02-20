from cyaron import *

for i in range(1, 11):
    test_data = IO(file_prefix="", data_id=i)
    if i <= 4:
        n = 10
        test_data.input_writeln(n)
        for j in range(n):
            test_data.input_write(randint(1, 100))
    elif i <= 6:
        n = 1000
        test_data.input_writeln(n)
        for j in range(n):
            test_data.input_write(randint(1, 1e9))
    else:
        n = 1000000
        test_data.input_writeln(n)
        for j in range(n):
            test_data.input_write(randint(1, 1e9))
    test_data.output_gen("std.exe")