#include <iostream>
#include <iomanip>
using namespace std;

//********************
// Declare Function Prototypes
//********************
void getinput(int &num1, int &num2){
	cout << "Input 2 normal integar number\n";
	cin >> num1 >> num2; 
}
void getinput(float &fnum1, float &fnum2){
	cout << "Input 2 float integar number\n";
	cin >> fnum1 >> fnum2;
}
void swapTwoValues(int &num1, int &num2){
	int Temp;
	Temp = num1;
	num1 = num2;
	num2 = Temp;
}
void swapTwoValues(float &fnum1, float &fnum2){
	float Temp;
	Temp = fnum1;
	fnum1 = fnum2;
	fnum2 = Temp;
}

int main()
{
	int num1, num2;
	float fnum1, fnum2;
	getinput(num1, num2);
	cout << " Before Swap" << setw(5) << num1 << setw(5) << num2 << setw(5) << endl;
	swapTwoValues(num1, num2);
	cout << " After Swap" << setw(5) << num1 << setw(5) << num2 << setw(5) << endl;

	// -- Call overloaded function with float parameters
	getinput(fnum1, fnum2);
	cout << fixed << setprecision(2);
	cout << setw(5) << fnum1 << setw(5) << fnum2 << setw(5) << endl;
	swapTwoValues(fnum1, fnum2);
	cout << setw(5) << fnum1 << setw(5) << fnum2 << setw(5) << endl;
}

// ******************************
// Implement all your functions here
// ******************************