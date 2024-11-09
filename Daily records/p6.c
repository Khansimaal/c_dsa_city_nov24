#include<stdio.h>

int SumOfDigits(int n){
    if(n == 0)
        return 0;
    else{
        return (n % 10) + SumOfDigits(n / 10);
    }
}

int main(){
    int number, result;

    printf("Enter a number for addiding it's digits\n");
    scanf("%d", &number);

    result = SumOfDigits(number);
    printf("The sum of digits of %d = %d", number, result);

    return 0;
}