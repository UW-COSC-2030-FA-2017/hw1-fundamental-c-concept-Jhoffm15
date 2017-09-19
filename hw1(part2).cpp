#include <string>
#include <iostream>
using namespace std;

template <class T>
class example{
	T first, second;
public:
	example(T f, T s) {
		first = f;
		second = s;
	}
	T getLargest();
};

template <class T>
T example<T>::getLargest() {
	return(first > second ? first : second);
}

int main()
{
	example <int> ints(365, 779);
	cout << ints.getLargest() << endl;

	example <double> dubs(22.45, 1.33);
	cout << dubs.getLargest() << endl;
}


