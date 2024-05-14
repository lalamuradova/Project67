#include<iostream>
#include<list> //double linked list
#include<forward_list> //single linked list
#include<vector> 
using namespace std;

//STL- Standart Template Library  -
//1. Data structures 
//2. Algorithms 
//3. Iterators

template<class T>
class Array {
	int size;
	T* arr;
public:
	template<class T>
	class Iterator {
		T* ptr;
	public:
		Iterator() : ptr(nullptr) {}
		Iterator(T* p) : ptr(p) {}

		Iterator& operator++() {
			ptr++;
			return *this;
		}

		Iterator& operator++(T) {
			ptr++;
			return *this;
		}

		Iterator& operator--() {
			ptr--;
			return *this;
		}

		Iterator& operator--(T) {
			ptr--;
			return *this;
		}

		bool operator!=(const Iterator& other) {
			return this->ptr != other.ptr;
		}

		T& operator*() {
			return *ptr;
		}
	};
	Array(int size) {
		this->size = size;
		arr = new T[size];
		for (int i = 0; i < size; i++) {
			arr[i] = rand() % 10;
		}
	}

	Iterator<T> Begin() {
		return Iterator<T>(arr);
	}

	Iterator<T> End() {
		return Iterator<T>(arr + size - 1);
	}
};

void main() {

#pragma region Arrays
	/*vector<int>numbers;
	numbers.push_back(9);
	numbers.push_back(777);
	numbers.push_back(13);
	numbers.push_back(256);
	numbers.push_back(751);*/

	//for (auto num : numbers)//foreach
	//{
	//	cout << num << endl;
	//}

	/*for (size_t i = 0; i < numbers.size(); i++)
	{
		cout << numbers[i] << endl;
	}*/

	//for (auto item = numbers.begin(); item < numbers.end(); item++)
	//{
	//	cout << *item << endl;
	//}


	//int* arr = new int[5] {9, 777, 751, 256, 13};
	//cout << *arr << endl;
	//cout << &arr[0] << endl;
	//cout << &arr[1] << endl;
	//cout << &arr[2] << endl;

	//cout << arr + 1 << endl;
	//cout << &arr[1] << endl;



	/*cout << *(arr + 2) << endl;*/
	/*cout << *(arr )+2 << endl;*/

#pragma endregion

	//list<int>l1;
	//forward_list<int>l2;

	////for (auto data : l1) {};
	////for (auto data : l2) {};

	//for (auto i = l1.begin(); i != l1.end(); i++) {};
	//for (auto i = l2.begin(); i != l2.end(); i++) {};
	////for (auto i = l2.begin(); i != l2.end(); i--) {};
	//for (auto i = l1.begin(); i != l1.end(); i--) {};
	
	/////////////////////////////////////////////////////////////////
	
	Array <int> arr(10);

	for (auto i = arr.Begin(); i !=arr.End(); i++)
	{
		cout << *i<<" ";
	}

	cout << endl << endl;

	auto i = arr.End();
	i--;
	for (; i != arr.Begin(); i--)
	{
		cout << *i << " ";
	}
	cout << *i << endl;

	

}
