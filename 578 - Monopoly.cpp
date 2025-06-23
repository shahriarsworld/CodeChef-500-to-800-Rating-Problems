// There are 
// 4
// 4 companies in the markets of Chefland, 
// A
// A, 
// B
// B, 
// C
// C, and 
// D
// D.
// This year,

// Company 
// A
// A made a profit of 
// P
// P lakh rupees,
// Company 
// B
// B made a profit of 
// Q
// Q lakh rupees,
// Company 
// C
// C made a profit of 
// R
// R lakh rupees,
// Company 
// D
// D made a profit of 
// S
// S lakh rupees.
// There is said to be a monopoly in the market if the profit made by one company is strictly greater than the sum of profits made by all other companies.
// Determine if there is a monopoly in the market or not.

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int count,p,q,r,s;
	std::cin >> count;
	for (int i = 0; i < count; i++) {
	    std::cin >> p >> q >> r >> s;
	    if ((p > q+r+s)){
	        std::cout << "Yes" << std::endl;
	    }else if((q > p+r+s)){
	        std::cout << "Yes" << std::endl;
	    }else if((r > p+q+s)){
	        std::cout << "Yes" << std::endl;
	    }else if((s > p+q+r)){
	        std::cout << "Yes" << std::endl;
	    }else{
	        std::cout << "No" << std::endl;
	    }
	    
	}

}
  
