#include<stdio.h>
void main()
{
float gs,bs,ha,da;
printf("Enter the basic salary : \n");
scanf("%f",&bs);
ha=0.2*bs;
printf("HA = %f \n",ha);
da=0.4*bs;
printf("DA = %f \n",da);
gs=bs+ha+da;
printf("Gross salary = %f \n",gs);
}
