#include <stdio.h>

void numberOfDays() {
    int index;
    printf("Enter number from 1 to 12 which correspond to the month \n");
    printf("Num: ");
    scanf("%d",&index);

    if (index<1 && index<12) {
        printf("Enter from 1 to 12 only");
        numberOfDays();
    }
    switch (index)
    {
    case 1: 
        printf("January have 31 days. \n");
        break;
    case 2: 
        printf("Feburary have 28 days. \n");
        break;
    case 3: 
        printf("March have 31 days. \n");
        break;
    case 4: 
        printf("April have 30 days. \n");
        break;
    case 5: 
        printf("May have 31 days. \n");
        break;
    case 6: 
        printf("June have 30 days. \n");
        break;
    case 7: 
        printf("July have 31 days. \n");
        break;
    case 8: 
        printf("August have 30 days. \n");
        break;
    case 9: 
        printf("Septemnber have 31 days. \n");
        break;
    case 10: 
        printf("October have 30 days. \n");
        break;
    case 11: 
        printf("November have 31 days. \n");
        break;
    case 12:
        printf("Deccemer have 30 days. \n");
        break;
    }
}

void calculator() {

    int a, b;
    char operator;
    
    printf("Enter any oferator (+, -, *, /):  ");
    scanf("%c", &operator);

    printf("Entre any two integer a and b \n");
    printf("a: ");
    scanf("%d",&a);
    printf("b: ");
    scanf("%d",&b);

    switch (operator)
    {
    case '+':
        printf("%d + %d = %d \n", a, b, a+b);
        break;
    case '-':
        printf("%d - %d = %d \n", a, b, a-b);
        break;
    case '*':
        printf("%d * %d = %d", a, b, a*b);
        break;
    case '/':
        if(b==0) {
        printf("Mathematical error! \n");
        }
        else {
            printf("%d / %d = %.2f \n", a, b, (float) a/b);
        }
        break;
    default:
        printf("Error! operatior is not correct \n");
    }
}



void main() {

    //numberOfDays();
    //calculator();
}