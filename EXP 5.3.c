#include <stdio.h>
int main() {
printf("Name - ANUJ JUGRAN\nSAP ID - 590027919\nCourse-BCA\nBatch-B6");
printf("\n--------------------------------\n");

int a = 10;  
printf("Value of a in main: %d\n", a);
{
    int b = 20; 
    printf("Value of a in inner block: %d\n", a);  
    printf("Value of b in inner block: %d\n", b);  
}
{
    int c = 30;  
    printf("Value of c in new block: %d\n", c);
}

return 0;
}

