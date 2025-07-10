
//    int a=4, b=8;
//    cout<<(a & b)<<endl;
//    cout<<(a | b)<<endl;
//
//  cout<< (4 << 1) <<endl;

//}

//int marks[5]= {55,44,66,23,44};
//marks[0]=23;
//
//cout<<marks[0]<<endl;
//cout<<marks[1]<<endl;
//cout<<marks[2]<<endl;
//cout<<marks[3]<<endl;


//cout<<sizeof(marks)/sizeof(int)<<endl;
#include<iostream>
using namespace std;

//int main(){
//        //array in loop
//int size =5;
//int marks[size];
//for(int i=0; i<size; i++) {
//        cin >>marks[i];
//        cout<<marks[i]<<endl;
//}
//return 0;      

//}
//

int main(){
    int nums[]={34,45,20,76};
    
    int size=4;
    int smallest = INT_MAX;

    for(int i=0; i<size; i++){
        if(nums[i]< smallest){
            smallest = nums[i];

            
        }
        cout<<"smallest is ="<<smallest<<endl;
        return 0;
    }


}







      



   