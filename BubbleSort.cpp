#include <iostream>
#include <vector>

void BubbleSort(std::vector<int> nums)
{
    int s = nums.size();

    for(int x = 0; x < s - 1; x++)
    {
        for(int y = 0; y < s-x-1; y++)
        {
            if(nums[y] > nums[y+1])
            {
                int t = nums[y];
                nums[y] = nums[y+1];
                nums[y+1] = t;
            }
        }
    }

    for(int i=0; i<s; i++) {
        std::cout << nums[i] << "\n";
    }
}

int main()
{
    std::vector<int> nums = {3, 17, 5, 10, 1, 9, 11};
    BubbleSort(nums);
}
