class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int left=0,result=0;
        unordered_set<char>st;
        for(int right=0;right<s.size();right++)
        {
            while(st.count(s[right])){
                st.erase(s[left]);
                left++;
            }
            st.insert(s[right]);
            result=max(result,right-left+1);
        }
        return result;
    }
};
