n=int(input("please enter the number: "))
lst=list(range(1,n)) # zero is not included.
print(lst)

sum=0

for i in lst:
  if(i>0):
    if(i%2==0):
      sum+=i
print("summation =",sum)
