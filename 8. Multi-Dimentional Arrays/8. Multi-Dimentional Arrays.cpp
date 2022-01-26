#include<iostream>

using namespace std;

int main() {
	cout << "Tables!" << endl;
	cout << "=======" << endl;

	int arr[][10] = {
		{1,2,3,4,5,6,7,8,9,10},
		{2,4,6,8,10,12,14,16,18,20},
		{3,6,9,12,15,18,21,24,27,30},
		{4,8,12,16,20,24,28,32,36,40},
		{5,10,15,20,25,30,35,40,45,50}
	};

	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			cout << j+1 << " * " << i+1 << " = " << arr[i][j] << " |" << flush;
		}
		cout << " " << endl;
	}
		return 0;
}