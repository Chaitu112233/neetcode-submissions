class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {

        for (int i = 0; i < matrix.size(); i++) // iterate over each row
        {
            // If the target > start element of that particular row and target < last element of that particular row. We can use binary search to find key in that particular row
            if (matrix[i][0] <= target && matrix[i][matrix[0].size() - 1] >= target)
            {
                int left = 0;
                int right = matrix[i].size() - 1;

                // binary search
                while (left <= right)
                {
                    int mid = left + (right - left) / 2;

                    if (matrix[i][mid] == target)
                    {
                        return true;
                    }
                    if (matrix[i][mid] < target)
                    {
                        left = mid + 1;
                    }
                    else
                    {
                        right = mid - 1;
                    }
                }
            }
        }

        return false;
        
    }
};
