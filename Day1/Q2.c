/*
Q2: Write a program to input two numbers and display their sum, difference, product, and quotient.
*/

#include<stdio.h>
int main(){
    int a,b,sum,difference,product;
    float quotient;
    printf("enter two numbers: ");
    scanf("%d %d", &a, &b);
    
    sum = a+b;
    difference = a-b;
    product = a*b;
    
    printf ("sum is %d\n", sum);
    printf("difference is %d\n", difference);
    printf("product is %d\n", product);
    
    if (b != 0){
        quotient = (float)a/b;
        printf("quotient is %.2f\n", quotient);
    }
    else{
        printf("cannot divide by zero");
    }
    return 0;
    


}