// While Alice was drinking sugarcane juice, she started wondering about the following facts:

// The juicer sells each glass of sugarcane juice for 
// 50
// 50 coins.
// He spends 
// 20
// %
// 20% of his total income on buying sugarcane.
// He spends 
// 20
// %
// 20% of his total income on buying salt and mint leaves.
// He spends 
// 30
// %
// 30% of his total income on shop rent.
// Alice wonders, what is the juicer's profit (in coins) when he sells 
// N
// N glasses of sugarcane juice?

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int count;
	float n;
	std::cin >> count;
	for (int i = 0; i < count; i++) {
	    std::cin >> n;
	    float totalIncome = (n * 50);
	    float sugercane = (20 * totalIncome) / 100;
	    float saltMint = (20 * totalIncome) / 100;
	    float shopRent = (30 * totalIncome) / 100;
	    std::cout << totalIncome - (sugercane + saltMint + shopRent) << std::endl;
	}

}
