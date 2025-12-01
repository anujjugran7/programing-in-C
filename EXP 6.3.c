#include <stdio.h>
int main() {
printf("Name - ANUJ JUGRAN\nSAP ID - 590027919\nCourse-BCA\nBatch-B6");
printf("\n--------------------------------\n");
    int i,n, num;
    printf("Enter the number of integers: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d integers:\n", n);
    for ( i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the number to find frequency: ");
    scanf("%d", &num);

    int frequency = 0;
    for ( i = 0; i < n; i++) {
        if (arr[i] == num) {
        frequency++;
        }
    }

    printf("Frequency of %d is: %d\n", num, frequency);

    return 0;
}

