class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> st;
        for(int num: nums){
            st.insert(num);
        }

        int ans =0;
        for(int num: st){
            int curr = num;
            int len = 1;
            if(st.find(curr-1) == st.end()){
                while(st.find(curr+1) != st.end()){
                    curr++;
                    len++;
                }
                ans = max(ans, len);
            }
        }
        return ans;
    }
};
