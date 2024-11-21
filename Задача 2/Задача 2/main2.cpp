#include<iostream>
#include<vector>
using namespace std;

void search(vector<int>& arr, int res) {
	for (int i = 0; i < arr.size(); i++) {
		for (int j = i + 1; j < arr.size(); j++) {
			if (arr[i] + arr[j] == res) {
				cout << arr[i] << " " << arr[j];
				return;
			}
		}
	}
}

int main() {
	vector<int> array = {8, 8, 11, 2, 3, 5, 7};
	int reselt = 9;
	search(array,reselt);
}