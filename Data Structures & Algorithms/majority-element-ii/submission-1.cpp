class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_set<int> arr;
        for(int num:nums){
            int count=0;
            for(int i:nums){
                if(i==num) count++;
            }
            if(count > nums.size()/3){
                arr.insert(num);
            }
        }
        return vector<int>(arr.begin(),arr.end());
    }
};