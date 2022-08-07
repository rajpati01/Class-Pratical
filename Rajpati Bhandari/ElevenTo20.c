#include <stdio.h>
//#include <conio.h>

void rupeeToUSD() {
 
    float OneRupeeToUSD = 0.0079;
    float rupee, equivalent;

    printf("Entre the amount in rupee: ");
    scanf("%f",&rupee);
    equivalent = 0.0079 * rupee;
    printf("%.2f rupee = %.4f USD", rupee, equivalent);
}

void reverseOrder() {  
    int n, reverse = 0, remainder;

    printf("Enter an integer: ");
    scanf("%d", &n);

    while (n != 0) {
        remainder = n % 10;
        reverse = reverse * 10 + remainder;
        n /= 10;
    }
    printf("Reversed number = %d \n", reverse);
}

void sumOfIndividual() {
    int n,sum=0;
    printf("Enter a positive integer of 5 digit long: "); // enter a integer value
    scanf("%d",&n);
    while(n>0)  // checks the condition
    {
        sum=sum+n%10;   // sum + remainder value
        n = n/10;
 
    }
    printf("Sum of individual digits of a positive integer is %d \n",sum);  // prints the sum of individual digits
   
}

void expressLenght() {
    float mm, m, cm, km;
    float OneMmToCm = 0.1;
    float OneMmToM = 0.001;
    float OneMmToKm = 0.000006;

    printf("Enter length in milimeters: ");
    scanf("%f", &mm);

    cm = mm * OneMmToCm;
    m = mm * OneMmToM;
    km = mm * OneMmToKm;

    printf("%f mm = %.2f cm \n", mm, cm);
    printf("%f mm = %.3f m \n", mm, m);
    printf("%f mm = %.6f km \n", mm, km);
}

void discount() {
    int purchaseAmount, totalAmount;
    float amountAfterDiscount;

    printf("Enter the purchase  amount: ");
    scanf("%d", &purchaseAmount);

    if(purchaseAmount>=1000) {
        amountAfterDiscount = purchaseAmount - purchaseAmount * 0.05;
        printf("Totoal amount after discount = %.2f\n", amountAfterDiscount);
    }
    else{
        totalAmount = purchaseAmount;
        printf("Total amount = %d\n", totalAmount);
    }
}

void calculateDiscount() {

    float purchaseAmount, amountAfterDiscount;
    printf("Enter the purchase  amount: ");
    scanf("%f", &purchaseAmount);

    if(purchaseAmount>=1000) {
        amountAfterDiscount = purchaseAmount - purchaseAmount * 0.05;
    }
    else{
        amountAfterDiscount = purchaseAmount - purchaseAmount * 0.03;
    }
     printf("Total amount after discount = %.2f\n", amountAfterDiscount);
}

void discountOffer() {
    float purchaseAmount, amountAfterDiscount;
    printf("Enter the purchase  amount: ");
    scanf("%f", &purchaseAmount);

    if(purchaseAmount>=5000) {
        amountAfterDiscount = purchaseAmount - purchaseAmount * 0.1;
    }
    else if(purchaseAmount<5000 && purchaseAmount>=4000) {
        amountAfterDiscount = purchaseAmount - purchaseAmount * 0.07;
    }
    else if(purchaseAmount<4000 && purchaseAmount>=3000) {
        amountAfterDiscount = purchaseAmount - purchaseAmount * 0.05;
    }
    else if(purchaseAmount<3000 && purchaseAmount>=2000) {
        amountAfterDiscount = purchaseAmount - purchaseAmount * 0.03;
    }
    else{
        amountAfterDiscount = purchaseAmount - purchaseAmount * 0.02;
    }
        printf("Total amount after discount = %.2f\n", amountAfterDiscount);
}

void oddEven() {
    int num;
    printf("Enter any integer value: ");
    scanf("%d", &num);

    if(num%2==0) {
        printf("%d is an even number \n", num);
    }
    else{
        printf("%d is an odd number \n", num);
    }
}

void simpleInterest() {
    float SI, principle, time, rate;

    printf("Principal amount: ");
    scanf("%f", &principle);
    printf("Time: ");
    scanf("%f", &time);

    if(principle>99999) {
        rate = 0.07;
        SI = (principle*time*rate)/100;
    }
     if(principle>=50000 && principle<100000) {
        rate = 0.05;
        SI = (principle*time*rate)/100;
    }
     if(principle<50000) {
        rate = 0.03;
        SI = (principle*time*rate)/100;
    }
    printf("Simple Intrest = %.2f \n", SI);
}

void admission() {
    int math, phy, che, total, mth_phy;

    printf("Enter the marks of.\n");
    printf("Mathematices: ");
    scanf("%d",&math);
    printf("Physics: ");
    scanf("%d",&phy);
    printf("Chemestry: ");
    scanf("%d",&che);

    total = math + phy+ che;
    mth_phy = math + phy;

    if(total>=200 || mth_phy>=150){
        printf("Eligable for admisson \n");
    }
    else if(math>= 60 && phy>= 50 && che>=40) {
        printf("Eligable for admisson \n");
    }
    else {
        printf("Not eligable for admisson \n");
    }
}

void main() {
    //rupeeToUSD();
    //reverseOrder();
    //sumOfIndividual();
    //expressLenght();
    //discount();
    //calculateDiscount();
    //discountOffer();
    // oddEven();
    //simpleInterest();
    //admission();
}