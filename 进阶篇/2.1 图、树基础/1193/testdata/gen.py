from cyaron import *


for i in range(1, 6):
    test_data = IO(file_prefix="", data_id=i)
    if i<=3:
        n=10
    else:
        n=1000
    tree = Graph.tree(n, 0.4, 0.35,weight_limit=100)
    test_data.input_writeln(n)
    # test_data.input_writeln(tree.to_str(output=Edge.unweighted_edge,shuffle=True))
    test_data.input_writeln(tree.to_str(shuffle=True))
    test_data.output_gen("std.exe")
