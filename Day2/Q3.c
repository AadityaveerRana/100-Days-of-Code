#include<stdio.h>
int main(){
    int l,b,area,perimeter;
    printf("enter length and breadth of the rectangle: ");
    scanf("%d %d", &l, &b);
    area = l*b;
    perimeter = 2*(l+b);
    printf("area is %d\n", area);
    printf("perimeter is %d\n", perimeter);
    return 0;
}