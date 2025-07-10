//#include<iostream>
//#include<vector>
//using namespace std;
// vector<int>twosum( int nums[], int size, int target){
//    for( int i=0; i<size; i++){
//        for( int j=0; j<size; j++){
//            if( nums[i]+ nums[j]== target){
//                return {i, j};
//            }
//        }
//    }
//    return {};
// }

//int main(){
//     
//    vector<int> nums={1,24,45,56};
//    int target= 69;
//    vactor<int> result=twosum(nums, target);
//    return 0;
//    
//}
//
//
#include<iostream>
#include<vector>
using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {
    int n = nums.size();
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (nums[i] + nums[j] == target) {
                return {i, j};  
            }
        }
    }
    return {-1,-1}; 
}

int main() {
    vector<int> nums = {2, 7, 11, 15};
    int target = 9;
    
    vector<int> result = twoSum(nums, target);
    

    return 0;
}
