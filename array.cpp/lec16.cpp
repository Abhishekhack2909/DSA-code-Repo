#include<iostream>
#include<vector>
using namespace std; 
int main(){
    int arr[]= {10,20,40,50};
    int *ptr= arr;
    cout<<*(ptr+1)<<endl;
    cout<<*(ptr+3)<<endl;
    ptr++;
    cout<<*(ptr)<<endl;



    
   

return 0;
}

