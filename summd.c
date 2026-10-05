#include <stdio.h>
int main()
{
int a,sum=0,num=0;

printf("enter the number :");
scanf("%d",&a);
while(a>0)
{
num=a%10;
sum=sum+num;
a=a/10;
}
printf("sum of digits=%d",sum);

return 0;
}

