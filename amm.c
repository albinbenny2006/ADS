#include <stdio.h>
int main()
{
int a[100],n,max,min;
printf("enter number of elements in the array :");
scanf("%d",&n);
printf("enter elements in the  array :");
for(int i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
max =a[0];
min=a[0];
for(int i=0;i<n;i++)
{

if(max<a[i])
{
max=a[i];

}
if(min>a[i])
{
min=a[i];
}
}
printf("max=%d min =%d",max,min);
return 0;
}



