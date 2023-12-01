#include <stdio.h>
#define MAX 50
int arr[MAX], pos[MAX], ns = 0;
void sort(int * array, int size) {
    int i, j, temp;
    for (i = 0; i < size; i++) {
        for (j = i + 1; j < size; j++) {
            if (array[j] < array[i]) {
                temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }
}
int binary_search(int * array, int first, int lastidx, int x) {
    int i = 1;
    if (first > lastidx) {
        return -1;
    }
    int mid = first + (lastidx - first) / 2;
    if (array[mid] == x) {
        return mid;
    } else if (array[mid] > x) {
        return binary_search(array, first, mid - 1, x);
    } else {
        return binary_search(array, mid + 1, lastidx, x);
    }
    return -1;
}
void insert(int * array, int sizearr) {
    int i;
    for (i = 0; i < sizearr; i++) {
        printf("Arr[%d]: ", i);
        scanf("%d", & array[i]);
    }
}
void display(int * array, int n) {
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
    int sizearr, data, i, n;
    printf("Name :Rakesh S. Yadav\n Roll no: 2029\n");
    printf("====Binary Search====\n\n");
    printf("Enter Size Of Array: ");
    do {
        scanf("%d", & sizearr);
        if (sizearr <= 0) {
            printf("(Invalid) Enter a Non-Zero Number: ");
        }
    } while (sizearr <= 0);
    printf("\nEnter Data For Following Elements: \n");
    insert(arr, sizearr);
    printf("\nEntered Array = ");
    display(arr, sizearr);
    printf("\nSorted Array = ");
    sort(arr, sizearr);
    display(arr, sizearr);
    printf("\n\nEnter Data To Search: ");
    scanf("%d", & n);
    int idx = binary_search(arr, 0, sizearr - 1, n);
    if (idx != -1) {
        printf("\nData found at index %d\n", idx);
    } else {
        printf("\nData not found\n");
    }
    return 0;
}