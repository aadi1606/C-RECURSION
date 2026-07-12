#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int sumofap(int n){
    if(n==1){
        return 1;
    }
    else{
        return n + sumofap(n-1);
    }
}
int main(){
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);
    printf("SUM OF THE GIVEN AP: %d",sumofap(n));
    return 0;
}