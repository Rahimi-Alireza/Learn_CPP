//BMI CALC
#include <iostream>

int main(){
	double bmi, h, w;
	std::cout << "vazn vared konid";
	std::cin >> w;
	std::cout << "ghad vared konid";
	std::cin >> h;
	bmi = w / ( h * h );

	if ( bmi < 18.0 ) 
		std::cout << "choob bastani";
	else if ( bmi <= 25.0 && bmi >= 18.0)
		std::cout << "monaseb";
	else
		std::cout << "gamboo";
}
