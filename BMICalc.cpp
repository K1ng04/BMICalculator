#include <iostream>
#include <cmath>

using namespace std; 



void bmiCalc() {
	double Weight; 
	double Height; 
	cout << "What is your weight (lbs.): ";
	cin >> Weight;
	cout << "What is your Height (in): ";
	cin >> Height; 
	float formula;
	formula = (703 * Weight) / (pow(int(Height), 2)); 
	if (formula < 18.5) {
		cout << "You are underweight: " << formula; 

	}
	else if (formula >= 18.5 && formula <= 24.9) {
		cout << "You are normal weight: " << formula;

	}
	else if (formula >= 25 && formula <= 29.9){
		cout << "You are overweight: " << formula;

	}
	else {
		cout << "You are Obese: " << formula;

	}

}


int main() {
	bmiCalc();
	return 0;
}
