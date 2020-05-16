
#https://www.hackerrank.com/challenges/power-of-large-numbers/problem
for i in range(int(input())):
    a, b = map(int, input().split())
    print(pow(a, b, 10 ** 9 + 7))
