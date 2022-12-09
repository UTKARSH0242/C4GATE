 #include<stdio.h> 

int main()
{
 int a=0,b=0;
 a=(a=4)||(b=1);
 if(a&&b) printf("CProgramming");
 else printf("PankajSharma"); 
 printf("%d%d",b,a);
}
