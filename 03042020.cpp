#include <iostream>
using namespace std;

void swap(int a, int b) {
	int temp = a;
	a = b;
	b = temp;
}
void swap(int* a, int* b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}
void swapRef(int& a, int& b) {
	int temp = a;
	a = b;
	b = temp;
}
void Show(int a) {
	cout << "void Show(int a)" << a << endl;
}
void Show(int* a) {
	cout << "void Show(int *a)" << a << endl;
}

void Test1() {
	cout << "2\n";
	int* p = new int(555);
	cout << p << endl;
	cout << *p << endl;
	*p = 100;
	cout << *p << endl;
	delete p;
}

int* createArr(size_t n) {
	int* mas = new int[n] {0};
	return mas;
}
void deleteArr(int* p) {
	delete[] p;
}
void PrintArr(int* p, int size) {
	for (size_t i = 0; i < size; i++)
	{
		//cout << p[i] << '\t';
		//cout << *(p+i) << '\t';
		cout << *(p++) << '\t';

	}
	cout << '\n';
}

int* Push(int* p, int& size, int el) {

	int* mas = createArr(size + 1);
	for (size_t i = 0; i < size; i++)
		*(mas + i) = *(p + i);//	mas[i] =p[i];
	mas[size] = el;
	size++;
	delete[] p;
	return mas;
}
void Push2(int*& p, int& size, int el) {

	int* mas = createArr(size + 1);
	for (size_t i = 0; i < size; i++)
		*(mas + i) = *(p + i);//	mas[i] =p[i];
	mas[size] = el;
	size++;
	delete[] p;
	p = mas;

}

void Test2() {
	int n;
	cout << "Input size array = ";
	cin >> n;
	int* arr = createArr(n);
	*arr = 10;
	*(arr + 1) = 20;
	cout << arr << endl;
	cout << arr + 1 << endl;
	PrintArr(arr, n);
	arr = Push(arr, n, 13);
	PrintArr(arr, n);
	cout << arr << endl;
	cout << arr + 1 << endl;
	Push2(arr, n, 999);
	PrintArr(arr, n);

	deleteArr(arr);
}


int main() {
	Test2();
	//cout << "1\n";
	//Test1();
	//cout << "3\n";

	//{
	///*	double c1 = 10.90, c2 = 20.65;
	//	int x = 100, y = 200;
	//	x = 30;
	//	cout << c1 << "->" << &c1 << endl;
	//	cout << c2 << "->" << &c2 << endl;
	//	cout << x << "->" << &x << endl;
	//	cout << y << "->" << &y << endl;

	//	int* px = &x;
	//	cout << "px->" << px << endl;
	//	cout << "&px->" << &px << endl;
	//	px = &y;
	//	cout << "px->" << px << endl;
	//	cout << "&px->" << &px << endl;
	//	x = 300;
	//	px = &x;
	//	*px = 500;
	//	cout << "x->" << x << endl;*/
	//}
	//{
	//	int x = 100, y = 200, z;
	//	int* px = &x;
	//	int* py = &y;
	//	int* pz = &z;
	//	*pz = *px + *py;
	//	cout << z<<endl;

	//}

	//{
	//	int x = 100;
	//	int* px = &x;
	//	int** ppx=&px;
	//	cout << **ppx<<endl;
	//}

	//{
	//	const int x = 100;
	//	const int * px = &x;
	//	int const * px2 = &x;
	//	cout << *px << endl;
	//	cout << *px2 << endl;
	//}

	//{
	//	 int x = 100;
	//	 int y = 200;

	//	const int * px = &x;
	//	//*px = 500;
	//	cout << *px << endl;
	//	px = &y;
	//	cout << *px << endl;
	//}
	//{
	//	int x = 100;
	//	int y = 200;
	//	int * const px = &x;
	//	*px = 500;
	//	cout << *px << endl;
	//	//px = &y;// -error
	//	cout << *px << endl;
	//}
	//{
	//	int x = 100;
	//	int y = 200;
	//	const int* const px = &x;
	//	//*px = 500;// -error
	//	cout << *px << endl;
	////	px = &y;// -error
	//	cout << *px << endl;
	//}

	//{
	//	int x = 100;
	//	int y = 200;
	//	const int* const px = &x;
	//	//*px = 500;// -error
	//	cout << *px << endl;
	//	//	px = &y;// -error
	//	cout << *px << endl;
	//}


	//{
	//	int a = 10, b = 20;
	//	int* pA;
	//	pA=NULL;
	//	int* pB=nullptr;
	//	int* pc=0;
	//	Show(a);
	//	Show(NULL);
	//	Show(nullptr);
	//	int& refA = a;
	//	cout << refA << endl;
	//	refA = 333;
	//	cout << a << endl;
	//	const int& refB = b;
	//	//refB = 555; error

	//	swap(a, b);
	//	cout << a << "\t" << b << endl;
	//	swap(&a, &b);
	//	cout << a << "\t" << b << endl;
	//	swapRef(a, b);
	//	cout << a << "\t" << b << endl;


	//}


	return 0;
}
