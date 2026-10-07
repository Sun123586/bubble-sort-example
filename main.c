#include <stdio.h>

int main()
{
    int arr[8];
    printf("Please input 8 numbers:");
    for (int i = 0; i < 8; i++) {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < 7; i++) {
        for (int j = 0; j < 7 - i; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    printf("After sorting:");
    for (int i = 0; i < 8; i++) {
        printf(" %d", arr[i]);
    }
    printf("\n");
    return 0;
}
