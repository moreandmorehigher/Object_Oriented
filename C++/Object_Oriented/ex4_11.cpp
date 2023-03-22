#include <iostream>
#include <string>
using namespace std;

int main() {
	// string 积己
	string str;
	string address("辑匡矫 己合备 伙急悼 389");
	string copyAddress(address);

	char text[] = { 'L', 'o','v','e',' ','C','+','+','\0' };
	string title(text);

	cout << str << endl;
	cout << address << endl;
	cout << copyAddress << endl;
	cout << title << endl;
}