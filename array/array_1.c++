#include <iostream>
#include <vector>
using namespace std;

int main() {
	int n;
	cout << "Enter number of elements: ";
	cin >> n;
	vector<int> arr(n);
    // int n = 5;
    // int arr[5];

	cout << "Enter elements: ";
	for (int i = 0; i < n; ++i) {
		cin >> arr[i];
	}
    // logic for finding maximum and minimum in an array
	int max = arr[0];
	int min = arr[0];
	for (int i = 1; i < n; ++i) {
		if (arr[i] > max) 
            max = arr[i];
		if (arr[i] < min) 
            min = arr[i];
	}
	cout << "Maximum: " << max << endl;
	cout << "Minimum: " << min << endl;
	return 0;
}
