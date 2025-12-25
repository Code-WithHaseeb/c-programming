#include <stdio.h>
int main() {
    int length, breadth;

    printf("Enter Length of Rectangle: ");
    scanf("%d", &length);

    printf("Enter Bradth of Trianle : ");
    scanf("%d", &breadth);

    int area = length * breadth;
    int perimeter = 2 * (length + breadth);

    printf("Area of Rectangle is : %d \n", area);
    printf("Perimeter of Rectangle is :  %d \n", perimeter);

  return 0;
}