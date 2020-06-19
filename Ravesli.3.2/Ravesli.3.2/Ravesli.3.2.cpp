/*Написать программу, которая вычисляет сумму всех четных
и положительных чисел. Количество чисел и числа вводит 
пользователь.*/

#include <iostream>
#include <vector>

std::vector<int>& vectInit(int count){
	int ac = 0;
	std::vector<int> numbers;
	for (int i = 0; i < count; ++i) {
		std::cin >> ac;
		numbers.push_back(ac);
	}
	return numbers;
}

int vectSum(const std::vector<int>& numbers) {
	int sum = 0;
	for (auto i : numbers) {
		if (i % 2 == 0 && i > 0) sum += i;
	}
	return sum;
}

int main()
{
	int count = 0;

	std::cout << "Enter the number of summable numbers: ";
	std::cin >> count;

	std::cout << vectSum(vectInit(count));

	return 0;
}
