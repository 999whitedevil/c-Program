
#include <stdio.h>

int main() {
    float s1, s2, s3, s4, s5, s6, percentage;
printf(" CREATEING RESULTS FOR THE STUDENT'S SUBJECTS\n");
    printf("Enter the marks of the hindi: ");
    scanf("%f", &s1);
    printf("Enter the marks of the english: ");
    scanf("%f", &s2);
    printf("Enter the makrs of maths : ");
    scanf("%f", &s3);
    printf("Enter the marks of EDP: ");
    scanf("%f",&s4);
    printf("Enter the marks of FOC: ");
    scanf("%f",&s5);
    s6 = s1+s2+s3+s4+s5;
    printf("total marks obtained by student outof 500 is : %f\n", s6);
    percentage= s6/500*100;
    printf("The total percentage of the student is : %f\n",percentage);
  return 0;
}
