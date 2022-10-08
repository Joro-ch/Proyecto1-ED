#include "Integer.h"

Integer::Integer() {
    this->v = new LinkedList<Array<int>*>();
    cadena = "";
}
Integer::Integer(string numero) {
    this->v = new LinkedList<Array<int>*>();
    parse(numero);
    cadena = numero;
}

Integer::Integer(Integer* i) {
    *this = i;
}
Integer::~Integer() {
    if (v) {
        delete v;
    }
}

// ------------------------------------------------------------

Integer* Integer::setLista(Integer* v) {
    try {
        if (v) {
            *this = v;
        }
        else {
            throw new exception();
        }
    }
    catch (exception ex) {
        cout << "Elemento invalido!!";
    }
    return this;
}

LinkedList<Array<int>*>* Integer::getLista() {
    return v;
}

Integer* Integer::setCadena(string cadena)
{
    this->cadena = cadena;
    return this;
}

string Integer::getCadena()
{
    return cadena;
}

// ------------------------------------------------------------

Integer* Integer::sumar(Integer* sumando) {
    Integer* resultado = new Integer();
    string aux1 = Util::invertirCadena(this->cadena);
    string aux2 = Util::invertirCadena(sumando->getCadena());
    string s = "";
    int tam1 = aux1.length();
    int tam2 = aux2.length();
    int tamMaximo = Util::tamMaximo(tam1, tam2);
    int suma = 0;
    int acarreo = 0;
    int i = 0;

    // Llenado de ceros
    // ----------------------------------------------------------

    for (i = tam1; i < tamMaximo; i++) {
        aux1[i] = '0';
    }
    for (i = tam2; i < tamMaximo; i++) {
        aux2[i] = '0';
    }

    // Sumando
    // ----------------------------------------------------------

    for (i = 0; i < tamMaximo; i++) {
        suma = (aux1[i] - '0') + (aux2[i] - '0') + acarreo;
        acarreo = 0;
        if (suma >= 10) {
            acarreo = 1;
            suma -= 10;
        }
        s[i] = suma + '0';
    }

    // Acarreo
    // ----------------------------------------------------------

    if (acarreo == 1) {
        s[i] = '1';
        i++;
    }

    s[i] = '\0';

    s = Util::invertirCadena(s);

    return new Integer(s);
}

Integer* Integer::restar(Integer* sustraendo) {
    try {
        if (sustraendo && v) {
            Integer* resultado = NULL;
            Array<int>* auxA = new Array<int>();



            return resultado;
        }
        else {
            throw new exception();
        }
    }
    catch (exception ex) {
        cout << "Elemento invalido!!";
    }
}
Integer* Integer::multiplicar(Integer* multiplicador) {
    try {
        if (multiplicador && v) {
            Integer* resultado = NULL;
            Array<int>* auxA = new Array<int>();



            return resultado;
        }
        else {
            throw new exception();
        }
    }
    catch (exception ex) {
        cout << "Elemento invalido!!";
    }
}
Integer* Integer::dividir(Integer* divisor) {
    try {
        if (divisor && v) {
            Integer* resultado = NULL;
            Array<int>* auxA = new Array<int>();



            return resultado;
        }
        else {
            throw new exception();
        }
    }
    catch (exception ex) {
        cout << "Elemento invalido!!";
    }
}

// ------------------------------------------------------------

Integer* Integer::funcionFactorial() {
    try {
        if (v) {
            Integer* resultado = NULL;



            return resultado;
        }
        else {
            throw new exception();
        }
    }
    catch (exception ex) {
        cout << "Elemento invalido!!";
    }
}
Integer* Integer::Fibonacci() {
    try {
        if (v) {
            Integer* resultado = NULL;



            return resultado;
        }
        else {
            throw new exception();
        }
    }
    catch (exception ex) {
        cout << "Elemento invalido!!";
    }
}
Integer* Integer::combinaciones() {
    try {
        if (v) {
            Integer* resultado = NULL;



            return resultado;
        }
        else {
            throw new exception();
        }
    }
    catch (exception ex) {
        cout << "Elemento invalido!!";
    }
}

// ------------------------------------------------------------

Integer* Integer::operator + (Integer* sumando) {
    return sumar(sumando);
}

Integer* Integer::operator - (Integer* sustraendo) {
    return restar(sustraendo);
}
Integer* Integer::operator * (Integer* multiplicador) {
    return multiplicar(multiplicador);
}
Integer* Integer::operator / (Integer* divisor) {
    return dividir(divisor);
}

// ------------------------------------------------------------

Integer* Integer::operator = (Integer* i) {
    try {
        if (i) {
            this->v = i->getLista();
            cadena = i->getCadena();
        }
        else {
            throw new exception();
        }
    }
    catch (exception ex) {
        cout << "Elemento invalido";
    }
    return this;
}
Integer* Integer::operator += (Integer* sumando) {
    return *this = this->sumar(sumando);
}
Integer* Integer::operator -= (Integer* sustraendo) {
    return *this = this->restar(sustraendo);
}
Integer* Integer::operator *= (Integer* multiplicador) {
    return *this = this->multiplicar(multiplicador);
}
Integer* Integer::operator /= (Integer* divisor) {
    return *this = this->dividir(divisor);
}

// ------------------------------------------------------------

bool Integer::operator == (Integer* i) {
    try {
        if (i) {
            return this->v == i->getLista();
        }
        else {
            throw new exception();
        }
    }
    catch (exception ex) {
        cout << "Elemento invalido!!";
    }
}
bool Integer::operator != (Integer* i) {
    return !(this == i);
}
bool Integer::operator < (Integer* i) {
    return true;
}
bool Integer::operator <= (Integer* i) {
    return true;
}
bool Integer::operator > (Integer* i) {
    return true;
}
bool Integer::operator >= (Integer* i) {
    return true;
}

// ------------------------------------------------------------

Integer* Integer::parse(string numero) {
    Array<int>* auxA = new Array<int>();
    int* digitos = new int(0);
    int aux = 0;
    int posInicio = 0;
    int posFinal = 4;
    string eachFour = "";

    if (numero.size() % 2 != 0) 
    {
        aux = (numero.size() / 4) + 1;
    }
    else {
        aux = (numero.size() / 4);
    }

    for (int i = 0; i < aux; i++) {
        eachFour = numero.substr(posInicio, posFinal);
        digitos = new int(stoi(eachFour));
        auxA->add(digitos);

        if (auxA->isFull()) {
            v->add(v->size(), new Array<int>*(auxA));
            auxA = new Array<int>();
        }
        posInicio += 4;
    }
    v->add(v->size(), new Array<int>*(auxA));

    return this;
}



// ------------------------------------------------------------

string Integer::toString() {
    stringstream s;
     s << v->toString();
    return s.str();
}

// ------------------------------------------------------------

int Integer::sumatoriaElementosArray(Array<int>* digitos)
{
    int resultado = 0;
    for (int i = 0; i < digitos->size(); i++) {
        resultado += *digitos->get(i);
    }
    return resultado;
}

Array<int>* Integer::sumarArrays(Array<int>* sumando1, Array<int>* sumando2)
{
    Array<int>* resultado = new Array<int>();
    int* digito = new int(0);
    int i = 0;

    for (int i = getMenorCantidadCeldas(sumando1, sumando2) - 1; i >= 0; i--) {
        resultado->add(new int(0));
    }

    return resultado;
}

int Integer::getMenorCantidadCeldas(Array<int>* i, Array<int>* x)
{
    if (i->size() <= x->size()) {
        return i->size();
    }
    else {
        return x->size();
    }
}

Array<int>* Integer::getDigitosArray(int numero)
{
    Array<int>* cifras = new Array<int>(4);

    while (numero > 0)
    {
        cifras->add(new int (numero % 10));
        numero = numero / 10;
    }
    return cifras;
}



