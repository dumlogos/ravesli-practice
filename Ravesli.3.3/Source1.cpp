/*�������� ��������� ��������� ���������� �� 
����� � ��������� (1 ������ = 1066.8 �).*/

#include <iostream>

int main() {

	setlocale(LC_RUS, "Russian");


	std::cout << "Enter the distance in versts: ";
	std::cout << (float)std::cin.get()*1066.8;


	return 0;
}