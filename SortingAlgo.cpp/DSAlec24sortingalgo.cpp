//bubble sort
//#include<iostream> 
//using namespace std;
// 
//
// void bubblesort( int arr[], int n){
// for( int i=0; i<n-1; i++ ){
//    for(int j=0; j<n-i-1; j++){
//        if( arr[j] >arr[j+1] ){
//        
//        swap(  arr[j],arr[j+1]);
//        }
//    }
//
// }
//
// }
// void printarray(int arr[],int n){
//    for( int i=0; i<n; i++){
//        cout<<arr[i]<<" ";
//
//    }
//    cout<<endl;
// }
//
// int main(){
//    int n=10;
//    int arr[]={2,7,3,6,5,35,9,8,87,10};
//    bubblesort( arr,n);
//    printarray( arr,n );
//    return 0; 
// }


//selection sort
#include<iostream>
using  namespace std;

void selectionsort( int arr[], int n){
   for(int i=0; i< n-1; i++){
      int smallestindex=i;
      for( int j=i+1; j<n; j++){
         if(arr[j]< arr[smallestindex]){
            smallestindex= j;

         }
      }
      swap( arr[i], arr[smallestindex]);

   }
}

void printarray( int arr[], int n ){
   for( int i=0; i<n; i++){
      cout<<arr[i]<<" ";

   }
   cout<<endl;
}

int main(){
    int n=5;
    int arr[]={4,1,5,2,3};
    selectionsort( arr, n);
    printarray(arr, n);

    return 0;


}








 
 

 
