#ifndef DTPARTIDAINDIVIDUAL
#define DTPARTIDAINDIVIDUAL
#include "DtPartida.h" 
using namespace std;
class DtPartidaIndividual : public DtPartida{
    private:
        bool continuarPartidaAnterior;
    public:
        DtPartidaIndividual(DtFechaHora fecha, float duracion,bool continuarPartidaAnterior );
        bool getContinuarPartidaAnterior();
        ~DtPartidaIndividual();
};


#endif