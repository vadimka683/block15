#include<iostream>
#include<vector>
using namespace std;

void search(vector<int>& arr) {
	int max = 0;
	int max_i = 0, max_j = 0;
	for (int i = 0; i < arr.size(); i++) {
		int sum = arr[i];
		for (int j = i + 1; j < arr.size(); j++) {
			sum += arr[j];
			if (sum > max) {
				max = sum;
				max_j = j;
				max_i = i;
			}
		}
	}
	cout << max << " " << max_i << " " << max_j;
}

int main() {
	vector<int> array = {-2, -1, -3, 4, -1, 2, 1, -5, 4};
	search(array);
}