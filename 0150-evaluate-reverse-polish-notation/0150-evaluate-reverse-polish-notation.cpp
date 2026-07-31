class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> st;

        for (string s : tokens) {
            if (s != "+" && s != "-" && s != "*" && s != "/") {
                st.push(stoi(s));
            }
            else {
                int temp2 = st.top();
                st.pop();

                int temp1 = st.top();
                st.pop();

                if (s == "+")
                    st.push(temp1 + temp2);
                else if (s == "-")
                    st.push(temp1 - temp2);
                else if (s == "*")
                    st.push(temp1 * temp2);
                else
                    st.push(temp1 / temp2);
            }
        }

        return st.top();
    }
};