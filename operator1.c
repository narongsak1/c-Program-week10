/*
    Program:Arithmetic Operator
    Authority:Mc.Narongsak Singkheaw
    Date:08/09/2020
*/
#include<stdio.h>
int operator1(){
int a = 9,b=4,c;
c = a+b;
printf("a+b is %d + %d = %d \n",a,b,c);
c = a-b;
printf("a-b is %d - %d = %d \n",a,b,c);
c = a*b;
printf("a*b is %d * %d = %d \n",a,b,c);
c = a/b;
printf("a/b is %d / %d = %d \n",a,b,c);
c = a%b;
printf("a%%b is %d %% %d = %d \n",a,b,c);
return 0;
}
