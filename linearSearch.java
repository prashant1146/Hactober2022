import java.util.Scanner;
public static int linSearch(int arr[],int x)
{
  int z=arr.length;
  for(int i=0;i<z;i++)
  {
    if(arr[i]==x)
      return i;
  }
}

public static void main(String args[])
{
  Scanner s=new Scanner(System.in);
   int n=s.nextInt();
  int[] arr=new int[n];
  
  for(int i=0;i<arr.length;i++)
  {
    arr[i]=s.nextInt();
  }
  int x=s.nextInt();
  int result=linSearch(arr,x);
  if(result==-1)
  {
    System.out.print("Element is not present in Array");
  }
  else{
    System.out.println("Element is present at index" + result);
  }
}

  
