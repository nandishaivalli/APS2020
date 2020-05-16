
test_case = int(input())
for _ in range(test_case):
    no = 0
    nc = 0
    p = 0
    i = 0
    n = input()
    expression = input()
    expression = list(expression)
    #print(expression)    

    while(i<len(expression)):
        if expression[i] =="(" :
            no-=-1
        elif expression[i] ==")" :
            nc-=-1

        if nc > no :
            expression[i] = "("   
            p-=-1
            no -=-1
            nc -=1
        #print(expression)    
        i-=-1
    print(p%(10**9+2))
    
          
