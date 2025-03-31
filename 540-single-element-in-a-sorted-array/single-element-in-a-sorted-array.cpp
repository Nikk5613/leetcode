class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int c  ;
        unordered_map<int , int> mp;
        for(int i = 0 ; i < nums.size() ; i++) {
            mp[nums[i]]++;
        }
        for(auto x : mp) {
            if(x.second == 1 ){
                c = x.first;
            }
        
    }
    return c ;
    }
};