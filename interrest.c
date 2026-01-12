#include <stdio.h>
int main() {
    float price, tax, time, si;
    printf("Enter the price tax time: ");
    scanf("%f %f %f", &price, &tax, &time);
    si = (price*tax*time)/100;
    printf("the total interest= %.2f",si);
    return 0;
}