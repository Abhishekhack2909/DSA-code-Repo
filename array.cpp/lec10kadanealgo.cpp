#include<iostream>
using namespace std;

int main(){
    // sub array sum
    int n= 5;
int arr[5]={1,2,3,5,6};
for(int st=0;st<n;st++){
    for(int end=st;end<n;end++  ){
        for(int i= st; i<=end; i++){
            cout<<arr[i];

        }
        cout<<" ";
    }
    cout<<endl;
}
return 0;
    
    
        
     }


