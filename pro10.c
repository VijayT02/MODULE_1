#include<stdio.h>
#include<math.h>
void main()
{
int a,b,c,d,z;
float i;
printf("Enter the value of a,b,c,d: \n");
scanf("%d %d %d %d",&a,&b,&c,&d);
z=((a-b)*(a-b)+(c-d)*(c-d));
i=sqrt(z);
printf("i=%f \n",i);
}
