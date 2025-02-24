//PROGRAM TO FIND THE AREA OF RECTANGLE.
// the user is required to input the length and width of the rectangle.

#include<stdio.h>
int main() {
  int length=0;
  int width=0;
  printf("length:\n");
  scanf("%d",&length);
  printf("width:\n");
  scanf("%d",&width);
  int area= length *width;
  printf("area:%d\n",area); 
  return 0;
}
