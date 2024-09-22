#include<iostream>
#include<string.h>
using namespace std;
/* int main() {
	char ch[100];
	cout<<"Enter string: "<<endl;
	gets(ch);
	int x = strlen(ch);
	cout<<x<<endl;
	cout<<ch<<endl;
	int count = 0;
	for(int i=0; i<=x; i++){
		if(ch[i]==' '){
			count++;
		}
	}
	int cnt = 0;
	for(int i=0; i<=x; i++){
		if(ch[i]=='a' || ch[i]=='e' || ch[i]=='i' || ch[i]=='o' || ch[i]=='u' ||
		 ch[i]=='A' || ch[i]=='E' || ch[i]=='I' || ch[i]=='O' || ch[i]=='U'  ){
			cnt++;
		}
	}
	int cntw = 0;
	bool spaceword = false;
	for(int i=0; i<=x; i++){
		if(ch[i]== ' '){
			spaceword = false;
		}
		else if(!spaceword){
			cntw++;
			spaceword=true;
		}
	}
	    bool duplicate[100] = {false}; // array to keep track of duplicate characters

	int cntdup = 0;
	for(int i=0; i!=x; i++){
		for(int j=i+1; j<=x; j++){
			if(ch[i]==ch[j] && !duplicate[i]) {
				cntdup++;
				duplicate[i] = true;
			}
		}
	}
	cout<<"space count: "<<count<<endl;
	cout<<"vowels count: "<<cnt<<endl;
	cout<<"word count: "<<cntw<<endl;
	cout<<"Duplicate characters count: "<<cntdup<<endl;
}
*/
