class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
      int m=INT_MIN;
      int n = nums.size();
      if(n==1 && nums[0]==1)return 1;
      if(n==1 && nums[0]==0)return 0;
      int c=0;
      for(int i=0;i<n;i++)
      {  if(nums[i]!=0)
           c=c+1;
       cout<<c<<endl;
        if(nums[i]==0)
        {
          m = max(m,c);
          c=0;
        }
        
      }
      return max(m,c);
        
    }
};
