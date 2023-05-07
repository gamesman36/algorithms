#include <iostream>
#include <vector>

int partition(std::vector<int>& arr, int low, int high) {
    int pivot = arr[high];
    int i = low - 1;

    for (int j = low; j <= high - 1; j++) {
        if (arr[j] <= pivot) {
            i++;
            std::swap(arr[i], arr[j]);
        }
    }

    std::swap(arr[i + 1], arr[high]);
    return (i + 1);
}

void quicksort(std::vector<int>& arr, int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high);

        quicksort(arr, low, pi - 1);
        quicksort(arr, pi + 1, high);
    }
}

void sortUsingQuicksort(std::vector<int>& arr) {
    int size = arr.size();
    quicksort(arr, 0, size - 1);
}

int main() {
    std::vector<int> arr = {3, 17, 5, 10, 1, 9, 11};
    sortUsingQuicksort(arr);

    for (int num : arr) {
        std::cout << num << "\n";
    }

    return 0;
}