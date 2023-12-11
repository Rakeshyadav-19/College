//To Implement Program of Quick Sort
#include <stdio.h>
void swap(int * a, int * b) {
    int t = * a;
    * a = * b;
    * b = t;
}
int partition(int arr[], int low, int high) {
    int pivot = arr[high], j;
    int i = (low - 1);
    for (j = low; j <= high - 1; j++) {
        if (arr[j] <= pivot) {
            i++;
            swap( & arr[i], & arr[j]);
        }
    }
    swap( & arr[i + 1], & arr[high]);
    return (i + 1);
}
void quickSort(int arr[], int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high);
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}
void insert(int array[], int sizearr) {
    int i;
    for (i = 0; i < sizearr; i++) {
        printf("Arr[%d]: ", i);
        scanf("%d", & array[i]);
    }
}
void display(int array[], int n) {
    int i;
    for (i = 0; i < n; i++) {
        if (i == n - 1) {
            printf("%d ", array[i]);
        } else {
            printf("%d, ", array[i]);
        }
    }
}
int main() {
    int arr[100], size_arr;
    printf("Name:Rakesh Yadav\nRoll No. 2029\n");
    printf("*=*=*=* Quick Sort *=*=*=*\n\n");
    printf("Enter Size Of Array: ");
    do {
        scanf("%d", & size_arr);
        if (size_arr <= 0) {
            printf("(Invalid) Enter a Non-Zero Number: ");
        }
    } while (size_arr <= 0);
    printf("\nEnter Data For Following Elements: \n");
    insert(arr, size_arr);
    printf("\nOriginal array: ");
    display(arr, size_arr);
    quickSort(arr, 0, size_arr - 1);
    printf("\nSorted array: ");
    display(arr, size_arr);
    return 0;
}