#include<iostream>
using namespace std;

class Cylinder
{
public:
	Cylinder(double r, double h);
	void setRadius(double r);
	double getRadius();
	void setHeight(double h);
	double getHeight();
	double VolumeDisplay();
	double SADisplay();

private:
	double radius;
	double height;
};

class Circle
{
public:
	Circle(double r);
	void setRadius(double r);
	double getRadius();
	double areaDisplay();

private:
	double radius2;
};

int main()
{
	double r, h, r2;
	cout<<"Please enter the cylinder's radius(in cm): ";
	cin>>r;
	cout<<"Please enter the cylinder's height(in cm): ";
	cin>>h;
	Cylinder a(r, h);
	cout<<"The cylinder's volume is "<<a.VolumeDisplay()<<"cm cubed"<<endl;
	cout<<"The cylinder's surface area is "<<a.SADisplay()<<"sqr. cm"<<endl;

	cout<<"\nPlease enter the circle's radius(in cm): ";
	cin>>r2;
	Circle b(r2);
	cout<<"The area of the circle is "<<b.areaDisplay()<<"sqr. cm"<<endl;
	system("pause");

	return 0;
}

Cylinder::Cylinder(double r, double h)
{
	setRadius(r);
	setHeight(h);
}

Circle::Circle(double r)
{
	setRadius(r);
}

double Circle::areaDisplay()
{
	double area;
	area=3.14159*radius2*radius2;
	return area;
}

double Cylinder::VolumeDisplay()
{
	double volume;
	volume=radius*radius*3.14159*height;
	return volume;
}

double Cylinder::SADisplay()
{
	double SA;
	SA=(2*radius*radius*3.14159)+(2*3.14159*radius*height);
	return SA;
}

void Cylinder::setRadius(double r)
{
	radius=r;
}

void Circle::setRadius(double r)
{
	radius2=r;
}

void Cylinder::setHeight(double h)
{
	height=h;
}

double Cylinder::getRadius()
{
	return radius;
}

double Circle::getRadius()
{
	return radius2;
}

double Cylinder::getHeight()
{
	return height;
}