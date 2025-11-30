#include <stdio.h> 
int main() { 
 printf("NAME -ANUJ JUGRAN\n SAP ID- 590027919\n COURSE- BCA\nBATCH- 6\n"); 
float population = 100000;  
float rate = 0.10;           
int years = 10; 
int i; 
printf("Year\tPopulation\n"); 
printf("-------------------\n"); 
for ( i = 1; i <= years; i++) { 
population = population + (population * rate);   
printf("%d\t%.0f\n", i, population); 
} 
return 0; 
}
