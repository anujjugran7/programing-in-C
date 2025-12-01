#include <stdio.h>
int globalVar = 50;

void myFunction() {
    int localVar = 100;

    printf("Inside myFunction(): localVar = %d\n", localVar);
    printf("Inside myFunction(): globalVar = %d\n", globalVar);
}

int main() {
	printf("Name - ANUJ JUGRAN\nSAP ID - 590027919\nCourse-BCA\nBatch-B6");
    printf("\n--------------------------------\n");
    
    myFunction();

    printf("Inside main(): globalVar = %d\n", globalVar);

    return 0;
}

