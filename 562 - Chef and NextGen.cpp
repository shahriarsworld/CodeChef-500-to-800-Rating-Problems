// Chef is currently working for a secret research group called NEXTGEN. While the rest of the world is still in search of a way to utilize Helium-3 as a fuel, NEXTGEN scientists have been able to achieve 2 major milestones:

// Finding a way to make a nuclear reactor that will be able to utilize Helium-3 as a fuel
// Obtaining every bit of Helium-3 from the moon's surface
// Moving forward, the project requires some government funding for completion, which comes under one condition: to prove its worth, the project should power Chefland by generating at least 
// A
// A units of power each year for the next 
// B
// B years.

// Help Chef determine whether the group will get funded assuming that the moon has 
// X
// X grams of Helium-3 and 
// 1
// 1 gram of Helium-3 can provide 
// Y
// Y units of power.

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int count, a, b, x, y;
	std::cin >> count;
	for (int i = 0; i < count; i++) {
	    std::cin >> a >> b >> x >> y;
	    if ((a*b) <= (x*y)){
	        std::cout << "YES" << std::endl;
	    }else{
	        std::cout << "NO" << std::endl;
	    }
	}

}
