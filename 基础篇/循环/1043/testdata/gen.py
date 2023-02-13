from cgi import test
from cyaron import *

for i in range(1, 11):
    test_data = IO(file_prefix="", data_id=i)
    if i == 1:
        n = 1
    elif i <= 6:
        n = randint(1, 100)
    else:
        n = randint(101, 1000)
    test_data.input_writeln(n)
    test_data.output_gen("std.exe")
