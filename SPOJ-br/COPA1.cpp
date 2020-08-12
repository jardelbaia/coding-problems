/*
		https://br.spoj.com/problems/COPA1/
*/
#include <bits/stdc++.h>

using namespace std;

int main () {
	
	queue<char> fila;
		
	for (int a=0; a<16; a++) {
		fila.push('A'+a);	
	
	}	
	int c,d;	
	for (int a=0;a<15;a++) {
		cin >> c >> d;
		if (c>d	) { 
			fila.push(fila.front());
			fila.pop();	
			fila.pop();
		}			
		else {
			fila.pop();
			fila.push(fila.front());
			fila.pop();
		} 			
	}

	cout << fila.front() << endl;

	return 0;
} 
