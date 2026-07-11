#include <iostream>

int main()
{
	int N;
	std::cin >> N;
	int a = N%10;
	int b = N/10%10;
	int c = N/100%10;

	std::cout << a << b << c << "\n";

	if(a==b && b==c){
		std::cout << "Yes\n";
	}else{
		std::cout << "No\n";
	}
}