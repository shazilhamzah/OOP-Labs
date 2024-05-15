//#include <iostream>
//#include <string>
//#include <stdexcept>
//using namespace std;
//
//double add(double a, double b) {
//    try {
//        // Check for NaN values manually
//        if (a != a || b != b) {
//            throw std::invalid_argument("Invalid arguments: NaN detected");
//        }
//        else {
//            return a + b;
//        }
//    }
//    catch ( exception& e) {
//       cerr << "Exception caught: " << e.what() << endl;
//        throw; 
//    }
//}
//
//int main() {
//    double a, b;
//    cout << "Enter two numbers: ";
//    cin >> a >> b;
//
//    try {
//        double result = add(a, b);
//        cout << "Sum: " << result << endl;
//    }
//    catch (...) {
//        cerr << "Unknown exception caught." << endl;
//    }
//
//    return 0;
//}
