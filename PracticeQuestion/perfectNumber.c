#include<stdio.h>
int main(){
    int n , sum =0;
    printf("Enter the number: ");
    scanf("%d", &n);
    for(int i = 1; i<n; i++){
        if (n%i==0)
        {
            sum += i;
        }
        
    }
    if (sum == n)
    {
        printf("%d is Perfect Number", n);
    }
    else{
         printf("%d is not a perfect number");
    }
    
}