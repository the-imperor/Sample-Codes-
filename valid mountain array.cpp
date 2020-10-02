//Given an array A of integers, return true if and only if it is a valid mountain array. Recall that A is a mountain array if and only if:
//A.length >= 3
//There exists some i with 0 < i < A.length - 1 such that:
//A[0] < A[1] < ... A[i-1] < A[i]
//A[i] > A[i+1] > ... > A[A.length - 1]

class Solution {
public:
    bool validMountainArray(vector<int>& A) {
        int flag=1;
        if(A.size()<3)
            return false;
        for(int i=0;i<A.size()-1;i++){
            if(A[i+1]>A[i]){
                if(flag!=1){
                    return false;
                }
            }
            else if(A[i+1]<A[i]){
                if(i==0){
                    return false;
                }
                if(flag==1){
                    flag=-1;
                }
            }
            else{
                return false;
            }
        }
        if(flag==1)
            return false;
        return true;
    }
};