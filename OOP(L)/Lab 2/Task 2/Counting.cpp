#include<iostream>
#include<string>
using namespace std;
int main(){
	string sen;
	int words(0),spaces(0);
	cout<<"Please enter a sentence";
	getline(cin,sen);
	for (int i=0;i<(int)sen.size();++i){
		if(sen[i] == ' ')
			spaces++;
		else if(sen[i] != ' ' || sen[i] != '\0')
			words++;
	}
	cout<<"Spaces are:"<<spaces<<endl;
	cout<<"Words are:"<<words<<endl;
return 0;}
	