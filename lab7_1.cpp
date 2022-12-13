#include<iostream>
#include<string>

using namespace std;

string func1(string x){
	int i = 0, L = x.size();
	string y = "";
	while(i < L){
		y += x[L-i-1];
		i++;
	}
	return y;
}

string func2(string x){
	int i = 0, L = x.size();
	string y = "";
	while(i < L){
		y += toupper(x[i]);
		i++;
	}
	return y;	
}

string func3(string x){
	int i = 0, L = x.size();
	string y = "";
	while(i < L){
		y += tolower(x[i]);
		i++;
	}
	return y;	
}

int main(){
	string z ; // z = ""
	string f ; // f = ""
    cout << "Input text:" ;
	cin >> z ; // z = "Mom"
	f = func1(z) ; // f = "moM"
    cout << "Reversed text:" << f ;

	string h ; // h = ""
	string k ; // k = ""
	k= func2(z); // k = "mom"
	h= func2(f);
	  
	
    cout << "\nPalindrome: " ;

	 if(k==h){
	  cout << "Yes" ;
	 }else{
	   cout << "No" ; 
	 }
    return 0;
}