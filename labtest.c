#include <stdio.h>
#include <stdlib.h>

void insert(int arr[], int *n, int val);
void delete(int arr[], int *n, int val);
void display(int arr[], int n);
int search(int arr[], int n, int val);

int main() {
    int arr[100], n = 0, choice, val;

    while (1) {
        printf("\n1. Insert\n2. Delete\n3. Display\n4. Exit\nEnter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter value to insert: ");
                scanf("%d", &val);
                insert(arr, &n, val);
                break;
            case 2:
                printf("Enter value to delete: ");
                scanf("%d", &val);
                delete(arr, &n, val);
                break;
            case 3:
                display(arr, n);
                break;
            case 4:
                exit(0);
            default:
                printf("Invalid choice!\n");
        }
    }

    return 0;
}

// Function to insert a value
void insert(int arr[], int *n, int val) {
    int i = *n - 1;

    while (i >= 0 && arr[i] > val) {
        arr[i + 1] = arr[i];
        i--;
    }

    arr[i + 1] = val;
    (*n)++;
}

// Function to delete a value
void delete(int arr[], int *n, int val) {
    int pos = search(arr, *n, val);

    if (pos == -1) {
        printf("Value not found!\n");
        return;
    }

    for (int i = pos; i < *n - 1; i++) {
        arr[i] = arr[i + 1];
    }

    (*n)--;
}

// Function to search for a value
int search(int arr[], int n, int val) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == val) {
            return i;
        }
    }

    return -1;
}

// Function to display the array
void display(int arr[], int n) {
    FILE *file = fopen("output.txt", "w");

    if (file == NULL) {
        printf("Error opening file!\n");
        return;
    }

    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
        fprintf(file, "%d\n", arr[i]);
    }

    printf("\n");
    fclose(file);
}
