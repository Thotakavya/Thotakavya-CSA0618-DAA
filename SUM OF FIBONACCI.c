#include<stdio.h>
int main()
{
int a=0,b=1,c,range,sum=0;
printf("Enter the range of numbers");
scanf("%d",&range);
printf("Fibonacci series\n");
while(a<=range)
{
printf("%d\t",a);
sum+=a;
a=b;
b=c;
}
printf("sum is %d\n",sum);
return 0;
}
