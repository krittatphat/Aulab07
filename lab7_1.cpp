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
    string a , b , c , d ;
    cout << "Input text: " ;
    cin >> a ;
    b = func3(a) ;
    cout << "Reversed text: " ;
    c = func1(a) ;
    d = func1(b) ;
    cout << c << "\n" ;
    cout << "Palindrome: " ;
    if(b==d)
    {
        cout << "Yes" << "\n" ;
    }
    else
    {
        cout << "No" << "\n" ;
    }
    return 0;
}
