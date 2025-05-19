// A problem setter is called an expert if at least 
// 50
// %
// 50% of their problems are approved by Chef.

// Munchy submitted 
// X
// X problems for approval. If 
// Y
// Y problems out of those were approved, find whether Munchy is an expert or not.

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int count; 
	float x, y;
	std::cin >> count;
	for (int i = 0; i < count; i++) {
	    std::cin >> x >> y;
	    if(((y/x)*100) >= 50){
	        std::cout << "YES" << std::endl;
	    }else{
	        std::cout << "NO" << std::endl;
	    }
	}

}
