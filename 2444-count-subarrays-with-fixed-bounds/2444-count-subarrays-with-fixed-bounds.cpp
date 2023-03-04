// class Solution {
// public:
//     long long countSubarrays(vector<int>& nums, int minK, int maxK) {
//        vector<int> king;
//           long long count=0;
        
//         for(int i=0;i<nums.size();i++)
//         {
           
//             // for(int j=i;j<nums.size();j++)
//             int j=nums.size()-1;
//             while(j!=0)
//             {
                
//                 int a=*max_element(nums.begin()+i,nums.end()-j+2);
//                 int b=*min_element(nums.begin()+i,nums.end()-j+2);
               
//                     if(a==maxK && b==minK)
//                     {
                      
//                         count++;
//                     }
//                     j--;
//             }
           
//         }
        
//          return count;
        
        
        
        
        
//     }
// };

class Solution {
public:
    long long countSubarrays(vector<int>& nums, int minK, int maxK) {
        long res = 0;
        bool minFound = false, maxFound = false;
        int start = 0, minStart = 0, maxStart = 0;
        for (int i = 0; i < nums.size(); i++) {
            int num = nums[i];
            if (num < minK || num > maxK) {
                minFound = false;
                maxFound = false;
                start = i+1;
            }
            if (num == minK) {
                minFound = true;
                minStart = i;
            }
            if (num == maxK) {
                maxFound = true;
                maxStart = i;
            }
            if (minFound && maxFound) {
                res += (min(minStart, maxStart) - start + 1);
            }
        }
        return res;
    }
};