//To Implement Program of Bubble Sort
#include <stdio.h>
void swap(int * xp, int * yp) {
    int temp = * xp;
    * xp = * yp;
    * yp = temp;
}
void bubbleSort(int array[], int size) {
    int i, step, temp;
    for (step = size - 1; step > 0; step--) {
        for (i = 0; i < step; i++) {
            if (array[i] > array[i + 1]) {
            	swap(&array[i], &array[i+1]);
            }
        }
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
    printf("=== Bubble Sort ===\n\n");
    printf("Enter Size Of Array: ");
    do {
        scanf("%d", &size_arr);
        if (size_arr <= 0) {
            printf("(Invalid) Enter a Non-Zero Number: ");
        }
    } while (size_arr <= 0);
    insert(arr, size_arr);
    printf("\nOriginal array: "); 
    display(arr, size_arr); 
    bubbleSort(arr, size_arr);
    printf("\nSorted array: "); 
    display(arr, size_arr);
    return 0;
}