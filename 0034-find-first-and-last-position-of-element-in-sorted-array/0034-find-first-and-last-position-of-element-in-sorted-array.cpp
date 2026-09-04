class Solution {
public:
    vector<int> searchRange(vector<int>& arr, int target) {
        int n = arr.size();

        int left =-1;
        int l=0;int r = n-1;
        while(l<=r){
            int mid = l + (r-l) / 2;
            if(arr[mid]==target){
                left = mid;
                r =mid-1;
            }
            else if(arr[mid]>target)
                r = mid-1;
            
            else
                l = mid+1;
        }

        int right =-1;
        l=0, r = n-1;
        while(l<=r){
            int mid = l + (r-l) / 2;
            if(arr[mid]==target){
                right = mid;
                l =mid+1;
            }
            else if(arr[mid]>target)
                r = mid-1;
            
            else
                l = mid+1;
        }

        return {left,right};

    }
};