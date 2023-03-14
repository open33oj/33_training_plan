from cyaron import *


for i in range(1, 6):
    test_data = IO(file_prefix="", data_id=i)
    if i <= 3:
        n = 10
    else:
        n = 1000
    m = randint(n, int(n*1.5))
    graph = Graph.graph(n, m)
    test_data.input_writeln(n, m)
    test_data.input_writeln(graph.to_str(
        output=Edge.unweighted_edge, shuffle=True))
    test_data.output_gen("std.exe")
