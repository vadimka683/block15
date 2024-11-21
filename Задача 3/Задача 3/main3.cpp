#include<iostream>
#include<vector>
using namespace std;

void input_array(vector<int>& arr) {
	int number = 0; int count = 0;
	while (number != -2) {
		cout << "Input number: ";
		cin >> number;
		if (count < 5) {
			if (number == -1) {
				cout << "Error";
				continue;
			}
			arr[count] = number;
			count++;
			continue;
		}
		for (int i = 0; i < 4; i++) {
			if (arr[i] > arr[i + 1]) {
				swap(arr[i], arr[i + 1]);
			}
		}
		if (number == -1) {
			cout << arr[4];
			continue;
		}
		if (arr[4] > number) {
			arr[4] = number;
		}
	}
}

int main() {
	vector<int> array(5);
	input_array(array);
}