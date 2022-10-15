class Solution {
public:
    int majorityElement(vector<int> &nums) {
      
        int majorityIndex = 0; // index of the current majority element
        
        int counter = 1; // keeping track of the frequency of the current majority element
      
        int size = nums.size();
      
        for(int i=1; i<size; i++)
        {
            // if element is same as current majority element just increase the counter
            if (nums[i] == nums[majorityIndex])
            {
                counter++;
            }
            else{
                counter--;
                // reduce the counter and check whether it is zero, if zero change the majority index, counter and continue
                if (counter == 0)
                {
                    majorityIndex = i;
                    counter = 1;
                }
            }
        }
        
        // return element at the majorityindex
        return nums[majorityIndex];
    }
    
    int majorityElementMap(vector<int> &nums){
        
        map<int, int> frequencyCounter;
        // map for storing the frequency
        
        for (int i: nums)
        {
            frequencyCounter[i]++;
        }

        int size = nums.size(); // size of array, for comparison

        for (auto i = frequencyCounter.begin(); i != frequencyCounter.end(); i++)
        {
            if ( i -> second > size/2 )
            {
                // return the element with freuqency > [size/2]
                return i -> first;
            }
        }
        
        return 0; // it is given that in all cases an element exists with frequency greater than size/2, so this statement will never execute, but we have to return        something in all cases 
    }
};
