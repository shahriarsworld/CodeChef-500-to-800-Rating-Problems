// You are given 
// 3
// 3 numbers 
// A
// ,
// B
// ,
// A,B, and 
// C
// C.

// Determine whether the average of 
// A
// A and 
// B
// B is strictly greater than 
// C
// C or not?

// NOTE: Average of 
// A
// A and 
// B
// B is defined as 
// (
// A
// +
// B
// )
// 2
// 2
// (A+B)
// ​
//  . For example, average of 
// 5
// 5 and 
// 9
// 9 is 
// 7
// 7, average of 
// 5
// 5 and 
// 8
// 8 is 
// 6.5
// 6.5.

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int count,a,b,c;
	
	cin>>count;
	for (int i = 0; i < count; i++) {
	    cin>> a >> b >> c;
	    float avg = (a+b)/2.0;
	    if(avg > c){
	       std::cout << "YES" << std::endl;
	    }else{
	        std::cout << "NO" << std::endl;
	    }
	}

}
