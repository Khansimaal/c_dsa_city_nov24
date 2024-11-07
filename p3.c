#include<stdio.h>
void main(){
    int n, rev , digit , value ;

    printf("Enter the number to be reversed:\n");
    scanf("%d",&n);
    value = n;

    rev=0;
    while(n!=0){
        digit = n % 10;
        n = n/10;
        rev = digit + 10 * rev;
    }
    printf("The reverse of number %d is %d\n", value , rev);
}