//Ejercicio (factorial) 1*2*3*...*n 

#include <stdio.h>
#include<iostream>
#include <conio.h>

using namespace std;

int fact(int n){
	if(n==0)
	return 1;
	else 
	return n*fact(n-1);
}

int main(){
	int n;
	cout<<"ingresar un numero"<<endl;
	cin>>n;
	cout<<"el factorial de"<<n<< "es:"<<fact(n)<<"\n";
	getch();
}
