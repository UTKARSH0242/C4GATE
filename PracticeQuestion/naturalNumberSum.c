#include<stdio.h>
void main(){
    int n , sum = 0;
    printf("Enter the number :");
    scanf("%d", &n);
    for(int i = 0; i<=n; i++){
        sum = sum+i;
    }
    printf("The sum of natural number upto %d is %d:",n,sum);
}