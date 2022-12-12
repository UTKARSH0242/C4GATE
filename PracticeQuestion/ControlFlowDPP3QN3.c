#include<stdio.h>
int main(){
    int a =1, b =2;
    do{
        while(b++){
            b = b-a;
            a = a+b;
        
        }
    }
    while (a++<2);
    
        printf("%d\t%d", a,b);
        return 0;
    
    
}