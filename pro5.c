#include<stdio.h>
void main()
{
int m,p,c,e,s,sum;
float a;
printf("Enter the marks of the 5 subjects : \n");
scanf("%d %d %d %d %d",&m,&p,&c,&e,&s);
sum=m+p+c+e+s;
a=sum/5.0;
printf("Sum = %d \n",sum);
printf("Average = %f \n",a);
}
