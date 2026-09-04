#include <stdio.h>

int main()
/*{
  
    int a,b,c;
    printf("enter sides");
    scanf("%d %d %d", &a, &b, &c);
    if (a+b>c && a+c>b && b+c>a ){
      printf("triangle is valid\n");
    
    if(a == b && b == c){
      printf("triangle is equilateral\n");
    }
     else if(a == b || b ==c || c== a){
      printf("triangle is isoceles\n");
     }
     else if (a*a == b*b + c*c ||
              b*b == a*a + c*c ||
              c*c == a*a + b*b){
                printf("traingle is right angeled\n");
              }
     else {
      printf("triangle is scalene\n");
     }
    }
     else {
      printf("triangle is invalid\n");
     }
    
    return 0;
}*/

{
  int height,weight,BMI;
  printf("enter height and weight");
  scanf("%d %d",&height, &weight);

  BMI = weight/height*height;
  if(BMI<15){
    printf("person is Starvation");
  }
  else if(BMI>15.1 && BMI<17.5){
    printf("person is Anorexic");
  }
  else if(BMI>17.6 && BMI<18.5){
    printf("person is Underweight");
  }
  else if(BMI>18.6 && BMI<24.9){
    printf("person is Ideal");
  }
  else if(BMI>25 && BMI<25.9){
   printf("person is Overweight");
  }
  else if(BMI>30 && BMI<39.9){
    printf("person is obese");
  }
  else if(BMI>40){
    printf("person is morbidily obese");
  }
  return 0;

}
/*
 {
 int l1,l2,l3,b1,b2,b3;
 int p1,p2,p3,highest;
 printf("enter sides of the rectangle 1");
 scanf("%d %d", &l1, &b1);

 printf("enter sides of rectangle 2");
 scanf("%d %d", &l2, &b2);

 printf("enter sides of rectangle 3");
 scanf("%d %d", &l3, &b3);

 p1 = 2*(l1+b1);
 p2 = 2*(l2+b2);
 p3 = 2*(l3+b3);
   
 highest = (p1 > p2)? p1:p2;
 highest = (highest > p3)? highest:p3;
 
 printf("highest perimeter= %d", highest);
 return 0;
 }
 */
/*
 {
  int x1,x2,x3,y1,y2,y3;
  float slope_AB,slope_BC;
  printf("enter x1,x2,x3 and y1,y2,y3");
  scanf("%d %d %d %d %d %d",&x1, &x2, &x3, &y1, &y2, &y3);
  slope_AB = (float)(y2-y1)/(x2-x1);
  slope_BC = (float)(y3-y2)/(x3-x2);
  if(slope_AB == slope_BC){
    printf("points are collinear");
  }
  else{
    printf("points are not collinear");
  }
  return 0;
 }
*/
