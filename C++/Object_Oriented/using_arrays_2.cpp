// compile with: /EHsc /W1
#include <iostream>
using namespace std;
int main() {
	double multi[4][4][3];	// Declare the array.
	double(*p2multi)[3];
	double(*p1multi);

	cout << multi[3][2][2] << "\n";	// C4700 Use three subscripts.
	p2multi = multi[3];				// Make p2multi point to fourth "plane" of multi.
	p1multi = multi[3][2];			// Make p1multi point to fourth plane, third row of multi.
}