#include<bits/stdc++.h>
using namespace std;

unordered_map<char,int> br = {{'(',-1},{'{',-2},{'[',-3},{')',1},{'}',2},{']',3}};

class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        for (char sym : s){
            if(br[sym]<0){
                st.push(sym);
            }
            else{
                if(st.empty()) return false;
                char top = st.top();
                st.pop();
                if(br[top]+br[sym]!=0){
                    return false;
                }
            }
        }
        if(st.empty()) return true;
        return false;
    }
};