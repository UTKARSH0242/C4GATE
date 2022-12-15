#include<stdio.h>
// int main(int argc, char const *argv[])
int fun(int n);
int main() {
    // Write C code here
    // int n =14121;
    int n,res;
    printf("Enter the number: ");
    scanf("%d", &n);
    res = fun(n);
    return 0;
}
int fun(int n){
    if (n <= 9){
        return 1;
    }
    else {
        return 1+fun(n/10);
    }
}
 
//  Not Working 
