/*Написать программу, вычисляющую скорость, 
с которой бегун пробежал дистанцию.*/

#include <iostream>

float speed(const float& length, const float& time) {
	return (length / 1000) / (((float)((int)time) / 60) + (time - (int)time) / 36);
}

int main()
{
	float length = 0;
	float time = 0;

	std::cout << "Enter length of distance (m): ";
	std::cin >> length;
	std::cout << "Enter time (min.sec): ";
	std::cin >> time;
	std::cout << "You run with speed " << speed(length, time)
			  << " km/h" << std::endl;

	return 0;
}
