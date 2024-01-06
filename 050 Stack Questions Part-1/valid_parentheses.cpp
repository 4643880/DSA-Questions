// e.g [{()}] this is balanced each opening bracket has closing bracket
// Step 1: Start to put the brackets in the start
// Step 2: Whenever the first closing bracket will come then check that your stack contains its opening bracket or not if contains then pop it
// Step 3: At the end if your stack is empty then it's balanced
// Step 4: In short if the (stack top) contains opening bracket of the closing bracket then it is balanced
// ||
// ||
// |)|
// |(| this is opening bracket of the above closing bracket, pop it
// |{|
// |[|

bool isValidParenthesis(string s)
{
    stack<char> st;
    for(int i = 0; i < s.length(); i++){
        // if the bracket is opening
        char ch = s[i];
        if(ch == '(' || ch == '{' || ch == '['){
            st.push(ch);
        }else{
        // if the bracket is closing    
            if (!st.empty()) {              
              char topElement = st.top();
              if(
                  (ch == ')' && topElement == '(') ||
                  (ch == '}' && topElement == '{') ||
                  (ch == ']' && topElement == '[')
                ) {
                st.pop();
              } else {
                return false;
              }
            }else{
                return false;
            }
        }

    }
    if(st.empty()){
        return true;
    }else{
        return false;
    }
}




