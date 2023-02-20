## Description

City B, a famous city, has introduced a preferential plan for changing from subways to buses in order to encourage people to use public transportation:

1. After taking the subway once, you will get a discount ticket, valid for $45$ minutes. You can use this ticket during its valid period to take a bus whose fare does not exceed the ticket's fare for free. A valid period means that the difference between the time you take the bus and the time you take the subway is less than or equal to $45$ minutes, which is: $t_{bus} - t_{subway} \le 45$.
2. The discount ticket can be stacked up to multiple tickets, which means you can take the subway several times and then use one of the tickets to take the bus.
3. When taking the bus, if you can use a ticket, you will definitely use it. If there are multiple tickets that meet the conditions, you will use the earliest one.

Given a list of recent public transportation used by Xiaoxuan, help him calculate how much he needs to pay.

## Input Format

The first line contains a single integer $n$, which is the number of rides in the list.

Each of the following $n$ lines contains $3$ integers, seperated by spaces. The $1$st integer in the $i$th line represents the type of transportation that Xiaoxuan used, where $0$ means the subway, and $1$ means the bus. The $2$nd integer represents the $price_i$ of the $i$th ticket. The $3$rd integer represents the time $t_i$ when he used this transportation in minutes (calculated from $0$).

It is guaranteed that the list will be given in increasing order of the time when Xiaoxuan used the ride, and no two records will appear in the same minute.

## Output Format

Print a single line containing how much Xiaoxuan needs to pay.

```input1
6
0 10 3
1 5 46
0 12 50
1 3 96
0 5 110
1 6 135
```
```output1
36
```

First, you took a subway at time $3$ for $10$ yuan.\
Next, you took a bus at time $46$. You will use the ticket obtained from the first ride, so you don't have to pay.\
The third line shows that you took a subway at time $50$ for a cost of $12$ yuan.\
In the fourth ride, you took a bus at time $96$, and since it has been more than $45$ minutes since the last time you took the subway, you will have to pay $3$ yuan.\
In the fifth ride, you took a subway at time $110$ for a cost of $5$ yuan.\
At the last ride, you took the bus at time $135$, but you can't use the last ticket because the bus's fare is higher than the fare of your only valid ticket $(6>5)$. So you have to pay $6$ yuan.

In total, you'll need to pay $10 + 12 + 3 + 5 + 6 = 36$ yuan.

```input2
6
0 5 1
0 20 16
0 7 23
1 18 31
1 4 38
1 7 68
```
```output2
32
```

First, you took a subway at time $1$ for $5$ yuan.\
Next, you took another subway at time $16$ for $20$ yuan.\
The third line shows that you took another subway at time $23$ for a cost of $7$ yuan.\
In the fourth ride, you took a bus at time $31$ with a cost of $18$ yuan, and the only valid ticket is the one you got after taking the second subway, so you will use it to take this bus without any cost.\
In the fifth ride, you took a bus at time $38$ with a cost of $4$ yuan. You have two valid tickets to use so you will use the first one which you got from taking the subway at time $1$.\
At the last ride, you took the bus at time $68$, and you can use the last ticket to avoid paying $7$ yuan.

In total, you'll need to pay $5 + 20 + 7 = 32$ yuan.

## Constraints

For $30\%$ of the data, $n \le 1000, t_i \le 10^6$.\
For another $15\%$ of the data, $t_i \le 10^7$, and all tickets' prices are equal.\
For another $15\%$ of the data, $t_i \le 10^9$, and all tickets' prices are equal.\
For $100\%$ of the data, $n \le 10^5, t_i \le 10^9, 1 \le price_i \le 1000$.
