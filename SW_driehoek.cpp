/*
 * SW_driehoek.cpp
 *
 *  Created on: 23 Aug 2014
 *      Author: sander
 *      Implementatie van class driehoek, Testing Eclipse, Li3nux and git as part of study
 */


#include <iostream>
#include <string.h>
#include <math.h>
#include "SW_driehoek.hpp"

using namespace std;


	void driehoek::invoer(double *hor, double *ver, double *sch){
		this->hor=*hor;
		this->ver=*ver;
		this->sch=*sch;
		pythagoras(); //bereken de werkelijke schuine zijde op basis van de horizontale en verticale zijde
	}
	void driehoek::weergave(){
		cout<<"horizontale zijde is :"<<hor<<endl;
		cout<<"verticale zijde   is :"<<ver<<endl;
		cout<<"schuine zijde     is :"<<sch<<endl;
	}

	bool driehoek::test_rechthoek(){
		if(sch==pythagoras())
	return true;
			else
	return false;
	}


int main(void){
	double hor, ver, sch, werkelijke_schuine_zijde;

	driehoek drie;

	cout<<"horizontale zijde :"; cin>>hor;
	cout<<"verticale zijde :"; cin>>ver;
	cout<<"schuine zijde :"; cin>>sch;

	drie.invoer(&hor, &ver, &sch);
	drie.weergave();
	if(drie.test_rechthoek()){
		cout<<"dit is een rechtehoekige driehoek"<<endl;
		cout<<"de werkelijk schuine zijde zou moeten zijn :"<<drie.werkelijke_schuine_zijde<<endl;
	}
	else{
		cout<<"dit is geen rechtehoekige driehoek"<<endl;
		cout<<"de werkelijk schuine zijde zou moeten zijn :"<<drie.werkelijke_schuine_zijde<<endl;
	}
}
