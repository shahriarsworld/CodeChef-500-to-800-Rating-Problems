// In Chefland, there are 
// X
// X schools, and each school has 
// Y
// Y students.
// The year end results are in and a total of 
// Z
// Z students passed the exams.

// Assuming that all students appeared for the exams, find whether the number of students who passed in Chefland was strictly greater than 
// 50
// %
// 50%.

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int count,x,y,z;
	std::cin >> count;
	for (int i = 0; i < count; i++) {
	    cin>>x >>y >>z;
        int totalStudents = x*y;
        if(z > (totalStudents/2)){
            std::cout << "YES" << std::endl;
        }else{
            std::cout << "NO" << std::endl;
        }
	    
	}

}
