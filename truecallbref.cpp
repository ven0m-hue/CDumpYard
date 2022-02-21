#include <iostream>
//#include<string>
#include <bits/stdc++.h>
using namespace std;

void swap(int&, int&);
string reverseWord(string str){
    string rev;
    int n = str.length();
    cout<<"length"<<n;
  //Your code here
  for(int i = 0; i < n; i++)
  {
      rev[i] = str[n-i];
  }
  return rev;
}

void swap(int& a, int& b){

    int temp = a;
    a = b;
    b = temp;
}

int main(){

    int a = 10;
    int b = 20; 
    swap(a,b);
    cout<< "reverse" << reverseWord("reverse")<<endl;
    cout<< "The number after swapping is"<<a << "and" << b;

}
