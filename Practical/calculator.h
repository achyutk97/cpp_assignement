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

int calculator();
