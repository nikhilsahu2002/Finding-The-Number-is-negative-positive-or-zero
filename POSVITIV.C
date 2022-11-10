#include<stdio.h>
#include<conio.h>
void main()
{
int a;
clrscr();
printf("Enter the number");
scanf("%d",&a);
if (a==0)
printf(" Zero");
else if(a<0)
printf("The number is negative");
else
printf("The nuner is positive");
getch();
}