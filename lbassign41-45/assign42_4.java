
import java.util.Scanner;

class MyArray
{
    
    public int[] CopyArr(int arr1[])
    {
        int arr[]=new int[arr1.length];
        
        for(int iCnt=0;iCnt<arr.length;iCnt++)
        {
             arr[iCnt]=arr1[iCnt];
        }
        return arr;
    }
}
class assign42_4
{
    public static void main(String ar[])
    {
        Scanner sobj=new Scanner(System.in);

        System.out.println("Enter the size of array");
        int iSize1=sobj.nextInt();

        int arr1[]=new int[iSize1];
        
        System.out.println("Enter the elements of array :");

        for(int iCnt=0;iCnt<iSize1;iCnt++)
        {
            arr1[iCnt]=sobj.nextInt();
        }

        MyArray mobj=new MyArray();

        int arr[]=mobj.CopyArr(arr1);

        System.out.println("Elements of array :");
        for(int iCnt=0;iCnt<arr.length;iCnt++)
        {
            System.out.println(arr[iCnt]);
        }
    }
}