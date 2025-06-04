// Car or Bike
// Chef wants to reach home as soon as possible. He has two options:

// Travel with his BIKE which takes 
// X
// X minutes.
// Travel with his CAR which takes 
// Y
// Y minutes.
// Which of the two options is faster or do they both take same time?

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int count, x, y;
	cin>> count;
	for (int i = 0; i < count; i++) {
	    std::cin >> x >> y;
	    if (x > y){
	        std::cout << "CAR" << std::endl;
	    }else if (x < y){
	        std::cout << "BIKE" << std::endl;
	    }else{
	        std::cout << "SAME" << std::endl;
	    }
	}

}
