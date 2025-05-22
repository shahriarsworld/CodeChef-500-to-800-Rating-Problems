// There are 
// N
// N children and Chef wants to give them 
// 1
// 1 candy each. Chef already has 
// X
// X candies with him. To buy the rest, he visits a candy shop. In the shop, packets containing exactly 
// 4
// 4 candies are available.

// Determine the minimum number of candy packets Chef must buy so that he is able to give 
// 1
// 1 candy to each of the 
// N
// N children.

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int count, n, x;
	std::cin >> count;
	for (int i = 0; i < count; i++) {
	    std::cin >> n >> x;
	    int candyNeeded = n - x;
	    if (candyNeeded > 0){
	        std::cout << (candyNeeded + 3) / 4 << std::endl;
	    }
	    else{
	        std::cout << 0 << std::endl;
	    }
	}

}

