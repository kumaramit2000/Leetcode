class Solution {
public:
    int countTriplets(vector<int>& arr) {
        long long int xorv[400];
        int sz=arr.size();
        for(int i=0;i<sz;i++)
        {
            if(i==0)
            {
                xorv[i]=arr[i];
            }
            else
            {
                xorv[i]=xorv[i-1]^arr[i];
            }
        }
        int ans=0;
        for(int i=0;i<sz;i++)
        {
            for(int j=i+1;j<sz;j++)
            {
                for(int k=j;k<sz;k++)
                {
                    long long int a,b;
                    if(i==0)
                    {
                        a=xorv[j-1];
                        b=xorv[k]^xorv[j-1];
                    }
                    else
                    {
                        a=xorv[j-1]^xorv[i-1];
                        b=xorv[k]^xorv[j-1];
                    }
                    if(a==b)
                    {
                        ans++;
                    }
                }
            }
        }
        return ans;
    }
};
