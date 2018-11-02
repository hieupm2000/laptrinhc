#include<iostream>
using namespace std;

void nhapmang(int A[], int &n) {
	cout << "Moi ban nhap vao n: ";
	cin >> n;

	for(int i = 0;i < n;i++) {
		cout << "A[" << i << "]=";
		cin >> A[i];
	}
}

int	max(int A[], int n) {
	int max = A[0];

	for (int i = 1; i < n; i++) {
		if(A[0] < A[i]) {
			max = A[i];
		}
	}

	return max;
}

main()
{
	int n,A[255];
	
	nhapmang(A, n);
	cout << "So lon nhat la: " << max(A, n);
}
		
	
	

