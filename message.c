#include<stdio.h>

int main()
{
    int a;
    char grade;
    printf("Enter Your Score: ");
    scanf("%d",&a);
    grade = (a >= 90) ? 'A' : (a >= 80) ? 'B' : (a >= 70) ? 'C' : (a >= 60) ? 'D' : (a >= 50) ? 'E' : (a >= 40) ? 'F' : 'G';
    printf("Your Grade is: %c\n",grade);

    switch (grade) {
        case 'A':
            printf("Excellent work!\n");
            break;
        case 'B':
            printf("Well done\n");
            break;
        case 'C':
            printf("Good job\n");
            break;
        case 'D':
            printf("You passed, but you could do better\n");
            break;
        case 'E':
            printf("You borderline passed\n");
            break;
        case 'F':
            printf("Sorry, you failed\n");
            break;
        case 'G':
            printf("Invalid grade.\n");
            break;
        default:
            printf("Invalid grade.\n");
            break;
    }

}