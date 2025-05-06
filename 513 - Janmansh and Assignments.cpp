// Janmansh has to submit 
// 3
// 3 assignments for Chingari before 
// 10
// 10 pm and he starts to do the assignments at 
// X
// X pm. Each assignment takes him 
// 1
// 1 hour to complete. Can you tell whether he'll be able to complete all assignments on time or not?

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int count,x;
	cin>>count;
	for (int i = 0; i < count; i++) {
	    cin>>x;
	    if(3 <= (10 - x)){
	        std::cout << "YES" << std::endl;
	    }else{
	        std::cout << "NO" << std::endl;
	    }
	}

}
