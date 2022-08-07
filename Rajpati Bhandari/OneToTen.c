#include <stdio.h>
#include <math.h>
#define PI 3.14

void dispalyName() {
    int i;
    char name[20];
    printf("Enter your name: ");
    scanf("%s", &name);
    printf("Your name is %s",name);
}

void math() {
    int num1, num2;
    int add, sub, mul;
    float div;
    printf("Enter any to number \n");
    printf("num1: ");
    scanf("%d", &num1);
    printf("num2: ");
    scanf("%d", &num2);
   
    add = num1 + num2;
    sub = num1 - num2;
    mul = num1 * num2;

    printf("The sum of %d and %d = %d \n", num1, num2, add);
    printf("The difference of %d and %d = %d \n",num1, num2, sub);
    printf("%d multiply %d = %d \n",num1, num2, mul);

    if(num2!=0) {
        div = num1 / num2;
        printf("%d divide %d is %.2f \n",num1, num2, div);
    }
    else{
        printf("division: mathmatical error \n");
    }
}

void simpleInterest() {
    float principal, time, rate, SI;
    printf("Entre principal amount < 100000: ");
    scanf("%f", &principal);
    printf("Entre time in year: ");
    scanf("%f", &principal);
    printf("Entre rate for the amount: ");
    scanf("%f", &rate);

    SI = principal*time*rate / 100;
    printf("The simple interest is %.2f \n", SI);
}

void celciusToFahrehnit() {
    float celcius, fahrenhit;
    printf("Entre the value in celcius: ");
    scanf("%f",&celcius);

    fahrenhit = (celcius *9/5) + 32;
    printf("The value of %.2f celcius in fahrenheit = %.2f \n", celcius, fahrenhit);
}

void squareRoot() {
    int num;
    printf("Entere the the number: ");
    scanf("%d", &num);
    float sqroot = sqrt(num);
    printf("The square root of %d = %.2f",num, sqroot);
}

void powerOFNum() {
    int x, y, power;
    printf("Entre the value of x any y which represent x^y\n");
    printf("Enter x: ");
    scanf("%d",&x);
    printf("Enter y: ");
    scanf("%d",&y);

    power = pow(x,y);
    printf("The value of %d^%d = %d \n",x, y, power);
}

void areaAndCircumference() {
    float radius, area, circumference;
    printf("Entre the value of radius: ");
    scanf("%f",&radius);

    area = PI * radius * radius;
    circumference = 2 * PI * radius;

    printf("The area of circle is: %.2f \n",area);
    printf("The circumference of circle is: %.2f \n",circumference);
}

void areaAndPerimeter() {
    int base, height;
    float area;
    printf("Entre the base and height of a triangle \n");
    printf("base: ");
    scanf("%d", &base);
    printf("height: ");
    scanf("%d", &height);
    area = (float)1/2 * height * base;
    printf("The area of triangle = %.2f \n", area);

    int a, c, perimeter;
    printf("Entre the two side of triangle a and c \n");
    printf("a: ");
    scanf("%d", &a);
    printf("c: ");
    scanf("%d", &c);

    perimeter = a + base + c;
    printf("The perimeter of triangle = %d \n",perimeter);
    
}

void priceOfmango() {
    int noOfMango;
    float priceOfDozen = 125, totalPrice;
    printf("How many mango do you want to buy? \n");
    printf("number of mango: ");
    scanf("%d",&noOfMango);
    float priceOfOneMango = priceOfDozen/12;
    totalPrice = noOfMango * priceOfOneMango;
    printf("The total price of %d mangos is Rs %.3f \n",noOfMango, totalPrice);
}

void poundToKilogram() {
    float onePoundToKilogram = 0.45;
    float pound, kilogram;
    printf("Entre the value in pound: ");
    scanf("%f",&pound);
    kilogram = pound * onePoundToKilogram;
    printf("%.2f pound = %.2f kilogram \n",pound, kilogram);
}

void main() {
    //dispalyName();
    //math();
    //simpleInterest();
    //squareRoot();
    //powerOFNum();
    //areaAndCircumference();
    //areaAndPerimeter();
    //celciusToFahrehnit();
    //priceOfmango();
    //poundToKilogram();
}




