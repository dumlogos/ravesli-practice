/*Написать программу, которая вычисляет среднее арифметическое 
последовательности дробных чисел, вводимых с клавиатуры. 
После ввода последнего числа программа должна вывести минимальное 
и максимальное числа из последовательности. 
Количество чисел последовательности вводит пользователь.*/

#include <iostream>

int main()
{
	setlocale(LC_ALL, "Russian");

	int cnt;
<<<<<<< HEAD
	float min, max;
=======
>>>>>>> 74ade9bd0ef26d9a8661ff2705ff0c5a1e56ef32
	float averrage = 0;

	std::cout << "Enter the count of numbers: ";
	std::cin >> cnt;

	float bufNum;
	for (int i = 0; i < cnt; ++i) {
		std::cin >> bufNum;
<<<<<<< HEAD
		if (i == 0) {
			min = bufNum;
			max = bufNum;
		}
		else if (bufNum > max) max = bufNum;
		else if (bufNum < min) min = bufNum;
		averrage += bufNum;
	}

	std::cout << "Number average equals " << averrage / cnt << std::endl;
	std::cout << "Max equals " << max << std::endl;
	std::cout << "Min equals " << min << std::endl;
=======
		averrage += bufNum;
	}

	std::cout << "Number average equals " << averrage / cnt;
	
>>>>>>> 74ade9bd0ef26d9a8661ff2705ff0c5a1e56ef32


	return 0;
}

