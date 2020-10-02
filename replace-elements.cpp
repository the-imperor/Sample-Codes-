//Given an array arr, replace every element in that array with the greatest element among the elements to its right, and replace the last element with -1.
//Input: arr = [17,18,5,4,6,1] Output: [18,6,6,6,1,-1]

//Loop through the array starting from the end. Keep the maximum value seen so far.
//using another array
class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int max=INT_MIN,n=arr.size();
        vector<int> ans(n);
        ans[n-1]=-1;
        for(int i=n-1;i>0;i--){
            if(arr[i]>max)
                max=arr[i];
            ans[i-1]=max;
        }
        return ans;
    }
};

//same concept doing inplace
class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int maxm=INT_MIN,n=arr.size(),temp;
        for(int i=n-1;i>=0;i--){
            temp=arr[i];
            if(i==n-1){
                arr[i]=-1;
            }
            else{
                arr[i]=maxm;
            }
            maxm=max(maxm,temp);
        }
        return arr;
    }
};