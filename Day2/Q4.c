#include<stdio.h>
int main(){
    float radius;
    float pi,area,circumference;
    pi = 3.14;
    
    printf("enter radius of circle: ");
    scanf("%f", &radius);
    
    area = pi*radius*radius;
    circumference = 2*pi*radius;

    printf("area of the circle is %.2f\n", area);
    printf("circumference of the circle is %.2f\n", circumference);
    return 0;
    

}