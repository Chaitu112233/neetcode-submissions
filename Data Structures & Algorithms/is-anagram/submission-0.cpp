class Solution {
public:
    bool isAnagram(string s, string t) {

        // So if the lengths are not eqaul then there is chance atleast one character is different
        if (s.length() == t.length())
        {
            // Creating a unordered map so we can count each character 
            unordered_map<char, int> s_map, t_map;

            // iterate through string s and store the number of times each character is appearing in map
            for (char x: s)
            {
                s_map[x] = s_map[x] + 1;
            }
            // iterate through string t and store the number of times each character is appearing in map
            for (char x: t)
            {
                t_map[x] = t_map[x] + 1;
            }

            if (s_map == t_map)
            {
                return true;
            }
        }

        return false;
    }
};
