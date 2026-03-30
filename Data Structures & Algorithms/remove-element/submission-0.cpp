class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int count=0;

        nums.erase(remove(nums.begin(),nums.end(),val),nums.end());

        return nums.size();
    }
};