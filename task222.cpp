// CPP program to find the occurrences of
// character x in the infinite repeated string
// upto length n
#include <bits/stdc++.h>
using namespace std;

// Function to count the character 'a'
int countChar(string str, char x)
{
	int count = 0, n = 10;
	for (int i = 0; i < str.size(); i++)
		if (str[i] == x)
			count++;

	// atleast k repetition are required
	int repetitions = n / str.size();
	count = count * repetitions;

	// if n is not the multiple of the string size
	// check for the remaining repeating character.
	for (int i = 0; i < n % str.size(); i++) {
		if (str[i] == x)
			count++;
	}

	return count;
}

// Driver code
int main()
{
	string str = "abcac";
	cout << countChar(str, 'a');
	return 0;
}

// This code is contributed by Surendra_Gangwar

