from cyaron import *

for i in range(1, 11):
    test_data = IO(file_prefix="", data_id=i)
    if i <= 4:
        a = randint(2, 8)
        b = randint(2, 8)
        p = int(1e9)
    elif i <= 6:
        a = randint(1e8, 1e9)
        b = randint(900, 1000)
        p = randint(1e8, 1e9)
    else:
        a = randint(1e8, 1e9)
        b = randint(1e8, 1e9)
        p = randint(1e8, 1e9)
    test_data.input_writeln(a, b, p)
    test_data.output_gen("std.exe")
