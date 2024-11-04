#include<iostream>

using namespace std;

//switch 

int main(){
   
   int a, b ;

  cout<<"Enter the value of a :";
  cin>>a;
  cout<<"Enter the value of b :";
  cin>>b;

  char op;
  cout<<"enter the operator :";
  cin>>op;

  switch (op)
  {
  case '+':
      cout<<(a+b)<<endl;
    break;
  case '-':
  cout<<(a-b)<<endl;
    break;
  case '*':
  cout<<(a*b)<<endl;
    break;
  case '/':
  cout<<(a/b)<<endl;
    break;
  
  default:
  cout<<"Enter valide inputs";
    break;
  }

    return 0;
} 