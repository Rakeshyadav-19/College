#include <stdio.h>
#define MAX 50
int arr[MAX], pos[MAX], ns = 0;
void linear_search(int * array, int n, int key) {
    int i;
    for (i = 0; i < n; i++) {
        if (array[i] == key) {
            pos[ns] = i;
            ns++;
        }
    }
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
    printf("====Linear Search (Array)====\n\n");
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
    printf("\n\nEnter Data To Search: ");
    scanf("%d", & n);
    linear_search(arr, sizearr, n);
    if (ns != 0) {
        printf("\nData found at index ");
        display(pos, ns);
    } else {
        printf("\nData not found\n");
    }
    return 0;
}