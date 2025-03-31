class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int totalSum = 0 ;
        int i = 0 ;
        for( i = 0 ; i < nums.size() ; i++) {
            totalSum +=nums[i];
        }
        int LeftSum = 0 , RightSum = totalSum ;
        for( i  = 0  ; i < nums.size() ; i++) {
            RightSum -= nums[i];
        
        if(LeftSum == RightSum){
            return i ;
        }
        LeftSum += nums[i];
        }
    return -1 ;
    }
    
};