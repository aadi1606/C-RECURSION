#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int factorial(int n){
    if(n==1)
     return 1;
    return n * factorial(n-1);
}
int main(){
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);
    printf("FACTORIAL OF %d : %d",n,factorial(n));
    return 0;
}