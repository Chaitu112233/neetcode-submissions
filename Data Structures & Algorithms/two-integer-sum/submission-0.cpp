class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        // Create an Hash-map and store the nums and how many it occurs in the hash table
        unordered_map<int, int> store_nums;
        for (int i = 0; i < nums.size(); i++)
        {
            store_nums[nums[i]] = i; 
        }

        for (int i = 0; i < nums.size(); i++)
        {
            int difference;
            difference = target - nums[i];

            if ((store_nums.find(difference) != store_nums.end()) && (store_nums[difference] != i))
            {
                if (i > store_nums[difference])
                {

                    return {store_nums[difference], i};
                }
                else
                {
                    return {i, store_nums[difference]};
                }
            }
        }

    }
};
