//1313. Decompress Run-Length Encoded List
//Problem Link: https://leetcode.com/problems/decompress-run-length-encoded-list/

//Time Complexity:
//Space Complexity:

class Solution {
public:
    vector<int> decompressRLElist(vector<int>& nums) {
        vector<int> ans;
        for(int i=0;i<nums.size();i+=2)
        {
            for(int j=0;j<nums[i];j++)
            {
                ans.push_back(nums[i+1]);
            }
        }
        
        return ans;
        
    }
};