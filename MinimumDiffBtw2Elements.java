public class MinimumDifference {
  public static void main(Strng[] args) {
    scanner sc=new scanner(System.in);
      System.out.println("Enter the size of the array:");
        int size,i,j;
        size=sc.nextInt();
        int arr[]=new int[size];
        System.out.println("Enter the Element of the array:");
        for(i=0;i<size;i++)
        {
          arr[i]=sc.nextInt();
        }
        
        int Min_diff=Integer.MAX_VALUE;
        for(i=0;i<size-1;i++)
        {
          for(j=i+1;j<size;j++)
          {
            if(Math.abs(arr[j]-arr[i]<Min_diff)
               {
                 Min_diff=Math.abs(abs(arr[j]-arr[i]));
               }
               }}
               System.outprintln("Minimum difference between two Element is "+Min_diff);
                 sc.close();
          }
    }
               
                
