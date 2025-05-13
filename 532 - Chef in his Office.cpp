// Recently Chef joined a new company. In this company, the employees have to work for 
// X
// X hours each day from Monday to Thursday. Also, in this company, Friday is called Chill Day — employees only have to work for 
// Y
// Y hours 
// (
// Y
// <
// X
// )
// (Y<X) on Friday. Saturdays and Sundays are holidays.
// Determine the total number of working hours in one week.

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int count,x,y;
	cin>> count;
	for (int i = 0; i < count; i++) {
	    cin>> x >> y;
	    std::cout << x + x + x + x + y << std::endl;
	}

}
