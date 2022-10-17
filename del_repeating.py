lst=[1,1,2,1,4,5,3]
print(lst)

count=0

for num in lst:
  if(lst.count(num)>1):
    print(f'{num} found {lst.count(nm)} time.')
    
final_lst=[]

for i in lst:
  if i not in final_lst:
    final_lst.append(i)
print("final_lst= ",final_lst)
