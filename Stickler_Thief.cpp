/***************************************************Stickler Thief*********************************************/
//link of the problem: https://practice.geeksforgeeks.org/problems/stickler-theif-1587115621/1
class Solution
{
    public:
    //Function to find the maximum money the thief can get.
     public:
    //Function to find the maximum money the thief can get.
    int FindMaxSum(int arr[], int n){
	    if(n==1) return arr[0];
	    arr[1] = max(arr[0], arr[1]);
	    for(int i = 2; i<n; i++)
	       arr[i] = max(arr[i-1], arr[i]+arr[i-2]);
	    
	    return arr[n-1];
    }
};