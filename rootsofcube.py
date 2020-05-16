#using formula find the roots of cubic eqn
a = 3
b = 4
c = 4
d = 3

#ax3+bx2+cx+d=0

p = (-1*b)/(3*a)
q = p**3 + (b*c-3*a*d)/(6*a**2)
r = c/(3*a)

x = (q+(q**2 + (r-p**2)**3)**0.5)**(1/3) + (q-(q**2 + (r-p**2)**3)**0.5)**(1/3) + p
print(x)