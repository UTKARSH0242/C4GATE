#include<stdio.h>
void main(){
    // int x = -2024;
    // printf("%d", ~(x=x+5));
    // printf("%d", ~(x+1));
    // int a = 0, b= 1;
    // a=(a=5)||(b=0);
    // printf("%d", a);
    // printf("%d", b);
    // int a ;
    // a = printf("Pankaj Sharma") && printf("Wallah")|| printf("GATE");
    // printf("%d", a);
    // int a = 2023;
    // printf("%d%d%d%d", a!=2024,a=2021,a==2021);
    // char ch = -143;
    // printf("%c",ch);
    // return 0;
    // int c = 32780;
    // printf("%d",c);
    // return 0;
    // int a = 0;
    // a=printf("pankaj%dsharma",printf("GATE Wallah"));
    // printf("%d",a);
    int a = 2, b = -1, c = 0,d;
    d = a-- || b++ && c++;
    printf("%d%d%d%d",a ,b,c,d);


}