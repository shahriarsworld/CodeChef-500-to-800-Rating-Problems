// A new TV streaming service was recently started in Chefland called the Chef-TV.

// A group of 
// N
// N friends in Chefland want to buy Chef-TV subscriptions. We know that 
// 6
// 6 people can share one Chef-TV subscription. Also, the cost of one Chef-TV subscription is 
// X
// X rupees. Determine the minimum total cost that the group of 
// N
// N friends will incur so that everyone in the group is able to use Chef-TV.

#include <bits/stdc++.h>
#include<cmath>
using namespace std;

int main() {
	// your code goes here
	int count,x,y;
	cin>>count;
	for (int i = 0; i < count; i++) {
	    cin>> x >> y;
	    int sub = ceil(x/6.0);
	    std::cout << sub*y << std::endl;
        
	}

}
