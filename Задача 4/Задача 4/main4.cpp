#include<iostream>
#include<vector>
using namespace std;

void input_abs(vector<int>& arr) {
	int i = 0;
	while (arr[i] < 0) {
		i++;
	}
	int count = 1;
	cout << arr[i] << " ";
	int right = 1;
	int left = 1;
	bool flag = true;
	while ((i + right != arr.size() || i - left != 0) && (i + right != arr.size() - 1 || i - left != -1)){
		if (abs(arr[i - left]) < abs(arr[i + right])) {
			if (i - left > 0) {
				cout << abs(arr[i - left]) << " ";
				left++;
			}
			else if (i - left == 0 && flag == true) {
				cout << abs(arr[i - left]) << " ";
				flag = false;
			}
			else {
				cout << abs(arr[i + right]) << " ";
				right++;
			}
		}
		else {
			if (i + right < arr.size() - 1) {
				cout << abs(arr[i + right]) << " ";
				right++;
			}
			else if (i + right == arr.size() - 1 && flag == true) {
				cout << abs(arr[i + right]) << " ";
				flag = false;
			}
			else {
				cout << abs(arr[i - left]) << " ";
				left++;
			}
		}
	}
}

int main() {
	vector<int> array = { -15,-10,-5,1,50,100 };
	input_abs(array);
}