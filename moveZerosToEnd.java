public class MoveZeros{
  public static void main(String[] args) {
    int arr[] ={ 1,2,0,1,0,4,0};
      zerosToEnd(arr);
  }
  public static void zerosToEnd(int[] arr) {
    
        int n = arr.length;
        int temp[] = new int[n];
        int k=0;
        for (int i=0;i<n;i++){
          if (arr[i]!=0){
            temp[k]=arr[i];
            k++;
          }
        }
     
        while (k<n){
          temp[k]=0;
          k++;
        }
       for(int i=0;i<n;i++)
       {
         System.out.print(temp[i]+" ");
       }
  }
}
