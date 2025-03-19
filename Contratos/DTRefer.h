#include <string>
#include "DTFecha.h"
#include <list>

using namespace std;

class DTRefer
{
private:
    string DOI;
    string titulo;
    DTFecha fecha;
    list<string> autores;

public:
    DTRefer();
    ~DTRefer();
};

