#include <iostream>
using namespace std;
int timTrongMang(int A[], int n, int k)
{
	for(int i = 0; i < n; i++)
	{
		if(A[i] == k)
			return true;
	}
	return false;
}
void nhapMang(int A[], int &n)
{
	cin >> n;
	for(int i = 0; i < n; i++)
	{
		cout << "Moi ban nhap vao gia tri thu " << i + 1 << ": ";
		cin >> A[i];
	}
}
void run()
{
	int A[255], n, k;
	nhapMang(A, n);
	cin >> k;
	if(timTrongMang(A, n, k) == true)
	{
		cout << "Yes";
	}
	else
	{
		cout << "No";
	}
}
main()
{
	run();
}
