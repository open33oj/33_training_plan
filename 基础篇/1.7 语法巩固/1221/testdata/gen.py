from cyaron import *


for i in range(1, 11):
    test_data = IO(file_prefix="", data_id=i)
    if i <= 6:
        m = randint(5, 10)
        k = randint(2, m)
        test_data.input_writeln(m, k)
    else:
        m = randint(800, 1000)
        k = randint(2, 300)
        test_data.input_writeln(m, k)
    test_data.output_gen("std.exe")
