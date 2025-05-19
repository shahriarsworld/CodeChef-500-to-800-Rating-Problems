// In Chefland, a tennis game involves 
// 4
// 4 referees.
// Each referee has to point out whether he considers the ball to be inside limits or outside limits. The ball is considered to be IN if and only if all the referees agree that it was inside limits.

// Given the decision of the 
// 4
// 4 referees, help Chef determine whether the ball is considered inside limits or not.

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int count,w,x,y,z;
	std::cin >> count;
	for (int i = 0; i < count; i++) {
	    cin >> w >> x >> y >> z;
	    if(w == 0 && x == 0 && y == 0 && z == 0){
	        std::cout << "IN" << std::endl;
	    }else{
	        std::cout << "OUT" << std::endl;
	    }
	}

}
