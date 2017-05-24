/*
Given a positive integer denoting , do the following:

    If 1 <= n <=9 , then print the lowercase English word corresponding to the number
    (e.g., one for , two for , etc.).

Input Format

A single integer denoting .

Constraints

Output Format

If , then print the lowercase English word corresponding to the number
(e.g., one for , two for , etc.); otherwise, print Greater than 9 instead.



*/




#include <iostream>
#include <cstdio>

using namespace std;


int main(){
const char * number_names[9] = {"one","two","three","four","five","six","seven","eight","nine"};


int n;
cin >> n;

if ( (n >=1) and (n <=9)){
  cout << number_names[n-1];
}
else if( n > 9){
  cout << "Greater than 9" << endl;
}


return 0;
}
