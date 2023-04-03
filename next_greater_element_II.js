/*
class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        int n= nums.size();
        vector<int> nge(n,-1);
        stack<int> s;
        for(int i=2*n-1; i>=0;i--){
            while(!s.empty() && s.top()<=nums[i%n]){
                s.pop();
            }
            if(i<n){
                if(!s.empty()) nge[i]=s.top();
            }
            s.push(nums[i%n]);
        }
        return nge;
    }    
};
*/

// highest rectangle in a histogram
class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int n = heights.size(), ans = 0, left[n], right[n];
        stack<int> st;
        
        for(int i=0; i<n; i++){
            while(!st.empty() && heights[st.top()] >= heights[i]) st.pop();
            if(st.empty()) left[i]=0;
            else left[i] = st.top() + 1;
            st.push(i);
        }
        
        while(!st.empty()) st.pop();
        
        for(int i=n-1; i>=0; i--){
            while(!st.empty() && heights[st.top()] >= heights[i]) st.pop();
            if(st.empty()) right[i] = n-1;
            else right[i] = st.top() - 1;
            st.push(i);
        }
        
        for(int i=0; i<n; i++)
            ans = max(ans, heights[i]*(right[i]-left[i]+1));
         
        return ans;
    }
};
**
