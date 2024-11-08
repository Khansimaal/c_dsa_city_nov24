#include<stdio.h>

int factorial(int n){
    if(n==1){
        return 1;
    }else{
        return n * factorial(n-1);
    }
}
int main(){
    int number;
    printf("Enter a number to find factorial of:\n");
    scanf("%d",&number);

    if (number < 1){
        printf("Please enter only +ve numbers to find find factorial of!");

    }else{
        printf("The factorial of given number %d is %d",number, factorial(number));
    }
    return 0;
}