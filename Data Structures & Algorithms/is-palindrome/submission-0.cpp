class Solution {
public:
    bool isPalindrome(string s) {

        // Two-Pointer Approach
        int left = 0;
        int right = s.size() - 1;
        
        while (left < right)
        {
            // Case 1: If there is empty space then change the left++ or right-- pointers
            if (! ((s[left] >= 'A' && s[left] <= 'Z') || 
                (s[left] >= 'a' && s[left] <= 'z') || 
                (s[left] >= '0' && s[left] <= '9')))
            {
                left++;
                continue;
            }
            else if (! ((s[right] >= 'A' && s[right] <= 'Z') || 
                (s[right] >= 'a' && s[right] <= 'z') || 
                (s[right] >= '0' && s[right] <= '9')))
            {
                right--;
                continue;
            }

            // case 2: If the character at the particular location is upper case make it lowercase
            if (s[left] >= 65 && s[left] <= 90)
            {
                s[left] = s[left] + ('a' - 'A');
            }
            if (s[right] >= 65 && s[right] <= 90)
            {
                s[right] = s[right] + ('a' - 'A');
            }

            // Now compare the both characters
            if (s[left] != s[right])
            {
                return false;
            }
            left++;
            right--;
        }

        return true;
        
    }
};
