#include <iostream>
using namespace std;

void print_array(int *arr, int n);

void bubble_sort(int *arr, int n){
    for(int i=0; i<n-1; i++){
        for(int j=0; j<n-i-1; j++){
            if (arr[j]>arr[j+1]){
                swap(arr[j], arr[j+1]);
            }
        }
    }
    print_array(arr,n);
}
void selection_sort(int *arr, int n){
    for(int i=0; i<n-1; i++){
        int min_index =i;
        for(int j=min_index;j<n;j++){
            if (arr[j]<arr[min_index]){
                swap(arr[j], arr[min_index]);
            }
        }
    }
    print_array(arr, n);
}

void insertion_sort(int *arr, int n){
    for(int i=1; i<n; i++){
        // int curnt_ele_index = i;
        // for(int j=i-1; j>=0; j--){
        //     if(arr[curnt_ele_index] < arr[j]){
        //         swap(arr[curnt_ele_index], arr[j]);
        //         curnt_ele_index--;
        //     }else break;
        // }
        for(int j=i;j>0 && arr[j] < arr[j-1]; j--){
            swap(arr[j],arr[j-1]);
        }
    }
    print_array(arr,n);
}

void print_array(int *arr, int n){
    for(int i=0; i<n; i++){
        if(i==n-1){
            cout<<arr[i];
        }else{
            cout<<arr[i]<<",";
        }
    }
    cout<<endl;
}

int main(int count, char const *array_for_const_argument_pointers[]){
    int arr[] = {3,5,7,1,8,6,4,2};
    int size = sizeof(arr)/sizeof(arr[0]);
    // bubble_sort(arr,size);
    // selection_sort(arr, size);
    insertion_sort(arr,size);
    return 0;
}