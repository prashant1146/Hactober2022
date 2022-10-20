import math
a=int(input('enter the value of a:'))
b=int(input('enter the value of b:'))
c=int(input('enter the value of c:'))
d=(b**2)-(4*a*c)
if d >0:
    root1=(-b + math.sqrt(d)/(2*a))
    root2=(-b - math.sqrt(d)/(2*a))
    print("two distinct real roots are %.2f and %.2f" %(root1,root2))
elif d==0:
    root1=root2=-b/(2*a)
    print("two equal real roots are %.2f and %.2f" %(root1,root2))

elif d<0:
    root1=root2=-b/(2*a)  
    imaginary=math.sqrt(-d)/(2*a)
    print("two distinct complex roots are %.2f + %.2f and %.2f - %.2f" %(root1,imaginary,root2,imaginary))


