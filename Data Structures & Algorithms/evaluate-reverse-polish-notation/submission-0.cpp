class Solution {
public:
    int evalRPN(vector<string>& tokens) {

        // Create a stack which stores 2 numbers for evaluating for the given operators
        stack<int> st;

        for (int i = 0; i < tokens.size(); i++)
        {
            if (tokens[i] != "+" && tokens[i] != "-" && tokens[i] != "*" && tokens[i] != "/")
            {
                // Convert the string numerical value to int
                int x = stoi(tokens[i]);

                // Store the numerical value in the stack
                st.push(x);
            }
            else if (tokens[i] == "+" || tokens[i] == "-" || tokens[i] == "*" || tokens[i] == "/")
            {
                if (tokens[i] == "+")
                {
                    int x1 = st.top();
                    st.pop();

                    int x2 = st.top();
                    st.pop();

                    int sol = x2 + x1;

                    st.push(sol);

                }
                else if (tokens[i] == "-")
                {
                    int x1 = st.top();
                    st.pop();

                    int x2 = st.top();
                    st.pop();

                    int sol = x2 - x1;

                    st.push(sol);

                }
                if (tokens[i] == "*")
                {
                    int x1 = st.top();
                    st.pop();

                    int x2 = st.top();
                    st.pop();

                    int sol = x2 * x1;

                    st.push(sol);

                }
                if (tokens[i] == "/")
                {
                    int x1 = st.top();
                    st.pop();

                    int x2 = st.top();
                    st.pop();

                    int sol = x2 / x1;

                    st.push(sol);

                }
            }
        }

        return st.top(); 
        
    }
};
