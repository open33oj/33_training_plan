from cyaron import *

for i in range(1, 11):
    test_data = IO(file_prefix="", data_id=i)
    if i <= 6:
        n = randint(5, 10)
        m = randint(5, 10)
    else:
        n = randint(90, 100)
        m = randint(1, 100)
    test_data.input_writeln(n, m)
    test_data.output_gen("std.exe")
