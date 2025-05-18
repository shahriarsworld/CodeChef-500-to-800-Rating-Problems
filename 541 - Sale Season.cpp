// It's the sale season again and Chef bought items worth a total of 
// X
// X rupees. The sale season offer is as follows:

// if 
// X
// ≤
// 100
// X≤100, no discount.
// if 
// 100
// <
// X
// ≤
// 1000
// 100<X≤1000, discount is 
// 25
// 25 rupees.
// if 
// 1000
// <
// X
// ≤
// 5000
// 1000<X≤5000, discount is 
// 100
// 100 rupees.
// if 
// X
// >
// 5000
// X>5000, discount is 
// 500
// 500 rupees.
// Find the final amount Chef needs to pay for his shopping.

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int count,x;
	std::cin >> count;
	for (int i = 0; i < count; i++) {
	    std::cin >> x;
	    if(x>100 && x<=1000){
	        std::cout << x - 25 << std::endl;
	    }else if(x>1000 && x<=5000){
	        std::cout << x - 100  << std::endl;
	    }else if(x>5000){
	        std::cout << x - 500 << std::endl;
	    }else{
	        std::cout << x << std::endl;
	    }
	}

}
