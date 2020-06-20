/*Написать программу пересчёта расстояния из 
верст в километры (1 верста = 1066.8 м).*/

#include <iostream>

int main() {

	setlocale(LC_RUS, "Russian");


	std::cout << "Enter the distance in versts: ";
	std::cout << (float)std::cin.get()*1066.8;


	return 0;
}