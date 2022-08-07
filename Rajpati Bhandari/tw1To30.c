#include <stdio.h>

void leapYear() {

}

void netSalaryAfterTax() {

}

void calculateCommission() {

}

void withdrawal() {

}

void largestAmonfgThree() {
    int num1, num2, num3, largest;

    printf("Enter any three integers valuse \n");
    printf("Num1: ");
    scanf("%d", &num1);
    printf("Num2: ");
    scanf("%d", &num2);
    printf("Num3: ");
    scanf("%d", &num3);

    if(num1>num2 && num1>num3) {
        printf("%d is largest number \n", num1);
    }
    else if(num2>num1 && num2>num3) {
        printf("%d is largest number \n", num2);
    }
    else{
        printf("%d is largest number \n", num3);
    }
}

void quadraticRoot() {

}

void compare() {
    int a, b;
    printf("Entre any to numbers \n");
    printf("Num1: ");
    scanf("%d", &a);
    printf("Num2: ");
    scanf("%d", &b);

    if(a==b) {
        printf("They are equal \n");
    }
    else if (a>b)
    {
        printf("%d is greater then %d \n", a, b);
    }
    else{
        printf("%d is smaller then %d \n", a, b);

    }
    
}

void passFail() {

    
}

void displayRemarks() {
    char remarks;
    printf("\nEnter A, B, C, D or E \n");
    printf("Remark: ");
    scanf("%c",&remarks);

    if(remarks=='A' || remarks=='B' || remarks=='C' || remarks=='D' || remarks=='E') {
        switch (remarks)
        {
        case 'A': 
            printf("EXCELENT \n");
            break;
        case 'B': 
            printf("VERY GOOD \n");
            break;
        case 'C': 
            printf("GOOD \n");
            break;
        case 'D': 
            printf("SATISFACTORY \n");
            break;
        case 'E': 
            printf("FAIL \n");
            break;
        }
    }
    else {
        printf("Only entre A, B, C, D or E \n");
        displayRemarks();
    }
}

void main() {
    //leapYear();
    // netSalaryAfterTax();
    // calculateCommission();
    // withdrawal();
    //largestAmonfgThree();
    //quadraticRoot();
    //compare();
    // passFail();
    //displayRemarks();
}