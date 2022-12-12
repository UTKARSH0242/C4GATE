#include<stdio.h>
int main(){
    int n,i;
    printf("Enter the number: ");
    scanf("%d", &n);
    if (n==1)
    {
        printf("Not prime");
    }
    
    for (i = 2; i <n; i++){ 
        if (n%i==0)
        {
            printf("not prime");
            break;
        }
    }
    if (i == n)
    {
        printf("prime");
        return 0;    
    }
}
