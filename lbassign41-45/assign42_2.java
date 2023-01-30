
import java.util.Scanner;

class MyArray
{
    public void MinArr(int arr1[],int arr2[])
    {
        int iMin1=arr1[0],iMin2=arr2[0];
        int iCnt1=0,iCnt2=0;

        for(;iCnt1<arr1.length||iCnt2<arr2.length;)
        {
            if(iCnt1<arr1.length)
            {
                if(arr1[iCnt1]<iMin1)
                {
                    iMin1=arr1[iCnt1];
                }
                iCnt1++;
            }
            else if(iCnt2<arr2.length)
            {
                if(arr2[iCnt2]<iMin2)
                {
                    iMin2=arr2[iCnt2];
                }
                iCnt2++;
            }
        }
        System.out.println("Min of first array :"+iMin1);
        System.out.println("Min of second array :"+iMin2);
    }
}
class assign42_2
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

        mobj.MinArr(arr1,arr2);
    }
}