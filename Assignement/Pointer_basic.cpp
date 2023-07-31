#include <iostream>

int add(int* a, int* b) {
	int sum = 0;
	int* ptr = &sum;
	sum = *a + *b;
	return *ptr;
}

void AddVal(int* a, int* b, int* result) {
	*result = *a + *b;
}

void Swap(int* a, int* b) {
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}

void Factorial(int* a, int* result) {
	for (int i{ 1 }; i <= *a; i++) {
		*result *= i;
	}
}

int main() {
	std::cout << "Enter a number to find the factorial: ";

	int findFactof{5};
	int a{ 10 };
	int b{ 20 };
	int result{};

	

	std::cout << "Addition of two number " << add(&a, &b) << std::endl;

	AddVal(&a, &b, &result);

	std::cout << "Addition of two number " << result << std::endl;

	std::cout << "Before Swapping " << a << " " << b << std::endl;

	Swap(&a, &b);

	std::cout << "After Swapping " << a << " " << b << std::endl;

	result = 1;

	Factorial(&findFactof, &result);

	std::cout << "factorial of " << findFactof << " " << result << std::endl;

	return 0;
}
 