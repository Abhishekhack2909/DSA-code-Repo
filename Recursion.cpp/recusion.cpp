// #include<iostream>
// using namespace std;
// int factorial( int n ){
//     //base case
//     if( n==0)
//     return 1;
//     return n* factorial (n-1);
// }
//     int main(){
//         int n ;
//         cout<<"Enter the value of number for calcuating the fcatorial"<<endl;
//         cin>> n;
//         int ans= factorial(n);
//         cout<<ans<<endl;
//         return 0;
//     }
//
//
// #include<iostream>
// using namespace std;
// void numsprint( int n){
//     if( n ==1 ){
//         cout<< "1\n";
//         return ;
//     }
//     cout<<n<< " ";
//     numsprint(n-1);
// }
// int main(){
//     numsprint(4);
// }

// for factorial of the number

// #include<iostream>
// using namespace std;
// int factorial(int n ){
//     if(n==0){
//         return 1;
//     }
//     return n*factorial(n-1);
// }
// int main(){
//     cout<<factorial(6);
//
//     return 0;
// }
//

// code for sum of n natural number
// #include<iostream>
// using namespace std;
// int  sumofnum( int n){
//    if(n==0){
//        return 0;
//    }
//    return n+sumofnum(n-1);
//}
// int main(){
//    cout<<sumofnum(678);
//    return 0;
//}

// fabonacci sequence finding
// #include<iostream>
// using namespace std;
// int fabnum(int n){
//     if(n==0 || n==1){
//         return n;
//
//     }
//     return fabnum(n-1)+fabnum(n-2);
//
// }
// int main(){
//     cout<<fabnum(3);
//     return 0;
// }

// #include<iostream>
// #include<vector>
// using namespace std;
//
//
// bool isSortedArray(vector<int>arr, int n ){
//     if( n==0 || n==1){
//         return true;
//
//     }
//     return arr[n-1]>= arr[n-2]&& isSortedArray(arr, n-1);
// }
//  int main(){
//     vector<int>arr= {2,3,4,9,6};
//     cout<<isSortedArray(arr, arr.size())<<endl;
//     return 0;
//
// }

// print all subsets by recursion and backtracking steps
// #include<iostream>
// #include<vector>
// using namespace std;
//
// void printsubset(vector<int>arr, vector<int>ans, int i){
//     //base case
//     if( i== arr.size()){
//         for(int val:ans){
//             cout<<val<<" ";
//         }
//         cout<<endl;
//         return;
//
//     }
//     //inclusion step
//     ans.push_back(arr[i]);
//     printsubset( arr, ans, i+1);
//
//
//     //backtracking set
//     ans.pop_back();
//
//     //exclusion step
//     printsubset(arr, ans, i+1);
// }
//
// int main(){
//     vector<int>arr= {8, 87 ,1,2,3};
//     vector<int>ans;
//     printsubset( arr, ans,0);
//     return 0;
//
//
// }
//

// binary search code with recursion
// #include <iostream>
// #include <vector>
// using namespace std;
//
// int binarysearch(vector<int> v, int st, int end, int key)
//{
//    // base case
//    if (st > end)
//    {
//        return -1;
//    }
//
//    int mid = (st + end) / 2;
//    if (v[mid] == key)
//    {
//        return mid;
//    }
//    if (v[mid] < key)
//    {
//        return binarysearch(v, mid + 1, end, key);
//    }
//    else
//    {
//        return binarysearch(v, st, mid - 1, key);
//    }
//}
//
// int main()
//{
//    vector<int> v{23, 34, 45, 56, 67, 89};
//    int key = 34;
//    int st = 0;
//    int end = v.size();
//
//    int ans = binarysearch(v, st, end, key);
//    cout << "Answer is " << ans;
//    return 0;
//}

// include and exclude concept in recursion , very imp concept
// we need to inlclude and exlcue the element one by one to get all the possible
#include <iostream>
#include <vector>
using namespace std;

void printsubs(string str, string output, int i)
{
    if (i >= str.size())
    {
        cout << output << endl;
        return;
    }
    // for exclude
    printsubs(str, output, i + 1);


    // for include

    output = output + str[i];
    printsubs(str, output, i + 1);
}

int main()
{
    string str = "abc";
    string output = "";
    int i = 0; // for itertion
    printsubs(str, output, i);
    return 0;
}


// recusion two most imp pattern , 
// include and exclude pattern 
//and element ->for loop  than cal-> coin change problem  based on plain recusiion , works on small test case , because , on large testcase produce TLE(time limit exceed)
