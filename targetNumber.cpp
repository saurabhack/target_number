#include<iostream>
#include<vector>
using namespace std;
int findTarget(vector<int> nums,int target){
    vector<int> arr;
    for(int i=0;i<nums.size();i++){
        for(int j=i+1;j<nums.size();j++){
            if(nums[j]==target-nums[i])
            {
                arr.push_back(i);
                arr.push_back(j);
            }
        }
    }
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<endl;
    }

    return 0;
}
int main(){
    vector<int> nums({1,2,3,4,5});
    int target=6;
    findTarget(nums,target);
    
    return 0;

}