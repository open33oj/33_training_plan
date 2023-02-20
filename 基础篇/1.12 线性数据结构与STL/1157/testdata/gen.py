from cyaron import *

for i in range(1, 11):
    test_data = IO(file_prefix="", data_id=i)
    if i <= 6:
        n = 10
    else:
        n = 100
    test_data.input_writeln(n)
    for j in range(n):
        op = randint(1, 3)
        test_data.input_writeln(op, randint(1, 1000))
    test_data.output_gen("std.exe")
