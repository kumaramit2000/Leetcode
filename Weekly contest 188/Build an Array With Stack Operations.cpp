class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        int sz=target.size();
        vector<string> v;
        int prev=0;
        if(sz==1)
        {
            if(target[0]==1)
            {
                v.push_back("Push");
            }
            else
            {
                v.push_back("Push");
                v.push_back("Pop");
            }
        }
        else
        {
            
        for(int i=0;i<sz;i++)
        {
            int pc=target[i]-prev;
            prev=target[i];
            if(pc==1)
            {
                v.push_back("Push");
            }
            else
            {
            for(int j=0;j<pc-1;j++)
            {
                v.push_back("Push");
                v.push_back("Pop");
            }
                v.push_back("Push");
            }
        }
        }
        return v;
    }
};
