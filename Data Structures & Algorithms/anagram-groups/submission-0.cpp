class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {

        // Create a hashmap which stores the frequency string as key and strings corresponding to it as values
        unordered_map<string, vector<string>> frequency_string_str;


        for (string s: strs)
        {
            // Create an array of 26 which stores the num of appearance of each character in a given string
            int count[26] = {0};

            // iterate through the string in an array to count num of times each character appeared
            for (char c: s)
            {
                count[c - 'a']++;
            }

            // Create frequency string such that it will create string in this manner: act: a1c1t1
            string frequency_string = {};
            for (int i = 0; i < 26; i++)
            {
                if (count[i] >= 1)
                {
                    frequency_string += char(i + 'a');
                    frequency_string += to_string(count[i]);
                }
            }

            frequency_string_str[frequency_string].push_back(s);
        }

        vector<vector<string>> result;

        for (auto i: frequency_string_str)
        {
            result.push_back(i.second);
        }

        return result;
    }

    
};
