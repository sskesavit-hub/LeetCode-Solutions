class Solution {
public:
    double findMedianSortedArrays(vector<int>& n1, vector<int>& n2) {
        vector<int>m1(n1.size() + n2.size());
        merge(n1.begin(),n1.end(),n2.begin(),n2.end(),m1.begin());
        sort(m1.begin(),m1.end());
        int n=m1.size();

        if(n%2!=0)
            return m1[n/2];
        return (m1[(n/2)-1] + m1[n/2])/2.0;
        
    }
};