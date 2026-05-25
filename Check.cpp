#include <iostream>
using namespace  std;

// int main(){
//     int arr[] = {1,2,3,4,5,6,7,8,9,0};
//     int *normal_ptr = arr;
//     cout<<"normal ptr is:"<<normal_ptr<<endl;
//     cout<<"Testing testing "<<(++normal_ptr)[4]<<endl;
//     int (*ptr)[3] = (int (*)[3])arr;
//     cout<<arr[9]<<" check "<<*ptr[9]<<endl;
//     cout<<(*++ptr)[3]<<endl;
//     cout<<"arr is:"<<arr<<" and the ptr is "<<ptr<<endl;
//     cout<<(ptr)[2]<<endl;
//     cout<<ptr[2][3]<<" is same as "<<*(*(ptr+2)+3)<<endl;
    
//     return 0;
// }

void print(int (&arr)[5]) {
    cout<<(arr)<<endl;
    cout<<"The size is: "<<sizeof(arr)/sizeof(arr[0])<<endl;
    for (int x : arr)
        cout << x << ' ';
}

int main(){
    int arr[] = {1,2,3,4,5};
    cout<<(arr)<<endl;
    print(arr); 
    return 0;
}

// int main(){
//     int arr[] = {1,2,3,4,5,6,7,8,9,0};
//     int (*ptr)[3] = (int(*)[3])arr;
//     cout<<(*++ptr)[3];
//     return 0;
// }
