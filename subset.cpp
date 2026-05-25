#include <iostream>
#include <string>
using namespace std;

// int main(int argc, char const *argv[]){
//     int arr[] = {1,-2,3,-4,5,-1,2,3};
//     int n = sizeof(arr)/sizeof(arr[0]);
//     int result = INT_MIN;
//     int curnt_sum = 0;
//     for(int i=0; i<n; i++){
//         curnt_sum += arr[i];
//         result = max(result,curnt_sum);
//         if (curnt_sum < 0){
//             curnt_sum = 0;
//         }
//     }
//     cout<<result<<endl;
//     return 0;
// }

int main(){
    int arr[] = {7,1,5,3,6,4};
    int curnt_buy = arr[0]; //or take INT+MAX
    int profit = 0;
    for(int i=1; i<sizeof(arr)/sizeof(arr[0]);i++){
        if(arr[i]>curnt_buy){
            int curnt_profit = arr[i] - curnt_buy;
            cout<<curnt_profit;
            if (curnt_profit > profit){
                profit = curnt_profit;
            }
        }else{
            curnt_buy = arr[i];
        }
    }
    cout<<endl;
    cout<<profit;
    return 0;
}