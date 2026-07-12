/*
Program: FIBBONCACCI SERIES
Language: C
AUTHOR : Aaditya
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int fibbonaci(int n){
    if(n<=0)
      return 0;
    else if(n==1)
      return 1;
    else{
        return fibbonaci(n-1) + fibbonaci(n-2);
    }
}
int main(){
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);
    printf("ELEMENT AT INDEX %d : %d",n,fibbonaci(n));
    return 0;
}