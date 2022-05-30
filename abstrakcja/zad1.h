#pragma once
class shape
{
public:
	virtual double GetArea() = 0;
	virtual double GetPerimeter() = 0;
};
class ShapeCalculator :public shape
{
public:
	static void CalculateShapeArea(shape& shape)
	{
		cout<<shape.GetArea();
	}
	static void CalculateShapePerimeter(shape& shape)
	{
		cout<<shape.GetPerimeter();
		cout << typeid(shape).name();
	}
	/*static void CoutShape(shape& shape)
	{
		cout << shape;
	}*/
};


class trapezoid : public shape
{
public:
	trapezoid(double inputbase1,double inputbase2, double inputbase3, double inputbase4, double inputheight)
	{
		setbase1(inputbase1);
		setbase2(inputbase2);
		setbase3(inputbase3);
		setbase4(inputbase4);
		setheight(inputheight);
	}
	void setbase1(double base1)
	{

		while (base1 <= 0)
		{
			cout << "error. width needs to be greater than zero" << endl;
			cin >> base1;
		}

		_base1 = base1;
	}
	void setbase2(double base2)
	{

		while (base2 <= 0)
		{
			cout << "error. width needs to be greater than zero" << endl;
			cin >> base2;
		}

		_base2 = base2;
	}
	void setbase3(double base3)
	{

		while (base3 <= 0)
		{
			cout << "error. width needs to be greater than zero" << endl;
			cin >> base3;
		}

		_base3 = base3;
	}
	void setbase4(double base4)
	{

		while (base4 <= 0)
		{
			cout << "error. width needs to be greater than zero" << endl;
			cin >> base4;
		}

		_base4= base4;
	}

	void setheight(double height)
	{

		while (height <= 0)
		{
			cout << "error. width needs to be greater than zero" << endl;
			cin >> height;
		}

		_height = height;
	}
	double GetArea()
	{
		_area = ((_base1 + _base2) * _height) / 2;
		return _area;
	}
	double GetPerimeter()
	{
		_perimeter = _base1 + _base2 + _base3 + _base4;
		return _perimeter;
	}


private:
	double _base1;
	double _base2;
	double _base3;
	double _base4;
	double _height;
	double _area;
	double _perimeter;
};

class circle :public shape
{
public:
	circle(double inputray)
	{
		setray(inputray);
	}
	void setray(double ray)
	{

		while (ray <= 0)
		{
			cout << "error. width needs to be greater than zero" << endl;
			cin >> ray;
		}

		_ray = ray;
	}
	double GetArea()
	{
		_area = M_PI * _ray * _ray;
		return _area;
	}

	double GetPerimeter()
	{
		_perimeter = 2 * M_PI * _ray;
		return _perimeter;
	}

private:
	double _ray;
	double _area;
	double _perimeter;
};

class triangle : public shape
{
public:
	triangle(double inputbase, double inputbase1, double inputbase2, double inputheight)
	{
		setbase(inputbase);
		setbase(inputbase1);
		setbase(inputbase2);
		setheight(inputheight);
	}

	void setbase(double base)
	{

		while (base <= 0)
		{
			cout << "error. width needs to be greater than zero" << endl;
			cin >> base;
		}

		_base = base;
	}
	void setbase1(double base1)
	{

		while (base1 <= 0)
		{
			cout << "error. width needs to be greater than zero" << endl;
			cin >> base1;
		}

		_base1 = base1;
	}
	void setbase2(double base2)
	{

		while (base2 <= 0)
		{
			cout << "error. width needs to be greater than zero" << endl;
			cin >> base2;
		}

		_base2 = base2;
	}

	void setheight(double height)
	{

		while (height <= 0)
		{
			cout << "error. width needs to be greater than zero" << endl;
			cin >> height;
		}

		_height = height;
	}
	double GetArea()
	{
		_area = (_base * _height) / 2;
		return _area;
	}

	double GetPerimeter()
	{
		_perimeter = _base + _base1 + _base2;
		return _perimeter;
	}

private:
	double _base;
	double _base2;
	double _base1;
	double _height;
	double _area;
	double _perimeter;
};

void SHAPE1()
	{
	trapezoid trapezoid1(1, 2, 3, 3, 4);
	ShapeCalculator::CalculateShapeArea(trapezoid1);
	ShapeCalculator::CalculateShapePerimeter(trapezoid1);
	}
void SHAPE2()
	{
		triangle triangle1(4, 5, 4, 5);
		ShapeCalculator::CalculateShapeArea(triangle1);
		ShapeCalculator::CalculateShapePerimeter(triangle1);
	}
void SHAPE3()
{
	circle circle1(4);
	ShapeCalculator::CalculateShapeArea(circle1);
	ShapeCalculator::CalculateShapePerimeter(circle1);

}

class ShaperUser
{
public:
	int myPublicNumber = 32;

	//ShaperUser(trapezoid &myCircle)
	//{
	//	_myCircle = myCircle;
	//}

	//void useCircle()
	//{
	//	//costam z _myCircle
	//	_myCircle.GetArea();
	//}
	void DisplayFather()
	{
		cout << myPrivateNumber;
	}
private:
	int myPrivateNumber = 44;
	//circle _myCircle;

protected:
	int myProtectedNumber = 50;

};

class ShaperChild : ShaperUser
{

public:
	void Display()
	{
		cout << myProtectedNumber;
	}
	int ShaperChildNumber = 44444;
};




void zad1(Shape1 input)
{
	ShaperUser myUser;
	myUser.myPublicNumber = 33;

	ShaperChild myChild;
	myChild.Display();

	switch (input)
	{
		case Shape1::Trapezoid:
			SHAPE1();
			/*trapezoid trapezoid1(1, 2, 3);
			ShapeCalculator::CalculateShapeArea(trapezoid);
			ShapeCalculator::CalculateShapePerimeter(trapezoid);*/
			break;
		case Shape1::Triangle:
			SHAPE2();
			/*triangle triangle1(4, 5);
			ShapeCalculator::CalculateShapeArea(triangle);
			ShapeCalculator::CalculateShapePerimeter(triangle);*/
			break;
		case Shape1::Circle:
			SHAPE3();
			/*circle circle1(4);
			ShapeCalculator::CalculateShapeArea(circle);
			ShapeCalculator::CalculateShapePerimeter(circle);
			*/
			

			break;
		default:
			break;



	}
	
	
}


















