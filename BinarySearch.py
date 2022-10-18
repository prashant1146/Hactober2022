def BinarySearch(list1,key):
    low=0
    high=len(list1)-1
    found=False
    while low<=high and not Found:
        mid=(low+high)//2
        if key==list1[mid]:
            Found=True
        elif key>list1[mid]:
            low=mid+1
        else:
                high=mid-1
                if Found==True:
                  print("key is found")
                else:
                    print("key is not found")

    list1=[23,1,5,2,3]
    list1.sort()
    print(list1)
    key=int(input("enter the key:"))
    BinarySearch(list1,key)
