#include<stdio.h>

int main()
{
    int a;
    char grade;
    printf("Enter Your Score: ");
    scanf("%d",&a);
    grade = (a >= 90) ? 'A' : (a >= 80) ? 'B' : (a >= 70) ? 'C' : (a >= 60) ? 'D' : (a >= 50) ? 'F' : 'G' ;
    printf("Your Grade is: %c\n",grade);

    if (a >= 60) {
        printf("You are eligible.\n");
    } else {
        printf("You are not eligible.\n");
    }

    switch (grade) {
        case 'A':
            printf("Congratulations! you are eligible for the next level\n");
            break;
        case 'B':
            printf("Congratulations! you are eligible for the next level\n");
            break;
        case 'C':
            printf("Congratulations! you are eligible for the next level\n");
            break;
        case 'D':
            printf("Congratulations! you are eligible for the next level\n");
            break;
        case 'F':
            printf("Please try again next time\n");
            break;
        default:
            printf("Invalid grade.\n");
            break;
    }

}