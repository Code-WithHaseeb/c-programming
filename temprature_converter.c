#include <stdio.h>
int main() {
    float celsius, fahrenheit;
    // C = (F - 32) × 5/9
    printf("Enter Temeprature in Celsius : ");
    scanf("%f", &celsius);

    fahrenheit = (celsius * 9.0/5.0) + 32;

    printf("Temperature in Fahrenheit is : %.2f", fahrenheit);
}