#include <stdio.h>  

int main() 
{
	printf("Name-ANUJ JUGRAN\nSAP ID- 590027919\nCourse-BCA\nBatch- B6\n");
    float P, R, T, CI;

    printf("Enter the values of principle, rate, time");
    scanf("%f%f%f", &P, &R, &T);
    float t1 = (1+(R/100));
    float t2 = pow(t1,T);
    CI = (P*t2)-P;
    

    printf("the compound interst is %f", CI);
    return 0;
}
