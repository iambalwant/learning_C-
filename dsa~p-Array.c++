#include<iostream>
#include<limits.h>

using namespace std;

// void printArray(int arr[], int size){
    
//     cout<<"Printing the array"<<endl;
//     for(int i = 0; i<size;i++){
//         cout<<arr[i]<<" "<<endl;
//     }

//     cout<<"Printing done"<<endl;

// }

int getMax(int num[], int n){

     int max = INT_MIN;
     
     for(int i=0; i<n; i++){
        if(num[i] > max){
            max = num[i];
        }
     }  

     return max;

}

int getMin(int num[], int n){

     int min = INT_MAX;

     for(int i=0; i<n; i++){
        if(num[i] < min){
            min = num[i];
        }
     }  

     return min;

}

int main(){


// int third[15] ={2,5};
// // printArray(third, 15);   

// Max/min in array
int size;
cout<<"enter size of arrary"<<endl;
cin>>size;

int num[100];

//taking input in array
for(int i=0; i<size; i++){
    cin>> num[i];
}

cout<<"MAx value is "<<getMax(num,size)<<endl;
cout<<"Min value is "<<getMin(num,size)<<endl;



    return 0;
}