#include<stdio.h>
void main()
{
float y,m,w;
int d;
printf("Enter the value of d : \n");
scanf("%d",&d);
y=d/365;
m=d/30;
w=d/7;
printf("y = %f,m = %f,w = %f \n",y,m,w);
}
