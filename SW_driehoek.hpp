/*
 * SW_driehoek.hpp
 *
 *  Created on: 23 Aug 2014
 *      Author: sander
 *      class driehoek interface
 *      Implementatie van class driehoek, Testing Eclipse, Li3nux and git as part of study
 */

class driehoek{
private:

	double hor;
	double ver;
	double sch;

public:
	double werkelijke_schuine_zijde;

private:
	double pythagoras(){
		werkelijke_schuine_zijde=sqrt( (pow (hor, 2.0) + pow (ver, 2.0) ) );//bereken de werkelijke schuine zijde op basis van de horizontale en verticale zijde
		return werkelijke_schuine_zijde;
	}


public:

	void invoer(double *hor, double *ver, double *sch);
	void weergave();
	bool test_rechthoek();

};
