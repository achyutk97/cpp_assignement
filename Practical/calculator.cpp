#include <iostream>

using namespace std;

template <typename T>
T add(T a, T b) {
	return a + b;
}

template <typename T>
T sub(T a, T b) {
	return a - b;
}

template <typename T>
T mul(T a, T b) {
	return a * b;
}

template <typename T>
T div(T a, T b) {
	if (b == 0) {
		throw "Division by zero, operation";
	}

	return a / b;
}

template <typename T>
T modulus(T a, T b) {
	bool num1IsInt, num2IsInt;

	num1IsInt = ((int)a == a);
	num2IsInt = ((int)b == b);

	return (num1IsInt && num2IsInt) ? (int(a) % int(b)) : throw "Invalid Expression";
}
int calculator() {
	float a, b;
	char operation;

	while (true)
	{
		cout << "Enter Expression" << endl;

		cin >> a >> operation >> b;

		if (operation == 'q') {
			break;
		}

		switch (operation)
		{
		case '+': cout << add<float>(a, b) << endl; break;
		case '-': cout << sub<float>(a, b) << endl; break;
		case '/': cout << mul<float>(a, b) << endl; break;
		case '*': cout << div<float>(a, b) << endl; break;
		case '%': cout << modulus<int>((int)a, (int)b) << endl; break;
		default:
			throw "Inavlid Expression";
			break;
		}

	}

	
}