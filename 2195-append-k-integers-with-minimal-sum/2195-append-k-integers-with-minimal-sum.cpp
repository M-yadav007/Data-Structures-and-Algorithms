// class Solution {
// public:
//     long long minimalKSum(vector<int>& nums, int k) {

//         sort(nums.begin(),nums.end());

//         for(int j:nums)
//         {
//             cout<<j<<" ";
//         }
//         cout<<"\n\n";
//         int se=1;
//         int l=k;
//         long long sum=0;
//         int count=0;
//         int i=0;
//         while(count!=k && i<nums.size())
//         {
//             if(nums[i]==se)
//             {
//                 i++;
//                 se++;
//             }
//             else
//             {
//                 cout<<se<<" ";
//                 sum=sum+se;
//                 se++;
//                 count++;

//             }
//         }
//         int a=nums[nums.size()-1]+1;

//         while(count<k)
//         {
//             sum=sum+a;
//             a++;
//             count++;
//         }
//         // for(int k:nums)
//         // {
//         //     sum=sum+k;
//         // }
//         return sum;
        
        
//     }
// };
class Solution {
public:
    long long minimalKSum(vector<int>& nums, int k){
        sort(nums.begin(), nums.end());
        long long s = 0;
        int i = 0;
        int prev = 0;
        while(k>0 && i<nums.size()){
            int len = nums[i] - prev - 1;
            if(len>k) len = k;
            if(len>0){
                long long int start = prev;
                long long int end = start + len;
                long long int sum = (end*(end+1))/2 - (start*(start+1))/2;
                s += sum;
                k -= len;
            }
            prev = nums[i]; i++;
        }
        if(k>0){
            long long int start = prev;
            long long int end = start + k;
            long long int sum = (end*(end+1))/2 - (start*(start+1))/2;
            s += sum;
        }
        return s;
    }
};