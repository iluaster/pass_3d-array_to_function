#include <stdio.h>

void processArray(int arr[][3][3], int size1, int size2, int size3);

int main() {
    int arr[2][3][3] = {
        {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}},
        {{10, 11, 12}, {13, 14, 15}, {16, 17, 18}}
    };

    int size1 = sizeof(arr) / sizeof(arr[0]);
    int size2 = sizeof(arr[0]) / sizeof(arr[0][0]);
    int size3 = sizeof(arr[0][0]) / sizeof(arr[0][0][0]);

    processArray(arr, size1, size2, size3);

    return 0;
}

void processArray(int arr[][3][3], int size1, int size2, int size3) {
    for (int i = 0; i < size1; i++) {
        for (int j = 0; j < size2; j++) {
            for (int k = 0; k < size3; k++) {
                printf("%d ", arr[i][j][k]);
            }
            printf("\n");
        }
        printf("\n");
    }
}
