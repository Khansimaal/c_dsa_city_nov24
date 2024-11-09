#include<stdio.h>

int Factorial(int n){
    if(n <= 1){
        return 1; 
    }else{
        return n * Factorial(n-1);
    }
}

int main(){
    int result, number;

    printf("Enter a number to find the Factorial of a number:\n");
    scanf("%d",&number);

    result = Factorial(number);

    printf("The Factorial of the number %d = %d", number, result);

    return 0;
}