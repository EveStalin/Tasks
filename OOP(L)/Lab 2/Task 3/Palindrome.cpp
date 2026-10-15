#include<iostream>
#include<string>
using namespace std;
int main(){
	string sen;bool palt = true; bool palf =false;
	cout<<"Please enter a sentence";
	getline(cin,sen);
	for (int i=0;i<sen.size()/2;i++){
		if(sen[i] != sen[sen.size()-1-i])
			palf =true;
		if(palf ==true)
			palt =false;
		break;
	}
	if(palf == true){
	cout<<"Not Palindrome"<<endl;}
	else
	cout<<"Palindrome"<<endl;
return 0;}
	