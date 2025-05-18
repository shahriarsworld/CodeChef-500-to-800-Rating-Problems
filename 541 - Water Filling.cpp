// Chef has three water bottles. At any point, if at least two of them are empty, she will fill them up. But if at most one bottle is empty, she will wait, and not fill them up now.

// You are given three integers - 
// B
// 1
// ,
// B
// 2
// ,
// B 
// 1
// ​
//  ,B 
// 2
// ​
//  , and 
// B
// 3
// B 
// 3
// ​
//  .
// If 
// B
// 1
// =
// 1
// B 
// 1
// ​
//  =1, it means that the first bottle is full.
// If 
// B
// 1
// =
// 0
// B 
// 1
// ​
//  =0, it means that the first bottle is empty.
// Similarly, 
// B
// 2
// B 
// 2
// ​
//   denotes whether the second bottle is full or empty, and 
// B
// 3
// B 
// 3
// ​
//   denotes it for the third bottle.

// Output "Water filling time", if Chef has to fill the bottles now. If not, output "Not now".

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int count,b1,b2,b3;
	std::cin >> count;
	for (int i = 0; i < count; i++) {
	    std::cin >> b1 >> b2 >> b3;
	    if((b1==0 && b2==0) && b3==0){
	        std::cout << "Water filling time" << std::endl;
	    }else if(b1==0 && b2==0){
	        std::cout << "Water filling time" << std::endl;
	    }else if( (b2==0 && b3==0)){
	        std::cout << "Water filling time" << std::endl;
	    }else if((b1==0 && b3==0)){
	        std::cout << "Water filling time" << std::endl;
	    }else{
	        std::cout << "Not now" << std::endl;
	    }
	}

}
