#include<iostream>
using namespace std;

#define tab "\t"
//struct
class Point
{
	double x, y;
public:
	double get_x()const
	{
		return x;
	}
	double get_y()const
	{
		return y;
	}
	void set_x(double x)
	{
		this->x = x;
	}
	void set_y(double y)
	{
		this->y = y;
	}

};

//#define STRUCT_POINT

void main()
{
	setlocale(LC_ALL, "");
#ifdef STRUCT_POINT


	//type name
	int a; 
	Point A;
	A.x = 2;
	A.y = 3;
	cout << A.x << tab << A.y << endl;
	Point* pA = &A;//Создание указателя на объект нашей стурктуры
	cout << pA->x << tab << pA->y << endl;
	/*
	. оператор прямого доступа(Point operator)
	предназначен для доступ к полям объекта по имени объекта.
	-> оператор косвенного доступ(Arrow operator)
	предназначен для доступа к полям объекта по адресу объекта	
	*/
#endif // STRUCT_POINT

	Point A;
	A.set_x(2);
	A.set_y(3);
	cout << A.get_x() << tab << A.get_y() << endl;
}