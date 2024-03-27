//#include <iostream>
//#include <string> 
//
//using namespace std;
//
//class StringHolder {
//public:
//    StringHolder();  
//    StringHolder(const char*); 
//    StringHolder(const StringHolder&);
//    StringHolder(const StringHolder&, int);
//    void display();
//    //~StringHolder();
//
//private:
//    char* string_ptr = new char[100];
//};
//
//StringHolder::StringHolder() {
//    cout << "\nDefault constructor called!" << endl;
//    string_ptr = new char[100];
//    string_ptr[0] = '\0';
//}
//
//StringHolder::StringHolder(const char* a) {
//    cout << "Parameterized constructor called!" << endl;
//    int len = strlen(a);
//    string_ptr = new char[len + 1];
//
//    for (int i = 0; i < len; i++) {
//        string_ptr[i] = a[i];
//    }
//    string_ptr[len] = '\0'; 
//}
//
//StringHolder::StringHolder(const StringHolder& s) {
//    cout << "Deep Copy constructor called!" << endl;
//    int len = strlen(s.string_ptr);
//    string_ptr = new char[len + 1]; 
//
//    for (int i = 0; i < len; i++) {
//        string_ptr[i] = s.string_ptr[i];
//    }
//    string_ptr[len] = '\0'; 
//}
//
//StringHolder::StringHolder(const StringHolder& s,int a) {
//    cout << "Shallow Copy constructor called!" << endl;
//    string_ptr = s.string_ptr;
//}
//
//void StringHolder::display() {
//    for (int i = 0; i < strlen(string_ptr); i++) {
//        cout << string_ptr[i];
//    }
//}
//
//int main() {
//    char* str = new char[100];
//    cout << "Enter string: ";
//    cin.getline(str, 100);
//
//    StringHolder string1(str);
//    StringHolder string2(string1);
//    StringHolder string3(string1,1);
//
//    cout << "\n\nString 1: ";
//    string1.display();
//
//    cout << "\n\nString 2: ";
//    string2.display();
//
//    cout << "\n\nString 3: ";
//    string3.display();
//
//   
//
//    cout << "\n\nDestructor called!" << endl;
//    return 0;
//}
//
