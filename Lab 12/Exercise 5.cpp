#include <iostream>

using namespace std;


template <class T>
class Pair {
private:
    T first;
    T second;

public:

    Pair() : first(T{}), second(T{}) {}

    Pair(T f, T s) : first(f), second(s) {}

    template <class U>
    friend ostream& operator<<(ostream& out, const Pair<U>& p) {
        out << "(" << p.first << ", " << p.second << ")";
        return out;
    }
};

template <class T, int N>
class Sequence {
private:
    T memblock[N];

public:
    Sequence() {
        for (int i = 0; i < N; ++i) {
            memblock[i] = T{};
        }
    }

    void setmember(int x, T value) {
        if (x >= 0 && x < N) {
            memblock[x] = value;
        }
        else {
            cout << "Error: Index out of bounds." << endl;
        }
    }

    T getmember(int x) {
        if (x >= 0 && x < N) {
            return memblock[x];
        }
        else {
            cout << "Error: Index out of bounds." << endl;
            return T{};
        }
    }
};

int main() {
    Pair<double> y(2.23, 3.45);
    Sequence<Pair<double>, 5> myPairs;
    myPairs.setmember(0, y);
    cout << "Value at index 0 (Pair): " << myPairs.getmember(0) << endl;
}

