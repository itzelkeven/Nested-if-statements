#include <iostream>
using namespace std;
int main() {
	char choice;
	char choicee;
	cout << "Do you want (i)ce cream or (c)andy?" << endl;
	cin >> choice;
	cout << "Do you want c(h)ocolate or (f)ruit?" << endl;
	cin >> choicee;
	if (choice == 'i') {
		if (choicee == 'h')
			cout << "Here is a hot fudge sundae!" << endl;
	}
	if (choice == 'i') {
		if (choicee == 'f')
			cout << "Here is a Strawberry Blizzard!" << endl;
	}
	if (choice == 'c') {
		if (choicee == 'h')
			cout << "Here is a Hersheys bar!" << endl;
	}
	if (choice == 'c') {
		if (choicee == 'f')
			cout << "Here is a fruit Starburst!" << endl;
	}
}