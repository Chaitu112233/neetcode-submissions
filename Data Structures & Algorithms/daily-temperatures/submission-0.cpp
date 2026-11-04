class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {

        // Stack to store the temperatures index location of a vector which haven't seen the rise in temp
        stack<int> st;

        // Vector to store how many days it took to see the increase in temp 
        vector<int> results(temperatures.size(), 0);

        for (int i = 0; i < temperatures.size(); i++)
        {
            if (st.empty())
            {
                st.push(i);
            }
            else
            {
                while (!st.empty() && temperatures[st.top()] < temperatures[i])
                {
                    results[st.top()] = i - st.top();
                    st.pop();
                }
            }
            st.push(i);
        }

        return results;
       
        
        
    }
};
