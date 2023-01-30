
import java.util.Scanner;

class MyArray
{  
    public int Search(char arr1[],char ch)
    {
        int iCnt=0,iCounter=0;

        while(iCnt<arr1.length)
        {
            arr1[iCnt]=Character.toLowerCase(arr1[iCnt]);
            if(arr1[iCnt]==ch)
            {
                iCounter++;
            }
            iCnt++;
        } 
        return iCounter;
    }
}
class assign44_3
{
    public static void main(String ar[])
    {
        Scanner sobj=new Scanner(System.in);

        System.out.println("Enter the size of array");
        int iSize1=sobj.nextInt();

        System.out.println("Enter the character to search :");
        char ch=sobj.next().charAt(0);

        char arr1[]=new char[iSize1];
        
        System.out.println("Enter the characters :");

        for(int iCnt=0;iCnt<iSize1;iCnt++)
        {
            arr1[iCnt]=sobj.next().charAt(0);
        }

        MyArray mobj=new MyArray();

        int iRet=mobj.Search(arr1,ch);
        System.out.println("Character "+ch+" occure "+iRet+" times");
    }
}