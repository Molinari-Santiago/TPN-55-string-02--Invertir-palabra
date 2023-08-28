#include<bits/stdc++.h>
using namespace std;
string InvertirPalabra(string palabra);
int main(){
	string p;
	 
	cout<<"ingrese palabra"<<endl;
	getline(cin, p);
	
	
	
	
	
	cout<<InvertirPalabra(p)<<endl;
	
	
	return 0;
}
string InvertirPalabra(string palabra){
int s= palabra.length(); 
string piv;
for (int i=s-1; i>=0; i--){
piv+=palabra[i];
}	 
return piv;	
}
