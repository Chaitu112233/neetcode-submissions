class MinStack {
public:

    // Stores the actual element
    stack<int> st;

    // Stores the min element @ each position(compared with the current input value and the top value of the stack)
    stack<int> min_st; 

    MinStack() {

    }
    
    void push(int val) {

        // Since the stack is empty we will store the input value and also consider this value as a minimumn
        if (st.empty())
        {
            st.push(val);
            min_st.push(val);
        }
        // Store the min (stack top val, incoming val) in min_st top
        else
        {
            min_st.push(min(min_st.top(), val));
            st.push(val);
        }
    }
    
    void pop() {
        // will delete the last element in the array or top element in the stack
        st.pop();
        min_st.pop();
    }
    
    int top() {
        return st.top();
    }
    
    int getMin() {
        return min_st.top();
    }
};
