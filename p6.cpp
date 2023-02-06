// paranthesis chekcing

#include <bits/stdc++.h>
using namespace std;

bool isbalanced(string s){
    stack<char> st;
    bool ans = true;
    for(int i=0; i<s.length(); i++){
        if(s[i]=='(' or s[i]=='[' or s[i]=='{' ){
            st.push(s[i]);
        }
        else if(s[i]==')' or s[i]==']' or s[i]=='}'){
            if(s[i]==')' and !st.empty() and st.top()=='('){
                st.pop();
            }
            else if(s[i]==']' and !st.empty() and st.top()=='['){
                st.pop();
            }
            else if(s[i]=='}' and !st.empty() and st.top()=='{'){
                st.pop();
            }
            else{
                ans = false;
                return ans;
            }
        }

    }

    if(!st.empty()){
        ans = false;
        return ans;
    }
    else{
        return ans;
    }
}


int main(){
    // string s = "(){{{}}[]}";
    string s = "{([]}";
    if(isbalanced(s)){
        cout << "Balanced Parenthesis" << endl;
    }
    else{
        cout << "Not balanced parenthesis" << endl;
    }
    return 0;
}

