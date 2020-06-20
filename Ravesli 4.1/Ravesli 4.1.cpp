/*Написать программу пересчёта расстояния из верст в километры (1 верста = 1066.8 м).*/


#include <iostream>

int main()
{
	setlocale(LC_ALL, "Russian");

	float distance;

	std::cout << "Enter the distance in versts: ";
	std::cin >> distance;
	distance *= 1066.8;
	std::cout << "Distance in versts equals " << distance;
	
	return 0;
}

