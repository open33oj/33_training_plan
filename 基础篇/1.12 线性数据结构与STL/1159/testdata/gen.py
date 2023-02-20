from cyaron import *

for i in range(1, 11):
    print(i)
    test_data = IO(file_prefix="", data_id=i)
    if i <= 6:
        n = 10
        q = 10
        cnt = 100
    else:
        n = 100000
        q = 100000
        cnt = 10000000
    test_data.input_writeln(n,q)
    a = []
    now = cnt
    for j in range(n):
        if now > n:
            temp = randint(n//2, min(now,100000))
        else:
            temp = randint(0, min(now,100000))
        a.append(temp)
        now -= temp
    for j in range(n):
        x = randint(0, n-1)
        y = randint(0, n-1)
        t = a[x]
        a[x] = a[y]
        a[y] = t
    choose = []
    for j in range(n):
        if a[j] >= n//2:
            choose.append(j+1)
    print(choose)
    all = []
    for i in range(q):
        now = randint(1,10)
        if i==0 or now <= 6:
            op = 1
        else:
            op = 2
        if op == 1:
            x = choose[randint(0,len(choose)-1)]
            y = randint(a[x-1]//2,a[x-1])
            k = randint(1,1000000000)
            test_data.input_writeln(op,x,y,k)
            all.append([x,y])
        else:
            ri = randint(0,len(all)-1)
            test_data.input_writeln(op,all[ri][0],all[ri][1])
    test_data.output_gen("std.exe")
