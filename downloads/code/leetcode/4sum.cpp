class Solution {
public:
    vector<vector<int> > fourSum(vector<int> &num, int target) {
        // Note: The Solution object is instantiated only once and is reused by each test case.
        vector<int> tmp;
        vector<vector<int>> res;
        if(num.empty()) return res;
        sort(num.begin(), num.end());
        for(int i=0; i<num.size(); i++)
        {
            int cur = target - num[i];
            for(int j=i+1; j<num.size(); j++)
            {
                int temp = cur - num[j];
                int start = j+1, end = num.size()-1;
                while(start<end)
                {
                    if(num[start]+num[end]==temp)
                    {
                        tmp.push_back(num[i]);
                        tmp.push_back(num[j]);
                        tmp.push_back(num[start]);
                        tmp.push_back(num[end]);
                        res.push_back(tmp);
                        tmp.clear();
                        start++;
                        end--;
                        while(start<end&&num[start]==num[start-1]) start++;
                        while(start<end&&num[end]==num[end+1]) end--;
                    }
                    else if(num[start]+num[end]<temp)
                    {
                        start++;
                        while(start<end&&num[start]==num[start-1]) start++;
                    }
                    else
                    {
                        end--;
                        while(start<end&&num[end]==num[end+1]) end--;
                    }
                }
                while(j<num.size()&&num[j]==num[j+1]) j++; 
            }
            while(i<num.size()&&num[i]==num[i+1]) i++;
        }
        return res;
    }
};
