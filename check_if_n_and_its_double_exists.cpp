class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
      unordered_map<int,int>ump;
      int  n = arr.size();
      for(int i=0;i<n;i++)
        ump[arr[i]]++;
      for(int i=0;i<n;i++)
      {
        if(ump.find(arr[i]*2)!=ump.end() && (arr[i]*2)!=arr[i]){
         
          return true;
        }
        else if(ump.find(arr[i]*2)!=ump.end() && ump[arr[i]]>1)
          return true;
      }
      return false;
        
    }
};
