#include <stdio.h> 
int main() 
{ 
printf("Name - ANUJ JUGRAN\n SAP ID - 590027919\n COURSE - BCA\n BATCH -6\n");
int a, b, L, num; 
printf("Enter the limit L: "); 
scanf("%d", &L); 
for (num = 1; num <= L; num++)  
{ 
int count = 0;  
int pairs[4];  
for (a = 1; a * a * a < num; a++)  
{ 
for (b = a; b * b * b < num; b++)  
{ 
{ 
if ((a * a * a) + (b * b * b) == num)  
if (count < 4)  
{ 
pairs[count] = a; 
pairs[count + 1] = b; 
                    } 
                    count++; 
                } 
            } 
        } 
        if (count >= 2)  
        { 
            printf("%d = %d^3 + %d^3 = %d^3 + %d^3\n", 
              num, 
             pairs[0], pairs[1], // First pair (a, b) 
             pairs[2], pairs[3]  // Second pair (c, d ); 
        ); } 
    } 
    return 0; 
}
