
import java.util.Scanner;

class MyArray
{
    
    public boolean ChkPallindrom(int arr1[])
    {
        int digit=0,temp1=0,temp2=0;
        boolean flag=true;

        int iStart=0,iEnd=arr1.length-1;

        while(iStart<=iEnd)
        {
            if(arr1[iStart]==arr1[iEnd])
            {
                temp1=arr1[iStart];

                while(temp1!=0)
                {
                    digit=temp1%10;
                    temp2=digit+temp2*10;
                    temp1=temp1/10; 
                }

                if(arr1[iStart]!=temp2)
                {
                    flag=false;
                    break;
                }

            }
            else
            {
                flag=false;
                break;
            }
            iStart++;
            iEnd--;
            temp2=0;
        }
        return flag;
    }
}
class assign42_5
{
    public static void main(String ar[])
    {
        Scanner sobj=new Scanner(System.in);

        System.out.println("Enter the size of first array");
        int iSize1=sobj.nextInt();

        int arr1[]=new int[iSize1];
        
        System.out.println("Enter the elements of first array :");

        for(int iCnt=0;iCnt<iSize1;iCnt++)
        {
            arr1[iCnt]=sobj.nextInt();
        }

        MyArray mobj=new MyArray();

        boolean bRet=mobj.ChkPallindrom(arr1);

        if(bRet==true)
        {
            System.out.println("Array and it's elements are pallindrom");
        }
        else
        {
            System.out.println("Array and it's elements are not a pallindrom");
        }
    }
}