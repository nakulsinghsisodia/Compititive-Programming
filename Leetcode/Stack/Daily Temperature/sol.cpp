class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int n = temperatures.size();
        vector<int> op(n,0);
        if(n==1)return op;
        stack<int> s;

        for(int i = n-1;i>-1;i--){
            if(s.empty()){
                s.push(i);
                op[i]=0;
            }
            else if(temperatures[i]<temperatures[s.top()]){
                op[i] = s.top() - i;
                s.push(i);
            }
            else{
                do{
                    s.pop();
                }while(!s.empty()  &&  temperatures[i]>=temperatures[s.top()]);
                if(s.empty()){
                    s.push(i);
                    op[i]=0;
                }
                else{
                   op[i] = s.top() - i;
                    s.push(i);
                }
            }

        }
        return op;
    }
};