class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
      vector<int>tmp;
      int n = nums.size();
      for(int i=0;i<n;i++)
      {
        if(nums[i]!=val)
        {
          tmp.push_back(nums[i]);
        }
      }
      nums=tmp;
      return (tmp.size());
        
    }
};
