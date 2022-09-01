#include<iostream>

using std::cout;
using std::cin;
using std::endl;

void prt_array(int numbers[], size_t size);   //passing array and size to the function.

//void zero_array(int numbers[], size_t size) { //turns all the elements to zeros.
//	for (size_t i{ 0 }; i < size; ++i)
//		numbers[i] = 0;
//}

int main() {
	int my_nums[]{ 1,2,3,4,5,6,7,8,9 };
//	zero_array(my_nums, 9);
	prt_array(my_nums, 9);
	return 0;
}

void prt_array(int numbers[], size_t size) {
	for (size_t i{ 0 }; i < size; ++i)
		cout << numbers[i] << " ";
}