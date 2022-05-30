#include <iostream>
#include <string>
#include <array>
#include<string.h>
#define _USE_MATH_DEFINES
#include<math.h>
#include<fstream>
#include<vector>

using namespace std;



enum class Shape1
{
	
	Triangle ,
	Circle  ,
	Trapezoid ,

};
#include "zad1.h"
#include "zad3.h"
#include "Tester.h"

int main()
{
	
	int task;
	cout << "Enter task";
	cin >> task;
	int userInput;
	Shape1 userShape;
	switch (task)
	{
	case 1:
		cout << "enter figere rectangle-1,riangle-2,circel-3,trapezoid-4";
		cin >> userInput;
		userShape = static_cast<Shape1>(userInput);
		zad1(userShape);
		break;
	case 3:
		zad3();
		break;
	case 4:
		vinogron();
		break;
	default:
		break;
	}


	



	return 0;
}