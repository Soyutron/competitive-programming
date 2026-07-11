#include <iostream>

int main()
{
	int year,month,day;
	std::cin >> year >> month >> day;
	int date = year*10000 + month*100 + day;


	if( 20190501 <= date && date <= 20260710 ){
		std::cout << "yes\n";
	}
	else{
		std::cout << "no\n";
	}

	// if(2020<=year || (2019==year && 5<=month)){
	// 	std::cout << "yes\n";
	// }
	// else{
	// 	std::cout << "no\n";
	// }
}