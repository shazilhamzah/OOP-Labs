//#include<iostream>
//using namespace std;
//
//class Time
//{
//public:
//	Time() {
//		hours = 0;
//		minutes = 0;
//		seconds = 0;
//	}
//	Time(int a, int b, int c) {
//		hours = a;
//		minutes = b;
//		seconds = c;
//	}
//	Time& operator+(const Time& obj) {
//		Time temp;
//
//		/*SECONDS*/
//		int secondsCheck = this->seconds + obj.seconds;
//		if (secondsCheck >= 60) {
//			secondsCheck -= 60;
//			temp.minutes++;
//			temp.seconds = secondsCheck;
//		}
//		else {
//			temp.seconds += secondsCheck;
//		}
//
//		/*MINUTES*/
//		int minutesCheck = this->minutes + obj.minutes;
//		if (minutesCheck >= 60) {
//			minutesCheck -= 60;
//			temp.hours++;
//			temp.minutes = minutesCheck;
//		}
//		else {
//			temp.minutes+= minutesCheck;
//		}
//
//		/*HOURS*/
//		int hoursCheck = this->hours + obj.hours;
//		if (hoursCheck >= 24) {
//			hoursCheck -= 24;
//			temp.hours = hoursCheck;
//		}
//		else {
//			temp.hours += hoursCheck;
//		}
//
//		return temp;
//	}
//	Time& operator-(const Time& obj) {
//		Time temp;
//
//		/*SECONDS*/
//		int secondsCheck = this->seconds - obj.seconds;
//		if (secondsCheck < 0) {
//			secondsCheck += 60;
//			temp.minutes--;
//			temp.seconds = secondsCheck;
//		}
//		else {
//			temp.seconds = secondsCheck;
//		}
//
//		/*MINUTES*/
//		int minutesCheck = this->minutes - obj.minutes;
//		if (minutesCheck <= 0) {
//			minutesCheck += 60;
//			temp.hours--;
//			temp.minutes -= minutesCheck;
//		}
//		else {
//			temp.minutes = minutesCheck;
//		}
//
//		/*HOURS*/
//		int hoursCheck = this->hours - obj.hours;
//		if (hoursCheck <= 0) {
//			hoursCheck += 24;
//			temp.hours = hoursCheck;
//		}
//		else {
//			temp.hours = hoursCheck;
//		}
//
//		return temp;
//	}
//	Time& operator++() {
//		Time temp;
//
//		/*SECONDS*/
//		int secondsCheck = this->seconds += 1;
//		if (secondsCheck >= 60) {
//			secondsCheck -= 60;
//			this->minutes++;
//			this->seconds = secondsCheck;
//		}
//		else {
//			this->seconds = secondsCheck;
//		}
//
//		/*MINUTES*/
//		int minutesCheck = this->minutes;
//		if (minutesCheck >= 60) {
//			minutesCheck -= 60;
//			this->hours++;
//			this->minutes = minutesCheck;
//		}
//		else {
//			this->minutes = minutesCheck;
//		}
//
//		/*HOURS*/
//		int hoursCheck = this->hours;
//		if (hoursCheck >= 24) {
//			hoursCheck -= 24;
//			this->hours = hoursCheck;
//		}
//		else {
//			this->hours = hoursCheck;
//		}
//		
//
//		return temp;
//		
//	}
//	Time& operator--() {
//		Time temp;
//
//		/*SECONDS*/
//		int secondsCheck = this->seconds -= 1;
//		if (secondsCheck < 0) {
//			secondsCheck += 60;
//			this->minutes--;
//			this->seconds = secondsCheck;
//		}
//		else {
//			this->seconds = secondsCheck;
//		}
//
//		/*MINUTES*/
//		int minutesCheck = this->minutes;
//		if (minutesCheck < 0) {
//			minutesCheck += 60;
//			this->hours--;
//			this->minutes = minutesCheck;
//		}
//		else {
//			this->minutes = minutesCheck;
//		}
//
//		/*HOURS*/
//		int hoursCheck = this->hours;
//		if (hoursCheck < 0) {
//			hoursCheck += 24;
//			this->hours = hoursCheck;
//		}
//		else {
//			this->hours = hoursCheck;
//		}
//
//		return temp;
//	}
//	bool operator==(Time& obj) {
//		return (this->hours == obj.hours && this->minutes == obj.minutes && this->seconds == obj.seconds);
//	}
//	bool operator!=(Time& obj) {
//		return (this->hours != obj.hours && this->minutes != obj.minutes && this->seconds != obj.seconds);
//	}
//	void print() {
//		cout << this->hours << ":" << this->minutes << ":" << this->seconds << endl;
//	}
//
//private:
//	int hours;
//	int minutes;
//	int seconds;
//};
//
//
//
//int main() {
//	Time time1(12,30,59);
//	Time time2(13,15,30);
//
//	/*ADD*/
//	Time time3 = time1 + time2;
//	time3.print();
//
//	/*SUBTRACT*/
//	Time time4 = time1 - time2;
//	time4.print();
//
//	/*++ OPERATOR*/
//	Time time5(23, 59, 59);
//	++time5;
//	time5.print();
//	
//	/*-- OPERATOR*/
//	Time time6(0,0,0);
//	--time6;
//	time6.print();
//
//	/*== OPERATOR*/
//	bool a = time6 == time5;
//	cout << a << endl;
//	
//	/*!= OPERATOR*/
//	bool b = time6 == time5;
//	cout << b << endl;
//
//
//
//	return 0;
//}