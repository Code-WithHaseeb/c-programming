#include <stdio.h>
int main() {
    int num , square, cube;

    printf("Enter a Number : ");
    scanf("%d", &num);

    square = num * num;
    cube = num * num * num;

    printf("Square of Number is : %d \n", square);
    printf("Cube of Number is : %d \n", cube);

  return 0;

}
// int square(int x) {
//      return x*x; 
//     }
// int cube(int x) {
//      return x*x*x; 
//     }
