class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> stk;
        int num = tokens.size();

        for(int i = 0; i < num;i++)
        {
            string& str = tokens[i];
            if(!(str == "+" ||str == "-" || str == "*" || str == "/"))
                stk.push(atoi(str.c_str()));
            else
            {
                int num2 = stk.top();
                stk.pop();
                int num1 = stk.top();
                stk.pop();
                switch(str[0])
                {
                    case '+':
                        stk.push(num1 + num2);
                    break;
                    case '-':
                        stk.push(num1 - num2);
                    break;
                    case '*':
                        stk.push(num1 * num2);
                    break;
                    case '/':
                        stk.push(num1 / num2);
                    break;
                }
            }
        }
        return stk.top();
    }
};