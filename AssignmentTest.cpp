#include<iostream>
using namespace std;
//1)WRITE A CPP PROGRAM TO SWAP 2 VARIABLES WITHOUT USING 3RD VARIABLE.
/*void swap(int, int);
int main() {
	int a = 54, b = 14;
	cout<<"Before swapping: "<<a<<" "<<b<<endl;
	swap(a, b);
}
void swap(int a, int b) {
	a = a+b;
	b = a-b;
	a = a-b;
	cout<<"After swaping: "<<a<<" "<<b;
	
} 
*/

//2.WRITE A CPP PROGRAM TO CHECK WHETHER THE GIVEN NUMBER IS PALINDROM OR NOT
/*
bool isPalindrome(int n) {
    int a = 0;
    int b = n;

    while (n != 0) {
        int dig = n % 10;
        a = a * 10 + dig;
        n /= 10;
    }

    return b == a;
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    if (isPalindrome(num)) {
        cout << num << " is a palindrome." << endl;
    } else {
        cout << num << " is not a palindrome." << endl;
    }

    return 0;
}
*/
/*
bool isPrime(int n) {
    if (n <= 1) 
	return false;
	
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) 
		
		return false;
    }
    return true;
}

int main() {
    int count = 0;
    int num=2;
    cout << "The first 25 prime numbers are: ";
    while (count < 25) {
        if (isPrime(num)) {
            cout << num << " ";
            count++;
        }
        num++;
    }                                   
    cout << endl;

    return 0;
}
*/
/*
//Factorial number from 5 to 8
int main() {
	int sum = 1;
	for(int i=5; i<=8; i++){
		 sum *= i;
	}
	cout<<sum;
}
*/

//WRITE A CPP PROGRAM TO DISPLAY SUMMATION OF  EVEN AND ODD NUMBERS IN AN ARRAY OF INTEGERS
/* int main(){
	int evensum=0, oddsum=0;
	int arr[5] = {1, 2, 3, 4, 5};
	for(int i=0; i<=5; i++){
		if(arr[i]%2 == 0) {
			evensum += arr[i];
		}
	}
	for(int i=0; i<=5; i++){
		if(arr[i]%2!=0){
			oddsum += arr[i];
		}
	}
	cout<<evensum<<" "<<oddsum<<endl;
	
	
}
*/


//WRITE A CPP PROGRAM TO CHANGE THE CASE OF EACH CHARACTER IN A GIVEN STRING.
/* #include<string.h>
int main() {
	char ch[30] = "hi i am string";
	for(int i=0; i<=30; i++){
		ch[i] = toupper(ch[i]);
	}
	cout<<ch;
}
*/

//C++ Program to Find number of Digits in any number
/*
int main() {
	int n;
	cout<<"Enter a number: "<<endl;
	cin>>n;
	int dig = 0;
	while(n!=0) {
		n/=10;
		dig++;
	}
	cout<<dig<<endl;
}
*/




//C++ Program to Reverse a Number
/*
int main() {
	int a;
	cout<<"Enter a number: "<<endl;
	cin>>a;
	int rev = 0;
	while (a != 0) {
        int dig = a % 10;
        rev = rev * 10 + dig;
        a /= 10;
    }
    cout<<rev;
}
*/




//C++ Program to remove all special characters from a given string.

#include<string.h>
int main() {
	char str[] = "Hello World &*()^%";
	int x = strlen(str);
	char result[x + 1]; 
	int j = 0; 
	for (int i = 0; i < x; i++) { 
	    if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= '0' && str[i] <= '9') || str[i] == ' ') {
		result[j] = str[i];
        j++;
    }
}

result[j] = '\0'; 

cout << "String after removing special characters: " << result << endl;
}
