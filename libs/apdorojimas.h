#pragma once

#include "studentas.h"
#include <list>
using std::list;

void skaityti_faila();
void ivesti_ranka();
void isvesti_faila(list<Studentas>& , std::string );
void generuoti_failus();
void pildyti(Studentas& , bool& , int );
void spausdinti(const Studentas );
void dalinimas_1(list<Studentas>& , list<Studentas>& , list<Studentas>& );
void dalinimas_2(list<Studentas>& , list<Studentas>& );