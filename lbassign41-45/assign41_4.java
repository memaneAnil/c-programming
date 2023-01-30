
import java.util.Scanner;

class MyArray
{
    
    public int[] Display(int arr1[],int arr2[])
    {
        int iSize=arr1.length+arr2.length;
        int arr[]=new int[iSize];
        int iCnt1=0,iCnt2=0;
        
        //System.out.println("Elements of array :");

        for(int iCnt=0;iCnt<arr.length;iCnt++)
        {
             if(iCnt1<arr1.length)
            {
                arr[iCnt]=arr1[iCnt1];
                iCnt1++;
            }
            else if(iCnt2<arr2.length)
            {
                arr[iCnt]=arr2[iCnt2];
                iCnt2++;
            }   
        }
        return arr;
    }
}
class assign41_4
{
    public static void main(String ar[])
    {
        Scanner sobj=new Scanner(System.in);

        System.out.println("Enter the size of first array");
        int iSize1=sobj.nextInt();

        System.out.println("Enter the size of second array");
        int iSize2=sobj.nextInt();

        int arr1[]=new int[iSize1];
        int arr2[]=new int[iSize2];

        
        System.out.println("Enter the elements of first array :");

        for(int iCnt=0;iCnt<iSize1;iCnt++)
        {
            arr1[iCnt]=sobj.nextInt();
        }

        System.out.println("Enter the elements of second array :");

        for(int iCnt=0;iCnt<iSize2;iCnt++)
        {
            arr2[iCnt]=sobj.nextInt();
        }

        MyArray mobj=new MyArray();

        int arr[]=mobj.Display(arr1,arr2);

        System.out.println("Elements of array :");
        for(int iCnt=0;iCnt<arr.length;iCnt++)
        {
            System.out.println(arr[iCnt]);
        }
    }
}