#include<iostream>
#include<vector>
using namespace std;
// antidiagonal
// void antidiagonal(vector<vector<int>>matrix , int row, int col){
//     for(int i=0; i<row;i++){
//         for(int j=0;j<col;j++){
//         // * * * 45  
//         // * * 6  *
//         // * 8  * *
//         // 10  * * *
//             if(i+j==row-1){
//                 cout << matrix[i][j] << "  ";
//             }
//             else{
//                 cout << "*" << " ";
//             }
//         }
//             cout << endl;
        
    
//     }
// }

// void diagonal(vector<vector<int>>matrix , int row, int col){
//     for(int i=0; i<row;i++){
//         for(int j=0;j<col;j++){
//             1  * * *
//             * 5  * *
//             * * 9  *
//             * * * 56
//             if(i==j){
//                 cout << matrix[j][i] << "  ";
//             }
//             else{
//                 cout << "*" << " ";
//             }
//         }
//         cout << endl;
//     }
// }
int main(){
vector<vector<int>> matrix={
    {1, 2, 3,45},
    {4, 5, 6,78},
    {7, 8, 9,98},
    {10, 11, 12,56}
};

int rows = matrix.size();
int cols=matrix[0].size();

// for(int i=0;i<rows;i++){
//     for(int j=0;j<cols;j++){
//         cout<<matrix[i][j]<<" ";
//     }
//     cout<<endl;
// }
diagonal(matrix ,rows,cols);
//antidiagonal(matrix ,rows,cols);
 return 0;   
}
