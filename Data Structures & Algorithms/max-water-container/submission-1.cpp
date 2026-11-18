class Solution {
public:
    int maxArea(vector<int>& heights) {

        // Using Two-pointer technique
        int left = 0;
        int right = heights.size() - 1;

        // Store max (length * width) = 0 at start
        int max_area = 0;
        while (left < right)
        {
            // Calculate the width using vectors indexes
            int width = right - left;

            // Calculate length using the minimum height of two indexes values in vector
            int length = minimum(heights[left], heights[right]);

            int area = width * length;

            if (area > max_area)
            {
                max_area = area;
            }

            if (heights[left] <  heights[right])
            {
                left++;
            }
            else
            {
                right--;
            }
        }

        return max_area;
    }

    int minimum(int a, int b)
    {
        if (a < b)
        {
            return a;
        }
        else
        {
            return b;
        }
    }
};
