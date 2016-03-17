#include<iostream>
#include<string>
using namespace std;

class GradeBook
{
public:
	GradeBook(string courseName, string instructor);
	void setCourseName(string courseName);
	string getCourseName();
	void setInstructorName(string instructor);
	string getInstructorName();
	void displayMessage();

private:
	string CourseName;
	string instructorName;
};

int main()
{
	string nameOfCourse;
	string nameOfInstructor;

	GradeBook myGradeBook("Untitled","Staff");

	myGradeBook.displayMessage();
	cout<<endl;

	cout<<"Enter the name of the class:"<<endl;
	getline(cin,nameOfCourse);
	cout<<"Enter the name of the instructor: "<<endl;
	getline(cin,nameOfInstructor);
	myGradeBook.setCourseName(nameOfCourse);
	myGradeBook.setInstructorName(nameOfInstructor);
	cout<<endl;

	myGradeBook.displayMessage();
	system("pause");

	return 0;
}

GradeBook::GradeBook(string courseName, string instructor)
{
	setCourseName(courseName);
	setInstructorName(instructor);
}

void GradeBook::setInstructorName(string instructor)
{
	instructorName=instructor;
}

void GradeBook::setCourseName(string name)
{
	CourseName=name;
}

string GradeBook::getInstructorName()
{
	return instructorName;
}

string GradeBook::getCourseName()
{
	return CourseName;
}

void GradeBook::displayMessage()
{
	cout<<"Welcome to GradeBook for "<<getCourseName()<<"!"<<endl;
	cout<<"This course is presented by "<<getInstructorName()<<"."<<endl;
}