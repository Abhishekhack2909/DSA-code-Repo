#include<bits/stdc++.h>
using namespace std;

//linear search
//bool linearsearch( int matrix[][3], int rows, int cols, int key){
//    for( int i=0; i<rows; i++){
//        for( int j=0; j<cols; j++){
//            if( matrix[i][j]==key){
//                return true;
//            }
//        
//        }
//    }
//    return false;
//}


//max sum of row
//int getmaxsum(int matrix[][3], int rows, int cols){
//    int  maxsum=INT_MIN;
//    for(int i=0; i<rows; i++){
//        int rowsum=0;
//        for( int j=0; j<cols; j++){
//            rowsum +=matrix[i][j];
//        }
//        maxsum= max(maxsum,rowsum );
//    }
//    return maxsum;
//
//}
///Diagonal sum for matrix
 int diagonalsum( int matrix[][3], int rows, int cols){
    int digsum=0;
    for( int i=0; i<rows; i++){
        for( int j=0; j<cols;j++){
            if( i==j){
        //pd=> i=j
                digsum += matrix[i][j];
            }
            else if(j==3-i-1) {
                //sd =>n-i-1
                digsum +=matrix[i][j];
            }

            

            }
            
        }
        return digsum;
    }
    
 



int main(){
    
    int  matrix[3][3]={{56,3,5},{6,7,8},{3,4,2}};
   // int matrix[4][3];
    int rows=3;
    int cols=3;
   // cout<<getmaxsum(matrix, rows, cols)<<endl;
   // cout<<linearsearch(matrix, rows,cols,20)<<endl;
   cout<<diagonalsum(matrix, rows, cols);
    return 0;
   // matrix[2][1]=18;
   // cout<<matrix[2][1]<<endl;
   // return 0;


   // for input
   //for(int i=0;i<rows;i++){
   // for( int j=0; j<cols; j++){
   //     cin>>matrix[i][j];
   //   }
//
   //}
//
   ////for output
   //for( int i =0; i<rows; i++){
   // for( int j=0; j<cols;j++){
   //     cout<<matrix[i][j]<<"    ";
   // }
   //     cout<<endl;
   //}
  //
   //return 0;
//
//
//
}
