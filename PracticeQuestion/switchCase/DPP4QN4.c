#include<stdio.h>
int main(){
    int q,r=0;
    q = 2*3/6 + 2.0/5 + 0.2*3;
    printf("%d", q);
    r = -q--;
    printf("%d", r);
    switch (q-r)
    {
    case 0: printf("Hello"); break;
    case 1: printf("HI"); break;
    case 2: printf("best hai"); break;
    case 3: printf("GATE Wallah");break; 
    default: printf("2023");
        
    
    
    }
    return 0;
}