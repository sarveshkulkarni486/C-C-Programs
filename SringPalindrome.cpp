//string palindrome
#include<iostream>
#include<string.h>
using namespace std;
int main(){
	char ch[10] = "Sarvesh";
	int len = strlen(ch);
	char ch1[len];
	for(int i=len; i>=0; i--){
		ch1 = ch[i];
	}
	for(int i=0; i<strlen(ch1); i++){
		cout<<ch1;
	}
}
