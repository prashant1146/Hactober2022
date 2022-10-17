def bank(p,q,x,y):
    a= int(x/y)   
    b = x%y   
    B=(2*p) + ((a-1)*q)  
    C = p + (a * q)   
  
    money= (y * a /2 * B) + (b * C)  
    print(money)
     

P=int(input("started print money: "))
D=int(input("day of  print money: "))
d=int(input("increase money print in how much days :"))
Q=int(input("increase in  print money per d days: "))
bank(P,Q,D,d)