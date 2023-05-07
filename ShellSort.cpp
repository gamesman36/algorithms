#include <iostream>
#include <vector>

void shellsort(std::vector<int>& arr) {
    int size = arr.size();
    for (int gap = size / 2; gap > 0; gap /= 2) {
        for (int i = gap; i < size; i++) {
            int temp = arr[i];
            int j;
            for (j = i; j >= gap && arr[j - gap] > temp; j -= gap) {
                arr[j] = arr[j - gap];
            }
            arr[j] = temp;
        }
    }
}

void sortUsingShellsort(std::vector<int>& arr) {
    shellsort(arr);
}

int main() {
    std::vector<int> arr = {3, 17, 5, 10, 1, 9, 11};
    sortUsingShellsort(arr);

    for (int num : arr) {
        std::cout << num << "\n";
    }

    return 0;
}
