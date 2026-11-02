class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {

        // Create a hash map to store the num of times each element appeared
        unordered_map<int, int> freq;

        for (int i: nums)
        {
            freq[i] = freq[i] + 1;
        }

        // Create a vector inside vector called buckets where each entry is a freq and elements storedin respective entry says how much time each element or key appeared
        vector<vector<int>> buckets(nums.size() + 1);

        for (auto i: freq)
        {
            buckets[i.second].push_back(i.first);
        }

        // Iterate from last entry of the array since the last entry is the more occured frequency
        vector<int> result;

        for (int i = buckets.size() - 1; i > 0; i--)
        {
            for (int j: buckets[i])
            {
                result.push_back(j);

                if (result.size() == k)
                {
                    return result;
                }
            }
        }

        return result;
    }
};
