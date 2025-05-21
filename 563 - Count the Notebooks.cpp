// You know that 
// 1
// 1 kg of pulp can be used to make 
// 1000
// 1000 pages and 
// 1
// 1 notebook consists of 
// 100
// 100 pages.

// Suppose a notebook factory receives 
// N
// N kg of pulp, how many notebooks can be made from that?

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int count, n;
	std::cin >> count;
	for (int i = 0; i < count; i++) {
	    std::cin >> n;
	    std::cout << n*10 << std::endl;
	}

}
