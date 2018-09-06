#include <stdio.h>
#include <iostream>

using namespace std;

int main(){
	int a = 10;
	cout << "Value a: " << a << endl;
	cout << "Address &a: " << &a << endl;


	/*--------------
	pointer1
	---------------*/
	int *pointer1_to_a; //not initialized
	cout << "Pointer1: " << pointer1_to_a << endl;
	//cout << "Value at Pointer1: " << *pointer1_to_a << endl; // might be segmentations fault
	pointer1_to_a = &a;
	cout << "Value at Pointer1: " << *pointer1_to_a << endl;
	cout << "Value at next to Pointer1: " << *(pointer1_to_a + 1) << endl;

	/*--------------
	pointer2
	---------------*/
	int *pointer2_to_a = NULL; // initialized with NULL
	cout << "Pointer2: " << pointer2_to_a << endl;
	// cout << "Value at Pointer2: " << *pointer2_to_a << endl; //will give you segmentation fault
	// when your program attempts to access memory it has either not been assigned by 
	// the operating system, or is otherwise not allowed to access
	cout << "Pointer2 to a" << endl;
	pointer2_to_a = &a;
	cout << "Value at Pointer2: " << *pointer2_to_a << endl;


	/*-------------------
	Pointer to pointer
	--------------------*/
	int **pointer_to_pointer = NULL;
	// cout << "pointer_to_pointer: " << pointer_to_pointer << endl; // again segmentation fault
	pointer_to_pointer = &pointer1_to_a;
	cout << "&pointer1_to_a: " << &pointer1_to_a << endl;
	pointer_to_pointer = &pointer1_to_a;
	cout << "pointer_to_pointer: " << pointer_to_pointer << endl;
	cout << "Value at pointer_to_pointer: " << *pointer_to_pointer << endl;
	cout << "Value at pointer_to_pointer's pointer: " << **pointer_to_pointer << endl;


	/*------------------
	pointer casting to char
	------------------*/
	/*
	char str1 = 'H';
	cout << "(char *)str1: " << (char *)str1 <<endl;

	char *pointer3 = NULL;
	pointer3 = (char *)str1;
	cout << "(char *)str1: " << pointer3 <<endl;
	*/


	/*------------------
	pointer to char array
	------------------*/

	char str2[] = "Hello";
	char *pointer4 = NULL;
	pointer4 = (char *)str2;
	cout << "(char *)str2: " << (char *)str2 <<endl;
	cout << "(char *)str2: " << pointer4 <<endl;

	/*
	int *pointer3 = NULL;
	pointer3 = (intptr_t)a;
	//cout << "(int *)a" << (int *)a << endl;
	cout << "(int *)a" << pointer3 << endl;
	*/

	return 0;
}