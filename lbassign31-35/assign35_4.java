import java.util.Scanner;

class StringDemo
{
    public void ReverseTogX(String s)
    {
        String str=s;
        char arr[]=s.toCharArray();
        int iEnd=s.length()-1;
        int iStart=0;
        char Temp;
        
        while(iStart<=iEnd)
        {
            if(iStart==iEnd)
            {
                if(arr[iStart]>='a'&& arr[iStart]<='z')
                {
                    arr[iStart]=Character.toUpperCase(arr[iStart]);
                }
                else if(arr[iStart]>='A'&& arr[iStart]<='Z')
                {
                    arr[iStart]=Character.toLowerCase(arr[iStart]);
                }
            }
            else
            {
                if(arr[iStart]>='a'&& arr[iStart]<='z')
                {
                    arr[iStart]=Character.toUpperCase(arr[iStart]);
                }
                else if(arr[iStart]>='A'&& arr[iStart]<='Z')
                {
                    arr[iStart]=Character.toLowerCase(arr[iStart]);
                }
                if(arr[iEnd]>='a'&& arr[iEnd]<='z')
                {
                    arr[iEnd]=Character.toUpperCase(arr[iEnd]);
                }
                else if(arr[iEnd]>='A'&& arr[iEnd]<='Z')
                {
                    arr[iEnd]=Character.toLowerCase(arr[iEnd]);
                }

            }
            
            Temp=arr[iStart];
            arr[iStart]=arr[iEnd];
            arr[iEnd]=Temp;

            iStart++;
            iEnd--;
        }
        System.out.println(arr);
    }
}
class assign35_4
{
    public static void main(String arr[])
    {
        Scanner sobj=new Scanner(System.in);

        System.out.println("Please enter the string");
        String str=sobj.nextLine();

        StringDemo obj=new StringDemo();
        obj.ReverseTogX(str);
    }
}