#include<iostream>

using namespace std;

void update(int arr[], int n){

    cout<<"Inside the function"<<endl;
// no memory base is givin only address is given to this function by main arr
// and value also change on main memory
//it's not updaing in copy
    arr[0] = 120;

     for(int i =0; i < 3; i++){
     cout<<arr[i]<<endl;
  }

}

bool linerSearch(int arr[], int size, int key){

 for(int i = 0; i<size; i++){
     if(arr[i] == key){
        return 1;
     }
 }
  return 0;
}

void reverse(int arr[], int n){

  int start = 0;
  int end = n-1;

  while (start<=end){
    swap(arr[start], arr[end]);
    start++;
    end--;
  }
  
}

void swap(int arr[], int n){

  for(int i = 0;i<n;i+=2){
    if(i+1 < n){
      swap(arr[i], arr[i+1]);
    }
  }

}

void unique(int arr[], int n){
 
    int ans =0;
    for(int i=0;i< n; i++){
        ans = ans^arr[i];
    }
 cout<<ans<<endl;
}

void printArray(int arr[], int n){

  for(int i = 0; i < n; i++){
     cout<<arr[i]<<" ";
  }
  cout<<endl;

}

int main(){

//   int arr[3] = {1,2,3};
//   update(arr, 3);

//    cout<<"Inside the for loop "<<endl;
//      for(int i =0; i < 3; i++){
//      cout<<arr[i]<<endl;
//   }

//liner search


// int arr[10] = {3,6,1,5,-3,8,4,23,44,36};
// //whether 1 is presnet or not ??

// cout<<"enter the key value:";
// int key;
// cin>>key;

// bool found = linerSearch(arr, 10, key);

// if(found){
//     cout<<"Yess Key "<<key<<" is present"<<endl;
// }else{
//     cout<<"No Key "<<key<<" is present"<<endl;
// }


//reverse array

// int arr[6] = {1,2,4,6,7,8};
// int brr[5] = {3,5,2,3,7};

// reverse(arr, 6);
// reverse(brr, 5);

// printArray(arr,6); 
// printArray(brr,5); 

// return 0;


//swap problem

// int even[8] = {1,2,3,4,5,6,7,8};
// int odd[7] = {1,2,3,4,5,6,7};

//  swap(even, 8);
//  printArray(even, 8);

//  cout<<endl;

//  swap(odd, 7);
//  printArray(odd, 7);

//findig unquie no.

int arr[8] = {1,2,3,3,2,1,5};

unique(arr, 7);

}