#include <iostream>
#include <string>
using namespace std;

int main() {

	int i = 1;
	
	int cnt;
	int plus;
	string cmd;

	for (cnt = 3; cnt > 0; cnt--)
	{
		cin >> cmd;
		if (cmd != "FizzBuzz" && cmd != "Fizz" && cmd != "Buzz") {
			i = stoi(cmd);
			plus = cnt;
		}
		
	}

	i += plus;

	if (i % 3 == 0) {
		if (i % 5 == 0) {
			cout << "FizzBuzz" << "\n";
		}
		else {
			cout << "Fizz" << "\n";

		}
	}
	else {
		if (i % 5 == 0) {
			cout << "Buzz" << "\n";
		}
		else {
			cout << i << '\n';
		}
	}

	return 0;
}