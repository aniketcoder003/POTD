class Solution {
public:
    int missingNumber(vector<int>& nums) {

        int sum=nums.size()*(nums.size()+1)/2;
        int a=0;
        for ( int i =0 ; i<nums.size(); i++)
          {   a+=nums[i];
          }
             if ( a==sum)
             return 0 ; 
             else 
             return {sum-a,};
        
    }
};