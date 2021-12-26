#include<iostream>
using namespace std;

int add(int i) {
	i = i + 5;
	return i;
}

int main() {
	std::cout<< "Hello_World"<<std::endl;
	//std::endl (줄바꿈)
	int i = 0;

	while (i < 5)
	{
		std::cout << i <<"에 5를 더하면";
		int plus = add(i);
		std::cout << plus << std::endl;
		i = i + 1;
	}

	char String[10] = "Integer";

	std::cout << String <<"는" << sizeof(i) << "byte 입니다" << std::endl;
	
	std::cout << "11 % 3의 몫은 " << 11 / 3 << "이고 나머지는 " << 11 % 3 << "입니다." << std::endl;
	
	//부정연산자 (C++ 은 boolean type 지원)
	
	bool A = true;
	bool B = false;
	std::cout << "A(True)는" << A << " B(False)는" << B << "입니다."<<std::endl;
	std::cout << "A는 " << std::boolalpha << A << " B는 " << std::boolalpha << B << "입니다."<<std::endl;
	//cout만을 통해 bool타입을 print하면 1(True),0(False)로 나오고, True,False 로 print하려면 std::boolalpha를 써야한다.
	std::cout << "A는 " << std::boolalpha << A << " A의 부정은 " << std::boolalpha << !A << "입니다." << std::endl;
	
	return 0;
}

