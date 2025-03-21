//#include<iostream>
//#include<stdexcept>
//#include<sstream>
//#include<string>
//#include<iomanip>
//#include "all.h"
//using namespace std;
//void timee::settime(int h, int m, int s)
//{
//	if ((h < 24 && h>0) && (m < 60 && m>=0) && (s < 60 && s>=0))
//	{
//		hours = h;
//		minuts = m;
//		seconds = s;
//	}
//	else
//		throw invalid_argument("invalid time");
//}
//string timee::toUneversalString()const 
//	{
//	ostringstream output;
//		output <<setfill('0') <<setw(2) << hours << " :" <<  setw(2) << minuts << ":" <<  setw(2) << seconds;
//		return output.str();
//
//    }
//string timee::toStandardString()const
//{
//	ostringstream output;
//	output << setfill('0') << setw(2) << "hours: " << ((hours > 12) ? hours % 12 : hours) << " :" << setw(2) << minuts << ":" <<setw(2) << seconds << ((hours >= 12) ? " PM" : " AM") << endl;
//	return output.str();
//}