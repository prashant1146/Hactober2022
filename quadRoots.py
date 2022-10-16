import math
a=int(input("please enter the value of 'a':"))
b=int(input("please enter the value of 'b':"))
c=int(input("please enter the value of 'a':"))

D=(b*b)-(4*a*c)

if(a!=0): # a!=0. (leading co-efficient are not equal to zero.)
  if(D>0):
    x_1=(-b+math.sqrt(D))/(2*a)
    x_2=(-b-math.sqrt(D))/(2*a)
    print(f"root's are real and different x_1={X_1}, x_2={X_2}.")
  elif(D==0):
    x_1=(-b/2*a)
    print(f"root's are real and equal x_1={X_1}, x_2={X_1}.")
  else:
    print(f"root's are imaginary")
        root=(-b)/(2*a)
        imag=(math.sqrt(-D))/(2*a)
        print(f'x_1={root} + i{imag}')
        print(f'x_2={root} - i{imag}')
    
