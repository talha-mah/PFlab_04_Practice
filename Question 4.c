#include <stdio.h>

int main (){

    int income, tax, net_income;
    printf("Please enter your net income:  ");
    scanf("%d", &income);

    if(income <= 250000){
        printf("No Tax on your income \n");
        tax = 0; 
        net_income = income - tax; 
    } 
    else if (income > 250000 && income <= 500000){
        tax = income * (0.05);
        net_income = income - tax; 
    }
    else if (income > 500000 && income <= 1000000){
        tax = income * (0.20);
        net_income = income - tax; 
    }
    else if (income > 1000000){
        tax = income * (0.30);
        net_income = income - tax; 
    }

    printf("Your income is %d \nTax to pay is %d \nYour net income is %d\n", income, tax, net_income);
    
    return 0;
}