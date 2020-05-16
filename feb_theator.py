test_case = input()
for _ in range(int(test_case)):
    request = int(input())
    table = [[0 for i in range(4)] for k in range(4)]
    for i in range(request):
        movie ,time = input().split(" ")
        table[int(ord(movie) - 65)][(int(time)//3)-1] -=-1
    
    m1 = 0
    m2 = 0
    m3 = 0
    m4 = 0
    for i in range(4):
        for j in range(4):
            if m1 < table[i][j] :
                m1 = table[i][j]
                index1 = j 
                indexi1 = i

    for i in range(4):
        for j in range(4):
            if m2 < table[i][j] and j != index1 and indexi1 != i:
                m2 = table[i][j]
                index2 = j
                indexi2 = i

    for i in range(4):
        for j in range(4):
            if m3 < table[i][j] and  j!=index1 and i!=indexi1 and j!=index2 and i!=indexi2 :
                m3 = table[i][j]
                index3 = j

    for i in range(4):
        for j in range(4):
            if m4 < table[i][j] and  j!=index1 and j!=index2 and j!=index3 and  i!=indexi1 and i!=indexi2 and i!=indexi3:
                m4 = table[i][j]
                
    profit = m1*100 + m2*75 + m3*50 + m4*25

    if m1 == 0:
        profit-=100 
    if m2  == 0:
        profit-=100 
        
    if m3 == 0:
        profit-=100 
    if m4  == 0:
        profit-=100 

    print(profit)
    
    """for i in range(4):
        print(table[i])
    """
    
    