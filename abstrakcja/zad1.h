#pragma once

class Shape
{
public:
	virtual double GetArea() = 0;
	virtual double GetPerimeter() = 0;
};

class Triangle : public Shape
{
public:
	void Setbase(double base)
	{

		while (base <= 0)
		{
			cout << "ERROR. Width needs to be greater than zero" << endl;
			cin >> base;
		}

		_base = base;
	}

	void SetHeight(double height)
	{

		while (height <= 0)
		{
			cout << "ERROR. Width needs to be greater than zero" << endl;
			cin >> height;
		}

		_height = height;
	}
	double GetArea()
	{
		_area = (_base * _height) / 2;
		return _area;
	}

private:
	double _base;
	double _height;
	double _area;
};

class Circle :public Shape
{
public:
	void Setray(double ray)
	{

		while (ray <= 0)
		{
			cout << "ERROR. Width needs to be greater than zero" << endl;
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
		return 1;
	}

private:
	double _ray;
	double _area;
};

class Triangle : public Shape
{
public:
	Triangle(double inputBase, double inputHeight)
	{
		Setbase(inputBase);
		SetHeight(inputHeight);
	}

	void Setbase(double base)
	{

		while (base <= 0)
		{
			cout << "ERROR. Width needs to be greater than zero" << endl;
			cin >> base;
		}

		_base = base;
	}

	void SetHeight(double height)
	{

		while (height <= 0)
		{
			cout << "ERROR. Width needs to be greater than zero" << endl;
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
		return 1;
	}

private:
	double _base;
	double _height;
	double _area;
};

void CalculateShapeArea(Shape& shape)
{
	shape.GetArea();
}




void zad1()
{
	Triangle triangle(4,5);

	CalculateShapeArea(triangle);

	Circle circle;
	
	circle.Setray(3);
	CalculateShapeArea(circle);
}






















void  zad1()
{

}