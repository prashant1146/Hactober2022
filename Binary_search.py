def binary_search(x,key):
  s=0
  end=(len(lst)-1)
  while(s<=end):
    mid=(s+end)//2
  if(lst[mid]<key):
    start=mid+1
  elif(lst[mid]>key):
    end=mid-1
  else:
    return mid
  return -1

lst=[]
n=1
while(n!=0):
  n=int(input("please enter the element:"))
  if(n!=0):
    lst.append(n)
print(lst)

m=int(input("please enter the key:"))

y=binary_search(lst,m)
print(y)
