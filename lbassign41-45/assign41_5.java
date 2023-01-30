
import java.util.Scanner;

class MyArray
{
    public void Display(int arr1[],int arr2[])
    {
        int iSum1=0,iSum2=0;
        int iCnt1=0,iCnt2=0;

        for(;iCnt1<arr1.length||iCnt2<arr2.length;)
        {
            if(iCnt1<arr1.length)
            {
                iSum1=iSum1+arr1[iCnt1];
                iCnt1++;
            }
            else if(iCnt2<arr2.length)
            {
                iSum2=iSum2+arr2[iCnt2];
                iCnt2++;
            }
        }
        System.out.println("Summation of elements of first array :"+iSum1);
        System.out.println("Summation of elements of second array :"+iSum2);
    }
}
class assign41_5
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