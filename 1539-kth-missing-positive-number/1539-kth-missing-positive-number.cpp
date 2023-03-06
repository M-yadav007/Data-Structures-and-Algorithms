class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int c=1;
        int ans=0;
        int i=0;
        int b=0;
        int count=0;
        // int g=arr[0];
        while(b!=k && i<arr.size())
        {
            if(c==arr[i])
            {
                c++;
                i++;
            }
            else
            {
                b++;
                ans=c;
                c++;
                count++;
            }

            

        }
        if(count<k)
        {
            ans=arr[arr.size()-1]+(k-count);
        }

        return ans;
        
        
    }
};