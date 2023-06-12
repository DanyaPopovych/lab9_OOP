#include "CMultiSet.h"
#include "CFixedPointNumber.h"
using namespace std;

template <typename T>
int FindElementInArray(T* array, int size, T element) {
	for (int i = 0; i < size; i++) {
		if (array[i] == element) {
			return i;
		}
	}
	return size;
}


int main() {

	CMultiSet<CFixedPointNumber> classMultiset;
	CFixedPointNumber value1(2, 45);
	CFixedPointNumber value2(2, 44);
	CFixedPointNumber value3(5, 80);
	CFixedPointNumber value4(4, 00);
	classMultiset.addElement(value1);
	classMultiset.addElement(value2);
	classMultiset.addElement(value3);
	classMultiset.addElement(value4);
	cout << "Output class multiset: " << classMultiset;

	cout << "Min: " << classMultiset.findMin() << endl;

	cout << "Sum: " << classMultiset.findSum() << endl;
	//cout << "Certain element: " << classMultiset.countOfCertainElement() << endl;
}