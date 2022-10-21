class Solution {
public:
    void sortColors(vector<int>& nums) {
        int size = nums.size();

        // dividing the array in 4 ranges
        int low = 0;
        int mid = 0;
        int high = size - 1;

        for (int i = 0; i < size and mid <= high; i++)
        {
            // if (mid > high)
            //     break; // very important breaking condition

            if (nums[i] == 0)
            {
                swap(nums[i], nums[low]);
                low++;
                mid++;
            }
            else if (nums[i] == 1)
            {
                swap(nums[i], nums[mid]);
                mid++;
            }
            else
            {
                swap(nums[i], nums[high]);
                high--;
                i--;
            }
        }
    }
};
