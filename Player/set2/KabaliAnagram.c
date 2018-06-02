#include <stdio.h>
#include <string.h>

int main() 
{
    char str[]="kabali";
    int n=strlen(str);
    for(int i=0;i<strlen(str);i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(str[i]>str[j])
            {
            char temp=str[i];
            str[i]=str[j];
            str[j]=temp;
            }
        }
    }
    char a[10];
    int n1,len,k=0,count=0;
    scanf("%d",&n1);
    while(k<n1)
    {
       scanf("%s",a);
       len=strlen(a);
       if(n==len)
       {
           for(int i=0;i<n;i++)
           {
               for(int j=i+1;j<n;j++)
               {
                   if(a[i]>a[j])
                   {
                       char temp=a[i];
                       a[i]=a[j];
                       a[j]=temp;
                   }
               }
           }
           if(strcmp(str,a)==0)
           {
               count++;
           }
       }k++;
   }
   printf("%d ",count);
   return 0;
}
