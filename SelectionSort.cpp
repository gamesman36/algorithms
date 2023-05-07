#include <iostream>
#include <vector>

int smallest(std::vector<int> arr, int k, int n)
{
    int pos = k, small = arr[k], i;
    for (i = k + 1; i < n; i++)
    {
        if (arr[i] < small)
        {
            small = arr[i];
            pos = i;
        }
    }

    return pos;
}

void SelectionSort(std::vector<int> arr)
{
    int s = arr.size();

    int k, pos, temp;
    for (k = 0; k < s; k++)
    {
        pos = smallest(arr, k, s);
        temp = arr[k];
        arr[k] = arr[pos];
        arr[pos] = temp;
    }

    for (int i = 0; i < s; i++)
    {
        std::cout << arr[i] << "\n";
    }
}

int main()
{
    std::vector<int> nums = {3, 17, 5, 10, 1, 9, 11};
    SelectionSort(nums);
}