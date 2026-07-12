/*
Program: COUNTING THE DIGITS IN A NUMBER
Language: C
AUTHOR : Aaditya
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int count(int number){
    if(number<10)
      return 1;
    return 1 + count(number/10);
}
int main(){
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);
    printf("COUNT OF DIGITS OF %d : %d",n,count(n));
    return 0;
}