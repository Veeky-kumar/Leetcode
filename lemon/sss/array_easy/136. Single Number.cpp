class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int ans = 0;
        for(auto x: nums){
            ans = ans^x;
        }
        return ans;
    }
};
// On
// learn ""xor"", or sorting or map will work