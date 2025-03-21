#include<iostream>
#include<cmath>
using namespace std;
class rectangle
{
public:
	rectangle(float l = 1,float w = 1){
		setlen(l);
		setwid(w);
		body = '#';
		bord = '*';
	};
	rectangle(int x1, int y1, int x2, int y2, int x3, int y3, int x4, int y4) {
		setp1(x1, y1);
		setp2(x2, y2);
		setp3(x3, y3);
		setp4(x4, y4);
		length = max(distance(x1,y1,x2,y2),distance(x2,y2,x3,y3));
		width = min(distance(x1, y1, x2, y2), distance(x2, y2, x3, y3));
		cout << "length:" << length << endl;
		cout << "width:" << width << endl;
		body = '#';
		bord = '*';

	}
	double area()const {
		return length * width;
	}
	double perimeter()const {
		return (length + width) * 2;
	}
	bool issquare()const {
		return length == width;
	}
	void setlen(float l) {
		if (l <= 0)length = 1;
		else if (l > 20)length = 20;
		else
		{
			length = l;
		}
	}
	void setwid(float w) {
		if (w <= 0)width = 1;
		else if (w > 20)width = 20;
		else
		{
			width = w;
		}
	}
	float getlen() const{ return length; }
	float getwid() const{ return width; }
	void  setFillCharacter(char b) {
		body = b;
	}
	void setPerimeterCharacter(char bd){
		bord = bd;
	}
	void draw() 
	{
		
		for (double i = 0; i < 25; i++)
		{
			for (double j = 0;j < 25;j++)
			{
				if (i>=(25-p2x)&& i <= (25-p1x)) 
				{
					if (j >= p2y && j <= p3y)
					{
						if (i == (25 - p2x) || i == (25 - p1x))
							cout << bord;
						else if (i >= (25 - p2x) && i <= (25 - p1x)&&(j == p2y || j == p3y))cout << bord;
						else  cout << body;
						 
					}
					else cout << ac;
				}
				else cout << ac;
			}
			cout << endl;
		}
	}
	void move(int xste=0,int ystep=0){
		if (p1x + xste >= 0 && p3x + xste< 25 && p1y + ystep >= 0 && p3y + ystep < 25) 
		{
			p1x += xste;
			p2x += xste;
			p3x += xste;
			p4x += xste;
			p1y += ystep;
			p2y += ystep;
			p3y += ystep;
			p4y += ystep;
		}
		else
		{
			cout << "can't move!!!!!!!!!!" << endl;
		}

	}
private:
	void setp1(int x,int y){
		if (x < 0)p1x = 0;
		else if (x > 20)p1x = 20;
		else
		{
			p1x = x;
		}
		if (y < 0)p1y = 0;
		else if (y > 20)p1y = 20;
		else
		{
			p1y = y;
		}
	}
	void setp2(int x, int y) {
		if (x < 0)p2x = 0;
		else if (x > 20)p2x = 20;
		else
		{
			p2x = x;
		}
		if (y < 0)p2y = 0;
		else if (y > 20)p2y = 20;
		else
		{
			p2y = y;
		}
	}
	void setp3(int x, int y) {
		if (x < 0)p3x = 0;
		else if (x > 20)p3x = 20;
		else
		{
			p3x = x;
		}
		if (y < 0)p3y = 0;
		else if (y > 20)p3y = 20;
		else
		{
			p3y = y;
		}
	}
	void setp4(int x, int y) {
		if (x < 0)p4x = 0;
		else if (x > 20)p4x = 20;
		else
		{
			p4x = x;
		}
		if (y < 0)p4y = 0;
		else if (y > 20)p4y = 20;
		else
		{
			p4y = y;
		}
	}
	float length;
	float width;
	double p1x,p2x,p3x,p4x;
	double p1y,p2y,p3y,p4y;
	char ac = '.';
	char bord;
	char body;
	//utilty function to caluclate the distance between two points
	double distance(double xa,double ya,double xb,double yb){
	return(sqrt(pow(xb - xa, 2)+pow(yb - ya, 2)));
	}
};