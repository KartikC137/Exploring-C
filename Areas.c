#include<stdio.h>
#include<math.h>
 float squarearea(float side) { 
   return side * side;
 }
 
 float circlearea(float radius) {

  return 3.14*radius*radius;
 }
  
float rectanglearea(float l, float b) {
  return l*b;
}

float triangle(float h, float base) {
  return 0.5*base*h;
}

 int main () {
  int o;
  float side;
  printf("enter the shape of which area is required\n 1st. Square\n 2nd. Circle\n 3rd. Rectangle\n 4th. Triangle\n");
  scanf("%d",&o);
  switch (o)
  {
  case 1:
  {
  float side; 
  printf("enter the value of side:\n");
  scanf("%f",&side);
  printf("the area of the square is: %f\n", squarearea(side));}
  break;
  case 2:
  {float radius;
  printf("enter the radius:\n");
  scanf("%f",&radius);
  printf("the area of the circle is %f\n", circlearea(radius));}
  break;
  case 3:
  {float l,b;
  printf("enter the length:\n");
  scanf("%f",&l);
  printf("enter the breadth:\n");
  scanf("%f",&b);
  printf("the area of the rectangle is:%f\n", rectanglearea(l,b));}
  break;
  case 4:
  {float h,base;
  printf("enter the height of the triangle:\n");
  scanf("%f",&h);
  printf("enter the base of the triangle:\n");
  scanf("%f",&base);
  printf("the area of the triangle is:%f\n", triangle(h,base));}
  break;
  default:
  printf("no area:(\n");
  break;
  }
  int u;
  printf("Continue to another Shape?\n 1 or 0\n");
  scanf("%d", &u);
  if(u == 1) { return main();} // This command is so that, if the user wants to exit function, they can type 0, which will make this condtion false and main is not returned
  else {printf("Bye\n");}
  return 0;
  
  

 }
 


  


 



  