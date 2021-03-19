#ifndef DTPARTIDAINDIVIDUAL
#define DTPARTIDAINDIVIDUAL
#include "DtPartida.h" 
using namespace std;
int MAX_JUGADORES;
class DtPartidaMultijugador : public DtPartida{
    private:
        bool transmitidaEnVivo;
        **string nicknameJugadoresUnidos[MAX_JUGADORES];
        int cantidadJugadoresUnidos;
    public:
        DtPartidaMultijugador(DtFechaHora fecha, float duracion,bool transmitidaEnVivo);
        bool getTransmitidaEnVivo();
        **string getnickNameJugadoresUnidos();
        int getCantidadJugadoresUnidos();
        ~DtPartidaIndividual();
};


#endif