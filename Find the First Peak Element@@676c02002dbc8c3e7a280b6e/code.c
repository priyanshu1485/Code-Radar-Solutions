#include <stdio.h>

int findPeak(int arr[], int n) {
    int low = 0, high = n - 1;

    while (low < high) {
        int mid = (low + high) / 2;

        if (arr[mid] > arr[mid + 1]) {
            high = mid;  // Move left
        } else {
            low = mid + 1;  // Move right
        }
    }
    return arr[low]; // Peak element found
}

int main() {
    int a;
    scanf("%d", &a);
    int arr[a];

    for (int i = 0; i < a; i++) {
        scanf("%d", &arr[i]);
    }

    printf("%d", findPeak(arr, a));

    return 0;
}
