class Solution {
public:
    int maxArea(vector<int>& heights) {
        int n= heights.size();
        int left=0;
        int ans=0;
        int right=n-1;
        while(left<=right){
            int b= right-left;
            int area =min(heights[left],heights[right])*b;
            ans=max(ans,area);
            if (heights[left]<heights[right]){
                left+=1; 
            }
            else{
                right-=1;

            }

        }
        return ans;
    }
};
