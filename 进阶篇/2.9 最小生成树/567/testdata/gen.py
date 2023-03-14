from cyaron import *
for i in range(1, 11):
    test_data = IO(file_prefix="", data_id=i) 
    if i <= 6:
        n = randint(1, 10)
    else:
        n = randint(90, 100)
    m = randint(n-1, 4*n)
    test_data.input_writeln(n, m)
    graph = Graph.graph(n, m, weight_limit=100)
    test_data.input_writeln(graph)
    test_data.output_gen("std.exe") 
