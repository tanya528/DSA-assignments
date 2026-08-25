#include<iostream>
#include<vector>
using namespace std;

vector<int> reverse(vector<int>& nums, int i , int j) {
     while(i<j) {
       int temp = nums[i];
       nums[i] = nums[j];
       nums[j] = temp;
       i++;
       j--; 
     }
     // return the whole array
    return nums;
}
vector<int> rotate(vector<int>& nums, int k) {
    // find out what would be the rotatetion value 
    k %= nums.size();

    // 1st step reverse the whole array from i=0 -> end of array nums.size()-1;
    reverse(nums, 0, nums.size()-1);
    // 2nd step reverse only the k-1 elements cz 0 based indexing: 0 -> k-1;
    reverse(nums, 0, k-1);
    // 3rd step reverse the rest of the array k -> nums.size()-1;
    reverse(nums,k, nums.size()-1);
    return nums;
}

int main() {
    vector<int> nums = {1,2,3,4,5,6,7};
    int k = 3;
    // cz rotate fun return a vector so i have to store it in the vector,and loop out the values

    vector<int> ans = rotate(nums, k);
    for(int x: ans) {
        cout << x << " ";
    }
    return 0;
}