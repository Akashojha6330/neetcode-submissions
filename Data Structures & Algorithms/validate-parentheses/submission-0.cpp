class Solution {
public:
    bool isValid(string s) {
        stack<char>mp;
        for(char c:s){
            if(c=='('|| c=='{'||c=='['){
                mp.push(c);
            }else {
                if(mp.empty()){
                    return false;
                }
            
            if((c==')'&&mp.top()!='(')||
               (c=='}'&&mp.top()!='{')||
               (c==']'&&mp.top()!='['))
               return false;
               mp.pop();
        }
        }
        return mp.empty();
    }
};
