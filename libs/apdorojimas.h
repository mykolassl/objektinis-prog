#pragma once

#include "studentas.h"
#include <deque>
using std::deque;

void skaityti_faila();
void ivesti_ranka();
void isvesti_faila(deque<Studentas>& , string );
void generuoti_failus();
void pildyti(Studentas& , bool& , int );
void spausdinti(const Studentas );
void dalinimas_1(deque<Studentas>& , deque<Studentas>& , deque<Studentas>& );
void dalinimas_2(deque<Studentas>& , deque<Studentas>& );