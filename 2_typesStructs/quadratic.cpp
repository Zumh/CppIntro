#include <string>
#include <iostream>
#include <cmath> //gives us pow and sqrt!

using std::string; using std::cout;
using std::cin; using std::pow;
using std::sqrt; using std::endl;

// my attempt
struct Numbers{
	double left;
	double right;
};
//want: a function names quadratic that will take in 3 doubles and return
//a combination of: does a solution exist, and if so, what is it?
std::pair<bool,Numbers> quadratic(double a, double b, double c)
{
	//get radical, test if negative, return indicating no roots
	double radical = pow(b, 2) - (4*a*c);
	double denomenator = 2*a;
	if (radical < 0){
		return std::make_pair(false, Numbers{0, 0});
	} 
	//otherwise get roots and return
	radical = sqrt(radical);
	
	return std::make_pair(false, Numbers{((b*-1) + radical)/denomenator, ((b*-1) - radical)/denomenator});
	
}
void myAttemptQuadratic(void){
	//get 3 doubles (ax^2 + bx + c)
	double a, b, c;
	cout << "Give me 3 coefficients: " << endl;

	//This line gets 3 numbers from user input and stores them in a, b and c 
	//we will learn more about cin on Thursday
	cin >> a >> b >> c;
	//get roots if they exist
	std::pair<bool, Numbers> result = quadratic(a,b,c);
	cout << result.first << " " << result.second.left << " " << result.second.right << endl; 
}



// Solution using pair
std::pair<bool, std::pair<double, double>>pairQuadratic(double a,double b, double c){
	//get radical, test if negative, return indicating no roots
	double radical = pow(b, 2) - (4*a*c);
	double denomenator = 2*a;
	if (radical < 0){
		//return std::make_pair(false, std::make_pair(-1, -1));
		return {false, {-1, -1}};
	} 
	//otherwise get roots and return
	radical = sqrt(radical);
	//return std::make_pair(false, std::make_pair());
	return {true, {((b*-1) + radical)/denomenator, ((b*-1) - radical)/denomenator}};
}
int main(){
	//get 3 doubles (ax^2 + bx + c)
	double a, b, c;
	cout << "Give me 3 coefficients: " << endl;

	//This line gets 3 numbers from user input and stores them in a, b and c 
	//we will learn more about cin on Thursday
	cin >> a >> b >> c;
	//get roots if they exist
	auto [result, roots] = pairQuadratic(a,b,c);
	if (result){
		// root exist and can be show here
		auto [root1, root2] = roots;
		cout << root1 << " " << root2 << endl; 
	} else {
		cout << "There is no solution"<<endl;
	}
	//some call to quadratic function!
	
	

	return 0;
}
