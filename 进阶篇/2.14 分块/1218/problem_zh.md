## 题目背景

<https://www.luogu.com.cn/problem/SP3267>

为了方便评测我造了纯随机的数据做成了本地题

## 题目描述

Given a sequence of n numbers a $ _{1} $ , a $ _{2} $ , ..., a $ _{n} $ and a number of d-queries. A d-query is a pair (i, j) (1 ≤ i ≤ j ≤ n). For each d-query (i, j), you have to return the number of distinct elements in the subsequence a $ _{i} $ , a $ _{i+1} $ , ..., a $ _{j} $ .


## 题面翻译

给出一个长度为n 的数列，$a_{1}$​ ,$a_{2}$​ ,...,$a_{n}$ ，有q 个询问，每个询问给出数对$(i,j)$，需要你给出$a_{i}$​ ，$a_{i+1}$​ ，...，$a_{j}$​ 这一段中有多少不同的数字

## 输入格式

- Line 1: n (1 ≤ n ≤ 30000).
- Line 2: n numbers a $ _{1} $ , a $ _{2} $ , ..., a $ _{n} $ (1 ≤ a $ _{i} $ ≤ 10 $ ^{6} $ ).
- Line 3: q (1 ≤ q ≤ 200000), the number of d-queries.
- In the next q lines, each line contains 2 numbers i, j representing a d-query (1 ≤ i ≤ j ≤ n).

## 输出格式

- For each d-query (i, j), print the number of distinct elements in the subsequence a $ _{i} $ , a $ _{i+1} $ , ..., a $ _{j} $ in a single line.

```input1
5
1 1 2 1 3
3
1 5
2 4
3 5
```

```output1
3
2
3
```