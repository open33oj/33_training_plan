from cyaron import *

for i in range(1, 11):
    test_data = IO(file_prefix="", data_id=i)
    if i <= 6:
        n = randint(5, 10)
        k = randint(3, n)
    else:
        n = randint(950, 1000)
        k = randint(900, n)
    test_data.input_writeln(n, k)
    test_data.output_gen("std.exe")
