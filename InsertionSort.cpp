#include <iostream>
#include <vector>
#include <iterator>

void InsertionSort(std::vector<int> A)
{
    int N = A.size();
    int i = 1;
    int current, j;

    while (i < N)
    {
        current = A[i];
        j = i - 1;

        while (j >= 0 && A[j] > current)
        {
            A[j + 1] = A[j];
            j--;
        }

        A[j + 1] = current;
        i++;
    }

    for(int i=0; i<A.size(); i++) {
        std::cout << A[i] << "\n";
    }
}

int main()
{
    std::vector<int> A = {3, 17, 5, 10, 1, 9, 11};
    InsertionSort(A);
}