/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#/* Online C Compiler and Editor */
#include<stdio.h>

int main() {
    int i, number, factorial = 1;

    printf("Enter a number: ");
    scanf("%d",&number);

    for(i=1; i<=number; i++) {
        factorial = factorial * i;
    }

    printf("Factorial of %d is: %d",number, factorial);
    return 0;
}