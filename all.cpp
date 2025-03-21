#include<iostream>
#include "all.h"
#include<iomanip>
#include<array>
#include"complex.h"
#include"rectangle.h"
#include"tic_tac_toe.h"
#include"saving_accont.h"
#include "Emergency Response System.h"
//#include "all.h"//include prevent duplicate header file in thec same souce code

using namespace std;
void main()
{ 
	//timee t;
	//t.settime(12,40,13);
	//cout<<t.toStandardString()<<endl;
	//timee sunset; // object of type Time
	//array<timee, 5> arrayOfTimes; // array of 5 Time objects
	//timee& dinnerTimeRef{ sunset }; // reference to a Time object
	//timee* timePtr{ &sunset };
	/*int x = 5;
	cout << setfill('0') <<setw(2)<< x;*/
	//complex one(1, 3);
	//complex two(1, 3);
	//one.add(two);
	//one.tostring();
	//two.sub(one);
	//two.tostring();
	/*rational r1(4, 8);
	rational r2(3, 9);
	r1.add(r2);
	r1.subtr(r2);
	r1.mul(r2);
	r1.div(r2);
	cout << r1.todoub() << endl;
	cout << r2.todoub() << endl;*/
	//setprecision(2)<<fixed();
	/*rectangle r1(1.0,2.0);
	cout << "length:" << r1.getlen() << endl;
	cout << "width:" << r1.getwid() << endl;

	cout << r1.area()<<endl;
	cout << r1.perimeter() << endl;
	cout << "Is Square? " << (r1.issquare() ? "Yes" : "No") << endl;*/
	/*rectangle r2(2.0, 2.0, 12.0, 2.0, 12.0, 12.0, 2.0, 12.0);
	cout << r2.area() << endl;
	cout << r2.perimeter() << endl;
	cout << "Is Square? " << (r2.issquare() ? "Yes" : "No") << endl;
	cout << "border: "; 
	char b;cin >> b;
	r2.setPerimeterCharacter(b);
	cout << "body: ";
	char bd;cin >> bd;
	r2.setFillCharacter(bd);
	r2.draw();
	cout << endl;
	r2.move(20, 3);
	r2.draw();*/
	/*XO x1;
		char c = 'X';
		int x=0, y=0;
	for (size_t i = 0; i < 3; i++)
	{
		cout << "(X,Y) ";
		cin >> x>> y;
		cout << c << endl;
		x1.update(c,x,y);
		if (c == 'X')c = 'O';else c = 'X';
	}*/
	/* SavingsAccount::modifyInterestRate(0.03);
	 SavingsAccount saver1(2000.00);
	 saver1.caluclatemonthlyinterest();
	 SavingsAccount saver2(3000.00);
	 saver2.caluclatemonthlyinterest();
	 SavingsAccount::modifyInterestRate(0.04);
	 saver1.caluclatemonthlyinterest();
	 saver2.caluclatemonthlyinterest();*/
	emergency e1;
	e1.dispatchResponse();
	e1.calcTakenTime();
}
