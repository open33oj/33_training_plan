from cgi import test
from cyaron import *

x = []
for i in range(2, 1001):
    flag = True
    for j in range(2, i):
        if i % j == 0:
            flag = False
    if flag:
        x.append(i)
for i in range(1, 11):
    test_data = IO(file_prefix="", data_id=i)
    if i == 1:
        n = 1
    elif i % 3 == 0:
        n = x[randint(0, len(x)-1)]
    else:
        n = randint(1, 1000)
    test_data.input_writeln(n)
    test_data.output_gen("std.exe")
