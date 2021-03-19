#ifndef DTPARTIDA
#define DTPARTIDA
#include "DtFechaHora.h"
class DtPartida{
    private:
        DtFechaHora fecha;
        float duracion;
    public:
        DtPartida(DtFechaHora fecha, float duracion);
        ~DtPartDtFechaHora();
        float getDuracion();
        DtFechaHora getFecha();
};


#endif
