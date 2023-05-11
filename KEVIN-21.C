#include<stdio.h>
#include<conio.h>

main()

{
   clrscr();
   float c,f;

   printf("enter celsius c=");
   scanf("%f",&c);

   f=c*9/5+32;
   printf("f=%f",f);

   getch();
}
