from cyaron import *

for i in range(1, 11):
    test_data = IO(file_prefix="", data_id=i)
    if i <= 6:
        n = 10
    else:
        n = 1000
    test_data.input_writeln(n)
    '''
    参数 num：生成的向量个数。
    参数 position_range：一个list。内有几个元素那么就是输出几维向量。每个元素可以是一个二维整数（或实数）元组(min,max)表示每一维的取值是[min,max]，也可以是可以是一个整数（或实数）k，则范围是[0,k]。当该参数只有一个元素是，则生成的是一组数列而不是向量
    参数 mode：模式选择。0为互相不重复的整数向量，1为允许出现重复的整数向量（各维完全独立随机），2为实数向量。
    '''
    for j in range(n):
        test_data.input_writeln(randint(1, 2000), randint(1, 2000))
    test_data.output_gen("std.exe")
