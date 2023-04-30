#include<iostream>
#include<vector>

using namespace std;


vector<int> reverse(vector<int>&ans){
	int start = 0;
	int end = ans.size()-1;
	while(start < end){
		swap(ans[start], ans[end]);
		start++;
		end--;
	}
	return ans;
}

vector<int> findArraySum(vector<int>&a, int n, vector<int>&b, int m) {
	int i = a.size()-1;
	int j = b.size()-1;

	int carry = 0;

	vector<int> ans;

	// Case One
	while(i >= 0 && j >= 0){
		// int value1 = a[i];
		// int value2 = b[i];
		int sum = a[i] + b[j] + carry;
		// Formula to find carry
		carry = sum/10;
		// Formula to find reminder
		int reminder = sum%10;

		ans.push_back(reminder);
		i--;
		j--;
	}

	// Case Two
	while(i >= 0){
		int sum = a[i] + carry;
		// Formula to find carry
		carry = sum/10;
		// Formula to find reminder
		int reminder = sum%10;

		ans.push_back(reminder);
		i--;		
	}

	// Case Three
	while(j >= 0){
		int sum = b[j] + carry;
		// Formula to find carry
		carry = sum/10;
		// Formula to find reminder
		int reminder = sum%10;

		ans.push_back(reminder);
		j--;		
	}

	// Case Four
	while(carry != 0){
		int sum = carry;
		// Formula to find carry
		carry = sum/10;
		// Formula to find reminder
		int reminder = sum%10;

		ans.push_back(reminder);				
	}

	// Reversing Vector 
	vector<int> reversedArray = reverse(ans);
	return reversedArray;
}