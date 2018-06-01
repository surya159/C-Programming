import java.util.*;
public class ArrRightRot {
 
    void RigRot(int arr[], int d, int n) 
    {
        int i;
        for (i = 0; i < d; i++)
            RigRotatebyOne(arr, n);
    }
 
    void RigRotatebyOne(int arr[], int n) 
    {
        int i, temp;
        temp = arr[n-1];
        for (i = n-1; i > 0; i--) {
            arr[i] = arr[i - 1]; 
        }
        arr[i] = temp;
    }
 
    void printArr(int arr[], int size) 
    {
        int i;
        for (i = 0; i < size; i++)
            System.out.print(arr[i] + " ");
    }
 
    public static void main(String[] args) 
    {
        ArrRightRot rotate = new ArrRightRot();
        Scanner sc= new Scanner(System.in);
        int n=sc.nextInt();
        int k=sc.nextInt();
        int arr[]= new int[n];
        for(int i=0;i<n;i++) {
            arr[i]=sc.nextInt();
        }
        rotate.RigRot(arr, k, n);
        rotate.printArr(arr, n);
    }
}
