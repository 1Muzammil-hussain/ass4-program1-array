/*
Name:
					Muzammil Hussain
Department:
   					BS-Data Science
Session:
					2022 - 2026
Subject:
					Programming Foundament

Semester:
					1st
*/
#include<iostream>
using namespace std;
int main()
{
	int n[10],j,s=0;
	for(j=0;j<10;j++)
	{
		cout<<"enter the numbers:";
		cin>>n[j];
		
	}	
		for(j=0;j<10;j++)
	{
		if(j==3) 
		continue;
		if(j==5)
		continue;
		s=s+n[j];
		
	}
	cout<<"sum:"<<s;
}
	