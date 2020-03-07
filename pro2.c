#include<stdio.h>
void main()
{
float a,b,h,area,p;
printf("Enter the 3 sides : \n");
scanf("%f %f %f",&a,&b,&h);
area=0.5*b*h;
p=a+b+h;
printf("Area of the triangle = %f \n",area);
printf("Perimeter of the triangle = %f \n",p);
} 
