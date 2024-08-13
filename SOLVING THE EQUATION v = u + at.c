/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

// Online C compiler to run C program online
#include <stdio.h>

int main() {
    float u, a, t, v;
printf("SOLVING THE EQUATION v = u + at\n");
    printf("Enter the number 1: \n");
    scanf("%f", &u);
    printf("Enter the number 2: \n");
    scanf("%f", &a);
    printf("Enter the tnumber3: \n");
    scanf("%f", &t);
    v = u + a * t;
    printf("The answer is: %f\n", v);
  return 0;
}
