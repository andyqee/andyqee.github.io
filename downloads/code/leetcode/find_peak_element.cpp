class Solution {
public:
    int findPeakElement(const vector<int> &num) {
    	int count = num.size();
    	if (count == 1)
    	{
    		return 0;
    	} else if (count > 1) {
    		for (int i = 0; i < count; ++i){
    			if (i >= 1 && i < count - 1 )
    			{
    				if (num[i] > num[i-1] && num[i] > num[i+1])
    				{
    					return i;
    				}
    			}
    			if (i == 0)
    			{
    				if (num[0] > num[1])
    				{
    					return 0;
    				}
    			}
        		if (i == count - 1)
 		       	{
        			if (num[i] > num[i-1])
        			{
        				return count - 1;
        			}
       		 	}
     	   }
    	}
    }
};