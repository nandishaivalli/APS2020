#https://www.hackerrank.com/challenges/sparse-arrays/problem
lst = []
for i in range(int(input())):
    lst.append(input())
for i in range(int(input())):
    query_string = input()
    count = 0
    for i in range(len(lst)):
        if query_string == lst[i]:
            count += 1
    print(count)
