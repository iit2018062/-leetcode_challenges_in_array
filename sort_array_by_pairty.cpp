class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& A) {
      vector<int>tmp;
      int n = A.size();
      for(int i=0;i<n;i++)
      {
        if(A[i]%2==0)
          tmp.push_back(A[i]);
      }
      for(int i=0;i<n;i++)
      {
        if(A[i]%2!=0)
        tmp.push_back(A[i]);
      }
        
      return tmp;
    }
};
