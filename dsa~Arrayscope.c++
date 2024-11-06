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

int main(){

  int arr[3] = {1,2,3};
  update(arr, 3);

   cout<<"Inside the for loop "<<endl;
     for(int i =0; i < 3; i++){
     cout<<arr[i]<<endl;
  }

 
return 0;
}