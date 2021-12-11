// SPD_121: Encapsulation (2021 12 11 lesson 2) time 1.10
#include<iostream>
#include <cmath>
using namespace std;
using std::cout;
using std::cin;
using std::endl;

#define tab "\t"
//struct



class Point
{
private:
	double x, y;
public:  //как их закрывать??? //написать pivat
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
	//создание Constructor
	/*Point()
	{
		x = y = 0;
		cout << "DefaultConstructor:\t" << this << endl;
	}*/
	Point(double x = 0, double y = 0)
	{
		this->x = x;
		this->y = y;
		cout << "Constructor:\t" << this << endl;
	}
	//создание Destructor
	~Point()
	{
		cout << "Destructor:\t" << this << endl;
	}
	//секция метод   Methods:
	void print()const
	{
		cout << "X = " << x << "\tY = " << y << endl;
	}

	double Distance(int x0, int y0) //Метод который возвращает расстояние до указанной точки
	{
		double distance = 0;
		
		if (this->x >= x0 && this->y >= y0)
		{ 
			distance = abs(sqrt((this->x - x0) * (this->x - x0) + (this->y - y0) * (this->y - y0)));
		}
		else
		{
			distance = abs(sqrt((x0 - this->x) * (x0 - this->x) + (y0 - this->y) * (y0 - this->y)));
		}
		return distance;
	}
};

double Distance(Point A, Point B); //Функция которая возвращает расстояние между двумя точками (Объявление)

//#define STRUCT_POINT
//AB = √(xb - xa)2 + (yb - ya)2 = √(6 - (-1))2 + (2 - 3)2 = √72 + 12 = √50 = 5√2
//Ответ: AB = 5√2.
void main()
{
	setlocale(LC_ALL, "");
#ifdef STRUCT_POINT


	//type name
	int a; 
	Point A;	//Создаем переменную 'A' типа 'Point'
				//Создаем объект (экземпляр) структуры 'Point'

	A.x = 2;
	A.y = 3;
	cout << A.x << tab << A.y << endl;
	Point* pA = &A;//Создание указателя на объект нашей стурктуры
	cout << pA->x << tab << pA->y << endl;
	/*
	. оператор прямого доступа (Point operator)
	предназначен для доступ к полям объекта по имени объекта.
	-> оператор косвенного доступ (Arrow operator)
	предназначен для доступа к полям объекта по адресу объекта	
	*/
#endif // STRUCT_POINT

	Point A(10, 15);
	//A.set_x(2);
	//A.set_y(3);
	//cout << A.get_x() << tab << A.get_y() << endl;
	A.print();
	
	Point B(20, 30);
	B.print();
	Point C = 5;
	C.print();
	int x0, y0;  cout << "Введите X и Y" << endl; cin >> x0 >> y0;
	cout <<"Дистанция до точки 'B' "<<B.Distance(x0, y0) << endl;
	cout << Distance(A,B) << endl;
}

double Distance(Point A, Point B)
{
	double distance = 0;

	if (A.get_x() >= B.get_x() && A.get_y() >= B.get_y())
	{
		distance = abs(sqrt((A.get_x() - B.get_x()) * (A.get_x() - B.get_x()) + (A.get_y() - B.get_y()) * (A.get_y() - B.get_y())));
	}
	else
	{
		distance = abs(sqrt((B.get_x() - A.get_x()) * (B.get_x() - A.get_x()) + (B.get_y() - A.get_y()) * (B.get_y() - A.get_y())));
	}
	return distance;
} //Функция которая возвращает расстояние между двумя точками (Реализация)