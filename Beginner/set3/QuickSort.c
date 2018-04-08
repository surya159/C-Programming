#include <stdio.h>
 
void qk_sort(int[],int,int);
int div(int[],int,int);
 
int main()
{
    int a[50],n,i;
        scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
        
    qk_sort(a,0,n-1);
    
    
    for(i=0;i<n;i++)
        printf("%d ",a[i]);
    
    return 0;        
}
 
void qk_sort(int a[],int l,int u)
{
    int j;
    if(l<u)
    {
        j=div(a,l,u);
        qk_sort(a,l,j-1);
        qk_sort(a,j+1,u);
    }
}
 
int div(int a[],int l,int u)
{
    int v,i,j,temp;
    v=a[l];
    i=l;
    j=u+1;
    
    do
    {
        do
            i++;
            
        while(a[i]<v&&i<=u);
        
        do
            j--;
        while(v<a[j]);
        
        if(i<j)
        {
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
        }
    }while(i<j);
    
    a[l]=a[j];
    a[j]=v;
    
    return(j);
}
