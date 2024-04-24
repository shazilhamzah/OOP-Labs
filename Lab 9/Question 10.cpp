//#include <iostream>
//#include <string>
//using namespace std;
//
//class MenuItem {
//protected:
//    string name;
//    double price;
//
//public:
//    MenuItem(const string& n, double p) : name(n), price(p) {}
//
//    virtual double get_price() const {
//        return price;
//    }
//
//    virtual void display() const {
//       cout << name << ": $" << get_price() << endl;
//    }
//};
//
//class Appetizer : public MenuItem {
//public:
//    Appetizer(const string& n, double p) : MenuItem(n, p) {}
//
//    void display(){
//       cout << "Appetizer - ";
//        MenuItem::display();
//    }
//};
//
//class MainCourse : public MenuItem {
//public:
//    MainCourse(const string& n, double p) : MenuItem(n, p) {}
//
//    void display(){
//        cout << "Main Course - ";
//        MenuItem::display();
//    }
//};
//
//class Dessert : public MenuItem {
//public:
//    Dessert(const string& n, double p) : MenuItem(n, p) {}
//
//    void display(){
//        cout << "Dessert - ";
//        MenuItem::display();
//    }
//};
//
//int main() {
//    MenuItem** menu = new MenuItem * [3];
//    menu[0] = new Appetizer("Garlic Bread", 5.99);
//    menu[1] = new MainCourse("Sushi", 12.99);
//    menu[2] = new Dessert("Caramel Sundae", 7.49);
//
//    menu[0]->display();
//    menu[1]->display();
//    menu[2]->display();
//
//    for (int i = 0; i < 3; i++)
//    {
//        delete menu[i];
//    }
//    delete[]menu;
//
//
//    return 0;
//}
