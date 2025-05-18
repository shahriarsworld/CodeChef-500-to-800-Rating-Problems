// For each bill you pay using CRED, you earn 
// X
// X CRED coins.
// At CodeChef store, each bag is worth 
// 100
// 100 CRED coins.

// Chef pays 
// Y
// Y number of bills using CRED. Find the maximum number of bags he can get from the CodeChef store.

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int count,x,y;
	std::cin >> count;
	for (int i = 0; i < count; i++) {
	    std::cin >> x >> y;
	    if(x*y>=100){
	        std::cout << x*y/100 << std::endl;
	    }else{
	        std::cout << 0 << std::endl;
	    }
	}

}
