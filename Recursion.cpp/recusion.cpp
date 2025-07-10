//#include<iostream>
//using namespace std;
//int factorial( int n ){
//    //base case
//    if( n==0)
//    return 1; 
//    return n* factorial (n-1);
//}
//    int main(){ 
//        int n ;
//        cout<<"Enter the value of number for calcuating the fcatorial"<<endl;
//        cin>> n;
//        int ans= factorial(n);
//        cout<<ans<<endl;
//        return 0;
//    }
//  
// 
//#include<iostream>
//using namespace std;
//void numsprint( int n){
//    if( n ==1 ){
//        cout<< "1\n";
//        return ;
//    }
//    cout<<n<< " ";
//    numsprint(n-1);          
//}
//int main(){
//    numsprint(4);
//}


// for factorial of the number 

//#include<iostream>
//using namespace std;
//int factorial(int n ){
//    if(n==0){
//        return 1;
//    }
//    return n*factorial(n-1);
//}
//int main(){
//    cout<<factorial(6);
//
//    return 0;
//}
//




// code for sum of n natural number
//#include<iostream>
//using namespace std;
//int  sumofnum( int n){
//    if(n==0){
//        return 0;
//    }
//    return n+sumofnum(n-1);
//}
//int main(){
//    cout<<sumofnum(678);
//    return 0;
//}

//fabonacci sequence finding
//#include<iostream>
//using namespace std;  
//int fabnum(int n){
//    if(n==0 || n==1){
//        return n;
//
//    }
//    return fabnum(n-1)+fabnum(n-2);
//
//}
//int main(){
//    cout<<fabnum(3);
//    return 0;
//}


//#include<iostream>
//#include<vector>
//using namespace std;
//
// 
//bool isSortedArray(vector<int>arr, int n ){
//    if( n==0 || n==1){
//        return true;
//
//    }
//    return arr[n-1]>= arr[n-2]&& isSortedArray(arr, n-1);
//}
// int main(){
//    vector<int>arr= {2,3,4,9,6};
//    cout<<isSortedArray(arr, arr.size())<<endl;
//    return 0;
//    
//}



//print all subsets by recursion and backtracking steps
#include<iostream>
#include<vector>
using namespace std;

void printsubset(vector<int>arr, vector<int>ans, int i){
    //base case
    if( i== arr.size()){
        for(int val:ans){
            cout<<val<<" ";
        }
        cout<<endl;
        return;

    }
    //inclusion step
    ans.push_back(arr[i]);
    printsubset( arr, ans, i+1);


    //backtracking set
    ans.pop_back();

    //exclusion step 
    printsubset(arr, ans, i+1);      
}
 
int main(){
    vector<int>arr= {8, 87 ,1,2,3};
    vector<int>ans;
    printsubset( arr, ans,0);
    return 0;
    

}









 



