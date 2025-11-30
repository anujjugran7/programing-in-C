#include <stdio.h>
int main()
{
int a, b;
int sum, di?, prod;
float div;
printf("Enter first number: ");scanf("%d", &a);
printf("Enter second number: ");
scanf("%d", &b);
sum = a + b;
di? = a - b;
prod = a * b;
if(b != 0)
{
div = (float)a / b;
}
printf("\nResults:\n");
printf("Addition: %d + %d = %d\n", a, b, sum);
printf("Subtraction: %d - %d = %d\n", a, b, di?);
printf("Multiplication: %d * %d = %d\n", a, b, prod);
if(b != 0)
