def superSeq(X, Y, m, n): 
    
	if (m==0): 
        return n 
        
	if (n==0):
        return m 

	if (X[m - 1] == Y[n - 1]) : 
        return 1 + superSeq(X, Y, m - 1, n - 1) 
        
    return 1 + min(superSeq(X, Y, m - 1, n),superSeq(X, Y, m, n - 1)) 

X = "nandi"
Y = "dish"
print(superSeq(X, Y, len(X), len(Y))) 
