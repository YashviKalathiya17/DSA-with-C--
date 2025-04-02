#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>
using namespace std;


    int kadanesalgo(vector <int> arr){
    int max=INT_MIN;
    int currsum=0;
    for(int val:arr){
        currsum += val;
        if(currsum > max){
            max = currsum;
        }
        if(currsum<0){
            currsum = 0;
        }
    }
        return max;
}



int main(){
    vector<int> arr = {3,3,-20,20,50};
    kadanesalgo(arr);

    return 0;
}