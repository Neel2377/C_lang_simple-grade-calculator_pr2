#include<stdio.h>

int main()
{
    int A;
    char grade;
    printf("Enter Your Score: ");
    scanf("%d",&A);
    grade = (A >= 90) ? 'A' : (A >= 80) ? 'B' : (A >= 70) ? 'C' : (A >= 60) ? 'D' : (A >= 50) ? 'E' : 'F';
    printf("Your Grade is: %c\n",grade);
}