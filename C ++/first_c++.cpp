#include<iostream>
using namespace std;

int add(int i) {
	i = i + 5;
	return i;
}

int main() {
	std::cout<< "Hello_World"<<std::endl;
	//std::endl (�ٹٲ�)
	int i = 0;

	while (i < 5)
	{
		std::cout << i <<"�� 5�� ���ϸ�";
		int plus = add(i);
		std::cout << plus << std::endl;
		i = i + 1;
	}

	char String[10] = "Integer";

	std::cout << String <<"��" << sizeof(i) << "byte �Դϴ�" << std::endl;
	
	std::cout << "11 % 3�� ���� " << 11 / 3 << "�̰� �������� " << 11 % 3 << "�Դϴ�." << std::endl;
	
	//���������� (C++ �� boolean type ����)
	
	bool A = true;
	bool B = false;
	std::cout << "A(True)��" << A << " B(False)��" << B << "�Դϴ�."<<std::endl;
	std::cout << "A�� " << std::boolalpha << A << " B�� " << std::boolalpha << B << "�Դϴ�."<<std::endl;
	//cout���� ���� boolŸ���� print�ϸ� 1(True),0(False)�� ������, True,False �� print�Ϸ��� std::boolalpha�� ����Ѵ�.
	std::cout << "A�� " << std::boolalpha << A << " A�� ������ " << std::boolalpha << !A << "�Դϴ�." << std::endl;
	
	return 0;
}

