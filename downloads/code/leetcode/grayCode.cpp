class Solution {
public:
    vector<int> grayCode(int n) {
        std::vector<int> result;
            result.push_back(0);
            for (int i = 0; i < n; ++i)
            {
                int adder = 1 << i;
                int len = result.size();
                for (int i = len -1 ; i >= 0; --i)
                {
                    int element = result[i] + adder;
                    result.push_back(element);
                }
            }
        return result;
    }
};
