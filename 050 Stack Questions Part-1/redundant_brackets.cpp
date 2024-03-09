

#include<iostream>


bool findRedundantBrackets(string &s)
{
    //Step:1 if the character is opening bracket or operator then push in stack
    //Step:2 if the character is closing bracket or lowercase char
    //Step:3 if getting closing bracket it means already stored opening bracket in stack, will check does it contain any operator between starting bracket

    stack<char> st;

    for(int i = 0; i <= s.length(); i++){
        char ch =  s[i];
        if(ch == '(' || ch == '+' || ch == '-' || ch == '*' || ch == '/'){
            st.push(ch);
        }else{
            // ch is closing bracket or lowercase letter
            if(ch == ')'){
                // e.g ((a+b))
                // |+| 
                // |(| 
                // |(|

                bool isRedundant = true;
                
                // Just Traversing in stack if contains operator between opening and closing, so its not redundant
                while(st.top() != '('){
                    char top = st.top();
                    if(top == '+' || top == '-' || top == '*' || top == '/'){
                        isRedundant = false;
                    }
                    st.pop();
                }

                // if could not find operator then it's redundant
                if(isRedundant == true){
                    return true;
                }

                // Note: Popping the opening bracket after each traversal
                st.pop();
            }
        }

    }
}
