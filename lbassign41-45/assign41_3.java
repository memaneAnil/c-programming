
import java.util.Scanner;

class MyArray
{
    public void Display(int arr1[],int arr2[])
    {
        System.out.println("Odd elements of first array :");
        for(int iCnt=0;iCnt<arr1.length;iCnt++)
        {
            if(arr1[iCnt]%2!=0)
            {
                System.out.println(arr1[iCnt]);
            }
            
        }

        System.out.println("Odd elements of second array :");
        for(int iCnt=0;iCnt<arr2.length;iCnt++)
        {
            if(arr2[iCnt]%2!=0)
            {
                System.out.println(arr2[iCnt]);
            }
        }
    }
}
class assign41_3
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

        mobj.Display(arr1,arr2);
    }
}