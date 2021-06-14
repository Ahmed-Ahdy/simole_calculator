#include<iostream>
#include<math.h>
using namespace std;

int main()
{
	int control = 0, ifController;
	float firstV, secondV, result;
	char operation;
	int fact = 1;
	float const pi = 3.14159265;
	//using do while loop to repeat the code and at the end ask user if he wants to continue or exist the program.
	do
	{
		cout << "if you want Simple operators press (1)\n if you want Power functions press (2) \nif you want Exponential and logarithmic functions press (3) \nif you want Trigonometric functions press (4)\n if you want Hyperbolic functions press (5)\n";
		cin >> ifController;
		//using switch or if statment to make user choose only one function to do.
		switch (ifController)
		{
		case 1:
			cout << "enter the first value\n";
			cin >> firstV;
			cout << "if you want to addition press (+)\n if you want to multiplication press(*)\n if you want to division press(/)\n if want to subtraction press(-)\n";
			cin >> operation;
			//using signs like * + not letters or numbers to make it easy for user.
			if (operation == '+') {
				cout << "enter the second value\n";
				cin >> secondV;
				result = firstV + secondV;
				cout << "the result is " << result << endl;
			}
			else if (operation == '*') {
				cout << "enter the second value\n";
				cin >> secondV;
				result = firstV * secondV;
				cout << "the result is " << result << endl;
			}
			else if (operation == '/') {
				cout << "enter the second value\n";
				cin >> secondV;
				result = firstV / secondV;
				cout << "the result is " << result << endl;
			}
			else if (operation == '-') {
				cout << "enter the second value\n";
				cin >> secondV;
				result = firstV - secondV;
				cout << "the result is " << result << endl;
			}
			else
				cout << "wrong input";
			break;


		case 2:
			cout << "enter the first value\n";
			cin >> firstV;
			cout << "if you want to get the power enter (a)\n if you want to get the square root enter (b)\n if you want to get factorial enter (c)\n";
			cin >> operation;
			if (operation == 'a') {
				cout << "enter the power \n";
				cin >> secondV;
				result = pow(firstV, secondV);
				cout << "the result is " << result << endl;
			}
			else if (operation == 'b') {
				result = sqrt(firstV);
				cout << "the result is " << result << endl;
			}
			else if (operation == 'c') {
				for (int i = 1; i <= firstV; i++) {
					fact = i * fact;
				}
				cout << "the result is " << fact << endl;
			}

			break;

		case 3:
			cout << "enter the first value\n";
			cin >> firstV;
			cout << "if you want to get log10 enter (a)\n if you want to get log enter (b) \n if you want to get log2 enter (c)\n if you want to get exponential enter (d)\n";
			cin >> operation;
			if (operation == 'b') {
				result = log(firstV);
				cout << "the result is " << result << endl;
			}
			else if (operation == 'a') {
				result = log10(firstV);
				cout << "the result is " << result << endl;
			}
			else if (operation == 'c') {
				result = log2(firstV);
				cout << "the result is " << result << endl;
			}
			else if (operation == 'd') {
				result = exp(firstV);
				cout << "the result is " << result << endl;
			}
			break;

		case 4:
			cout << "enter the first value\n";
			cin >> firstV;
			cout << "if you want sin enter (a)\n if you want cos enter (b)\n if you want tan enter (c)\n if you want inverse sin enter (d)\n if you want inverse cos enter (e)\n if you want inverse tan enter (f)\n";
			cin >> operation;
			if (operation == 'a') {
				result = sin(firstV * pi / 180.0);
				cout << "the result is " << result << endl;
			}
			else if (operation == 'b') {
				result = cos(firstV * pi / 180.0);
				cout << "the result is " << result << endl;
			}
			else if (operation == 'c') {
				result = tan(firstV * pi / 180.0);
				cout << "the result is " << result << endl;
			}
			else if (operation == 'd') {
				result = asin(firstV) * 180.0 / pi;
				cout << "the result is " << result << endl;
			}
			else if (operation == 'e') {
				result = acos(firstV) * 180.0 / pi;
				cout << "the result is " << result << endl;
			}
			else if (operation == 'f') {
				result = atan(firstV) * 180.0 / pi;
				cout << "the result is " << result << endl;
			}
			break;


		case 5:
			cout << "enter the first value\n";
			cin >> firstV;
			cout << "if you want sinh enter(a)\n if you want cosh enter(b)\n if you want tanh enter(c)\n if you want inverse sinh enter(d)\n if you want inverse cosh enter(e)\n if you want inverse tanh enter(f)\n";
			cin >> operation;
			if (operation == 'a') {
				firstV = log(2.0);
				result = sinh(firstV);
				cout << "the result is " << result << endl;
			}
			else if (operation == 'b') {
				firstV = log(2.0);
				result = cosh(firstV);
				cout << "the result is " << result << endl;
			}
			else if (operation == 'c') {
				firstV = log(2.0);
				result = tanh(firstV);
				cout << "the result is " << result << endl;
			}
			else if (operation == 'd') {
				firstV = exp(2) - cosh(2);
				result = asinh(firstV);
				cout << "the result is " << result << endl;
			}
			else if (operation == 'e') {
				firstV = exp(2) - sinh(2);
				result = acosh(firstV);
				cout << "the result is " << result << endl;
			}
			else if (operation == 'f') {
				firstV = tanh(1);
				result = atanh(firstV);
				cout << "the result is " << result << endl;
			}
			break;
			//if user entered wrong input he will know as a massege from programer.
		default:
			cout << "wrong input\n";
			break;
		}

		//giving user the option to continue or exist from the program thats why we using do while loop.
		cout << "press any number to continue if you want to exit press (-1) \n";
		cin >> control;
		//pressing -1 when previous massege appear it's like turning off the calculator.
	} while (control != -1);

}
