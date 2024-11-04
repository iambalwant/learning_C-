#include<bits/stdc++.h>
using namespace std;

void pattern1(int n){
// ****
// ****
// ****
// ****
for(int i=0; i<n; i++){
     for(int j=0; j<n; j++){
        cout<<"*";
     }
     cout<<endl;
}
}
void pattern2(int n){
// *
// **
// ***
// ****
for(int i=0; i<n; i++){
   for(int j=0; j<=i;j++){
    cout<<"*";
   }
     cout<<endl;
}
}
void pattern3(int n){
// 1
// 12
// 123
// 1234
for(int i=1; i<n; i++){
   for(int j=1; j<=i;j++){
    cout<<j;
   }
     cout<<endl;
}
}
void pattern4(int n){
// 1
// 22
// 333
// 4444
// 55555
for(int i=1; i<n; i++){
   for(int j=1; j<=i;j++){
    cout<<i;
   }
     cout<<endl;
}
}
void pattern5(int n){
// *****
// ****
// ***
// **
// *
for(int i=1; i<=n; i++){
   for(int j=0; j<n-i+1;j++){
    cout<<"*";
   }
     cout<<endl;
}
}
void pattern6(int n){
// 12345
// 1234
// 123
// 12
// 1
for(int i=1; i<=n; i++){
   for(int j=1; j<=n-i+1;j++){
    cout<<j;
   }
     cout<<endl;
}
}
void pattern7(int n){
//     *
//    ***
//   *****
//  *******
// *********
for(int i=0; i<n; i++){
   //space
 for(int j=0; j<n-i-1;j++){
    cout<<" ";
 }
   //print
 for(int j=0; j<2*i+1;j++){
    cout<<"*";
 }
   //space
 for(int j=0; j<n-i-1;j++){
    cout<<" ";
 }
cout<<endl;
}
}
void pattern8(int n){
// *********
//  *******
//   *****
//    ***
//     *   
for(int i=0; i<n; i++){
   //space
 for(int j=0; j<i;j++){
    cout<<" ";
 }
   //print
 for(int j=0; j<(2*n-(2*i+1));j++){
    cout<<"*";
 }
   //space
 for(int j=0; j<i;j++){
    cout<<" ";
 }
cout<<endl;
}
}
void pattern9(int n){
    //  check in int section
}
void pattern10(int n){
// *
// **
// ***
// ****
// *****
// ****
// ***
// **
// *
     for(int i =0;i<=2*n-1;i++){
        int star = i;
          if(i>n) star =2*n-i;
        for(int j=1;j<=star;j++){
            cout<<"*";
        }
        cout<<endl;
     }
}
void pattern11(int n){
// 1
// 10
// 101
// 1010
// 10101
// 101010
  for(int i=0;i<=n;i++){
      for(int j=0; j<=i;j++){
         if(j%2 == 0){
            cout<<"1";
         }else{
            cout<<"0";
         }
      }
      cout<<endl;
  }

}
void pattern12(int n){
   int space = 2*(n-1);
   for(int i=1;i<=n;i++){
      // number
       for(int j=1;j<=i;j++){
         cout<<j;
       }
      // space 
       for(int j =1; j<=space;j++){
         cout<<" ";
       }
      // number 
       for(int j=i;j>=1;j--){
         cout<<j;
       }
       cout<<endl;
       space -= 2;
   }
}
void pattern13(int n){

// 1
// 2 3
// 4 5 6
// 7 8 9 10
// 11 12 13 14 15

   int num = 1;
   for(int i=1;i<=n;i++){
       for(int j=1;j<=i;j++){
         cout<<num<<" ";
         num += 1;
       }
       cout<<endl;
   }
}
void pattern14(int n){
// A
// AB
// ABC
// ABCD
// ABCDE
// ABCDEF
  for(int i=0;i<=n;i++){
    for(char ch = 'A'; ch <= 'A' + i; ch++){
      cout<<ch;
    }
    cout<<endl;
  }
}
void pattern15(int n){
// ABCDE
// ABCD
// ABC
// AB
// A
   for(int i = 0;i<n;i++){
      for(char ch = 'A';ch <= 'A'+(n-i-1);ch++){
         cout<<ch;
      }
      cout<<endl;
   }
}
void pattern16(int n){
// A
// BB
// CCC
// DDDD
// EEEEE
for(int i =0; i<=n;i++){
    char ch = 'A'+i;
    for(int j =0;j<=i;j++){
      cout<<ch;
    }
    cout<<endl;
}

}
void pattern17(int n){

//     A
//    ABA
//   ABCBA
//  ABCDCBA
// ABCDEDCBA

for(int i=0; i<n; i++){
   //space
 for(int j=0; j<n-i-1;j++){
    cout<<" ";
 }
   //print
  char ch ='A';
  int breakpoint = (2*i-1)/2;
  for(int j =0;j<=2*i;j++){
   cout<<ch;
   if(j<=breakpoint)ch++;
   else ch--;
  }
   //space
 for(int j=0; j<n-i-1;j++){
    cout<<" ";
 }
cout<<endl;
}
}
void pattern18(int n){
// E
// D E
// C D E
// B C D E
// A B C D E
   for(int i =0;i<n;i++){
            for(char ch = 'E'-i;ch <= 'E';ch++){
               cout<<ch<<" ";
            }   
      cout<<endl;
           }
   }
void pattern19(int n){

// ************
// *****  *****
// ****    ****
// ***      ***
// **        **
// *          *
// *          *
// **        **
// ***      ***
// ****    ****
// *****  *****
// ************

int iniS = 0;

for(int i = 0;i<=n;i++){
   //star
     for(int j = 0;j<=n-i;j++){
      cout<<"*";
     }
   //space
     for(int j=0;j<iniS;j++){
      cout<<" ";
     }
   //star
     for(int j = 0;j<=n-i;j++){
      cout<<"*";
     }
   cout<<endl;
   iniS += 2;
}
iniS = 2*n-2;
 for(int i =0;i<=n;i++){
   //star
    for(int j=0;j<=i;j++){
      cout<<"*";
    }
   //space
   for(int j =0;j<iniS;j++){
      cout<<" ";
   }
   //star
   for(int j=0;j<=i;j++){
      cout<<"*";
    }
    cout<<endl;
    iniS -= 2;
 }

}
void pattern20(int n){

// *        *
// **      **
// ***    ***
// ****  ****
// **********
// ****  ****
// ***    ***
// **      **
// *        *

   int space = 2*n-2;
 for(int i=1;i<=2*n-1;i++){
   int star =i;
   if(i>n) star = 2*n-i;
    //stars
   for(int j =1;j<= star;j++){
      cout<<"*";
   }
    //spaces
   for(int j =1;j<=space;j++){
      cout<<" ";
   }
    //stars
   for(int j =1;j<= star;j++){
      cout<<"*";
   }
   cout<<endl;
   if(i< n) space -=2;
   else space +=2;
 }

}
void pattern21(int n){
   for(int i =0;i<n;i++){
      for(int j=0;j<n;j++){
         if(i == 0 || j==0 |i == n-1 ||j == n-1){
            cout<<"*";
         }
         else cout<<" ";
      }
      cout<<endl;
   }
}
void pattern22(int n){
// 555555555
// 544444445
// 543333345
// 543222345
// 543212345
// 543222345
// 543333345
// 544444445
// 555555555
//  we have to find min distance from to neares boundary 
   for(int i =0;i<2*n-1;i++){
      for(int j =0; j<2*n-1;j++){
         int top = i;
         int left = j;
         int right = (2*n - 2)-j;
         int bottom = (2*n - 2) - i;
         cout<< (n - min(min(top,bottom), min(left,right)));
      }
      cout<<endl;
   }
}


int main(){
 
 int n;
 cin>>n;
//  for pattern 9 --->
//  pattern7(n);
//  pattern8(n);
pattern22(n);

  
return 0;
}