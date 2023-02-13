from cyaron import *

for i in range(1, 11):
    test_data = IO(file_prefix="", data_id=i)
    if i % 5 == 0:
        test_data.input_writeln(
            randint(1, 1000), randint(1, 1000), randint(1, 1000))
    elif i % 5 == 1:
        x = randint(1, 1000)
        test_data.input_writeln(x, x, randint(1, 1000))
    elif i % 5 == 2:
        x = randint(1, 1000)
        test_data.input_writeln(randint(1, 1000), x, x)
    elif i % 5 == 3:
        x = randint(1, 1000)
        test_data.input_writeln(x, randint(1, 1000), x)
    elif i % 5 == 4:
        x = randint(1, 1000)
        test_data.input_writeln(x, x, x)
    test_data.output_gen("std.exe")
