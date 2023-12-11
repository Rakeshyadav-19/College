//To Implement Program of Selection Sort
#include <stdio.h>
void swap(int * xp, int * yp) {
    int temp = * xp;
    * xp = * yp;
    * yp = temp;
}
void selectionSort(int * arr, int n) {
    int i, j, min_idx;
    for (i = 0; i < n - 1; i++) {
        min_idx = i;
        for (j = i + 1; j < n; j++)
            if (arr[j] < arr[min_idx])
                min_idx = j;
        swap( & arr[min_idx], & arr[i]);
    }
}
void display(int * arr, int size) {
    int i;
    for (i = 0; i < size; i++)
        printf("%d ", arr[i]);
}
void insert(int * arr, int size) {
    int i;
    printf("\nEnter Data For Following Elements\n");
    for (i = 0; i < size; i++) {
        printf("Arr[%d]: ", i);
        scanf("%d", & arr[i]);
    }
}
int main() {
    int arr[50], size_arr;
    printf("Name:Rakesh Yadav\nRoll No. 2029\n");
    printf("*=*=*=* Selection Sort *=*=*=*\n\n");
    printf("Enter Size Of Array: ");
    do {
        scanf("%d", & size_arr);
        if (size_arr <= 0) {
            printf("(Invalid) Enter a Non-Zero Number: ");
        }
    } while (size_arr <= 0);
    insert(arr, size_arr);
    printf("\nOriginal array: ");
    display(arr, size_arr);
    selectionSort(arr, size_arr);
    printf("\nSorted array: ");
    display(arr, size_arr);
    return 0;
}