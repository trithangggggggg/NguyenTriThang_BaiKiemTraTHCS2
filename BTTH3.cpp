#include<stdio.h>

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(&arr[j], &arr[j + 1]);
            }
        }
    }
    
}

int main() {
    int n, i, j, k;
    scanf("%d", &n);
    int arr[n];
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // tao hai mang
    
    int even[n], odd[n], evenCount = 0, oddCount = 0;

    // phan loai chan va le
    
    for (i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            even[evenCount++] = arr[i];
        } else {
            odd[oddCount++] = arr[i];
        }
        
    }


    // sap xep mang chan va le
    bubbleSort(even, evenCount);
    bubbleSort(odd, oddCount);

    // ghep ket qua
    for (i = 0; i < evenCount; i++) {
        arr[i] = even[i];
    }
    for (j = 0; j < oddCount; j++) {
        arr[i + j] = odd[j];
    }

    // hien thi ket qua
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
