// Chef is watching a football match. The current score is 
// A
// :
// B
// A:B, that is, team 
// 1
// 1 has scored 
// A
// A goals and team 
// 2
// 2 has scored 
// B
// B goals. Chef wonders if it is possible for the score to become 
// C
// :
// D
// C:D at a later point in the game (i.e. team 
// 1
// 1 has scored 
// C
// C goals and team 
// 2
// 2 has scored 
// D
// D goals). Can you help Chef by answering his question?

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int count , a , b , c , d;
	std::cin >> count;
	for (int i = 0; i < count; i++) {
	    std::cin >> a >> b;
	    std::cin >> c >> d;
	    if ((c >= a) && (d >= b)){
	        std::cout << "POSSIBLE" << std::endl;
	    }else{
	        std::cout << "IMPOSSIBLE" << std::endl;
	    }
	}

}
