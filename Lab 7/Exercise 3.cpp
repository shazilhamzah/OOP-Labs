//#include<iostream>
//using namespace std;
//
//class Distance
//{
//public:
//	Distance() {
//		dist = 0;
//	}
//	Distance(int a) {
//		dist = a;
//	}
//	bool operator<(const Distance& obj) { return this->dist < obj.dist; }
//	bool operator>(const Distance& obj){ return this->dist > obj.dist; }
//	bool operator<=(const Distance& obj){ return this->dist <= obj.dist; }
//	bool operator>=(const Distance& obj){ return this->dist >= obj.dist; }
//	Distance& operator+=(int a) { Distance temp(a + 1); return temp; }
//	Distance& operator-=(int a){ Distance temp(a - 1); return temp; }
//	void display() { cout << this->dist << endl; }
//
//private:
//	int dist;
//};
//
//
//
//
//
//
//int main() {
//	Distance dist1(1);
//	Distance dist2(1);
//
//	bool x = dist1 > dist2;
//	cout << x;
//	
//	cout << endl;
//	bool y = dist1 < dist2;
//	cout << y;
//	
//	cout << endl;
//	bool z = dist1 <= dist2;
//	cout << z;
//	
//	cout << endl;
//	bool a = dist1 >= dist2;
//	cout << a;
//
//	dist1 += 1;
//	dist2 -= 3;
//
//	cout << endl;
//	dist1.display();
//	dist2.display();
//
//
//	return 0;
//}