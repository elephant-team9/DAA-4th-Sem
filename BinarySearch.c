#include <stdio.h>

int main() {
    int arr[] = {2, 3, 4, 10, 40};
    int n = sizeof(arr) / sizeof(arr[0]);
    int x;

        printf("----Binary Search-----\n ");
    printf("Enter the number to search: ");
    scanf("%d", &x);

    int l = 0, r = n - 1;
    int mid;
    while (l <= r) {
        mid = l + (r - l) / 2;

        if (arr[mid] == x) {
           printf("Element %d is present at index %d\n", x, mid);
           return 0;
        }

        if (arr[mid] < x)
            l = mid + 1;
        else
            r = mid - 1;
    }
    printf("Element %d is not present in the array.\n", x);
    return 0;
}
