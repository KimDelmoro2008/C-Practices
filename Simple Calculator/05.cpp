#include <iostream>
using namespace std;

#include <iostream>
using namespace std;

int main() {

	int x, y;
	char op;

	cout << "This is a Simple Calculator made by kem" << endl;

	cout << "Enter first number: ";
	cin >> x;

	cout << "Enter second number: ";
	cin >> y;

	cout << "Choose operation (+, -, *, /): ";
	cin >> op;

	if (op == '+') {
		cout << "Result: " << x + y;
	}
	else if (op == '-') {
		cout << "Result: " << x - y;
	}
	else if (op == '*') {
		cout << "Result: " << x * y;
	}
	else if (op == '/') {
		if (y != 0) {
			cout << "Result: " << x / y;
		} else {
			cout << "Error: Cannot divide by zero";
		}
	}
	else {
		cout << "Invalid operation";
	}

	return 0;
}