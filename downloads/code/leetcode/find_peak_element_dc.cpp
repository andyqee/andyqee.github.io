class Solution {
public:
    int findPeakElement(const vector<int> &num) {
int n = num.size();
    int low = 0;
    int high = n - 1;
    int mid = 0;

    while ( low < high ) {
        mid = low + ( high - low ) / 2;
        if ( ( mid == 0 || num[mid] > num[mid-1] ) && 
                ( mid == n-1 ||  num[mid] > num[mid+1] )  ){
            return mid;
        }

        if (mid >0 && num[mid-1] > num[mid]){
            high = mid - 1;
        }else{
            low = mid + 1;
        }
    }

    return low;
    }
};