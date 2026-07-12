/*
Program: SUM OF DIGITS IN A NUMBER
Language: C
AUTHOR : Aaditya
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int sum(int number){
    if(number<10)
      return number;
    return (number % 10) + sum(number / 10);
}
int main(){
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);
    printf("SUM OF DIGITS OF %d : %d",n,sum(n));
    return 0;
}