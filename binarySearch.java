import java.util.Scanner;

  public static void binarySearch(int arr[], int first, int last, int key)
  {  
   int mid = (first + last)/2;  
   while( first <= last ){  
      if ( arr[mid] < key ){  
        first = mid + 1;     
      }else if ( arr[mid] == key ){  
        System.out.println("Element is found at index: " + mid);  
        break;  
      }else{  
         last = mid - 1;  
      }  
      mid = (first + last)/2;  
   }  
   if ( first > last ){  
      System.out.println("Element is not found!");  
   }  
 }  

 public static void main(String args[])
 {  
   Scanner s=new Scanner(System.in);
   int n=s.nextInt() ;
   int[] arr=new int[n];
   
   for(int i=0;i<arr.length;i++)
   {
     arr[i]=s.nextInt();
   }
   int key=s.nextInt();
   int last=arr.length-1;
   int result=binarySearch(arr,0,last,key);
 }
