// Each pizza consists of 
// 4
// 4 slices. There are 
// N
// N friends and each friend needs exactly 
// X
// X slices.

// Find the minimum number of pizzas they should order to satisfy their appetite.

#include <bits/stdc++.h>
#include <cmath>
using namespace std;

int main() {
	// your code goes here
	int count; 
	float n, x;
	std::cin >> count;
	for (int i = 0; i < count; i++) {
	    std::cin >> n >> x;
	    float distribution = (n*x)/4;
	    std::cout << ceil(distribution) << std::endl;
	}

}
