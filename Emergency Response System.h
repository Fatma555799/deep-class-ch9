#include<iostream>
#include<cmath>
#include <ctime>
using namespace std;
enum  class callStatus
{
	PENDING, INPROGRESS, RESOLVED

};
enum  class callsType
{
	ACCIDENT, KINAPDING,FIRING,SINKING, SUICIDE

};
enum  class responseType
{
	POLIC,AMUBULANCE,FIREFIGHTER,RESUER
};
class emergency
{
public:
	emergency() {
		cout << "name: ";cin >> name;
		cout << "location:";cin >> location;
		cout << "phone number:";cin >> phonenumber;
		starttime = time(0);
		cout << "type of emergency\n 0:ACCIDENT\n1:KINAPDING\n2:FIRING\n3:SINKING\n4:SUICIDE";
		int num; cin >> num; 
		 setcalltype(num);
		setcallsresponse();
		c = callStatus::PENDING;r = "pending";
		display();
		cout << endl;
	}
	void dispatchResponse() {
		cout << "DISPATC NOW!!!!!!!!!!!!!!!!!!!!"<<endl;
		c = callStatus::INPROGRESS; r = "in progress";
		cout << "the " << cc << " in thier way to"<<location << endl;
		display();
		bool done = false;
		cout << "is it done? ";cin >> done;
		if (done) { resolveEmergency(); }
	}
	void calcTakenTime() {
		time_t takentime = endtime - starttime;
		cout << "the service taken" << takentime << endl;
	}
private:
	
	void resolveEmergency() {
		c = callStatus::RESOLVED;r = "resolved";
		display();
		endtime = time(0);
	}
	void display() {
		cout << "caller: "<<name << endl;
		cout << "location: " << location << endl;
		cout << "phonenumber: " << phonenumber << endl;
		cout << "type of emergency: " <<tt<< endl;
		cout << "the emergency is " << r << endl;
	}
	void setcalltype(int num){
		switch (num)
		{
		case 0:t = callsType::ACCIDENT;tt= "accident"; break;
		case 1:t = callsType::KINAPDING; tt = "kinapding";break;
		case 2:t = callsType::FIRING; tt = "firing";break;
		case 3:t = callsType::SINKING;tt = "sinking";break;
		case 4:t = callsType::SUICIDE;tt = "suiciding";break;
		default:cout << "incrrocet emergency" << endl;
			break;
		}
	}
	void setcallsresponse() {
		
		switch (t)
		{
		case callsType::ACCIDENT:callsresponse = responseType::POLIC; cc = "POLIC";
			break;
		case callsType::KINAPDING:callsresponse = responseType::POLIC;cc = "POLIC";
			break;
		case callsType::FIRING:callsresponse = responseType::FIREFIGHTER;cc = "FIREFIGHTER";
			break;
		case callsType::SINKING:callsresponse = responseType::RESUER;cc = "RESUER";
			break;
		case callsType::SUICIDE:callsresponse = responseType::RESUER;cc = "RESUER";
			break;
		default:
			break;
		}
	}
	string name;
	string location;
	string phonenumber;
    callStatus c;
	string r;
	callsType t;
	string tt;
	responseType callsresponse;
	string cc;
	time_t starttime;
	time_t endtime;
	double  responeperiod;
};