#include <string>
#include <iostream>
#include <cmath> //gives us pow and sqrt!

using std::string; using std::cout;
using std::cin; using std::pow;
using std::sqrt; using std::endl;

//want: a function names quadratic that will take in 3 doubles and return
//a combination of: does a solution exist, and if so, what is it?
quadratic(double a, double b, double c)
{
	//get radical, test if negative, return indicating no roots
	double radical = pow(b) - (4*a*c);
	if (radical < 0){
		return -1;
	}
	//otherwise get roots and return
	double radical = sqrt(radical);
	double result = (radica
	return 
}

int main(){
	//get 3 doubles (ax^2 + bx + c)
	double a, b, c;
	cout << "Give me 3 coefficients: " << endl;

	//This line gets 3 numbers from user input and stores them in a, b and c 
	//we will learn more about cin on Thursday
	cin >> a >> b >> c;
	//get roots if they exist
	//some call to quadratic function!
	
	

	return 0;
}