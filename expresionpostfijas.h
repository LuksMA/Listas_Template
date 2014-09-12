#ifndef EXPRESIONPOSTFIJAS_H
#define EXPRESIONPOSTFIJAS_H

#include <string>
#include <sstream>

#include "listaed.h"
#include "Nodo.h"

using namespace std;

class ExpresionPostFijas
{
private:
    string alfabeto;

public:
    ListaED <char>operadores;
    ListaED  <string>operacion;
    ListaED  <int>numeros;

    ExpresionPostFijas(string cadena)
    {
        alfabeto = "*+-/()";
        for(unsigned int i = 0; i < (uint8_t)cadena.size(); i++)
        {
            if(this->isInAlf<char>(cadena[i]))
            {
                if(cadena[i] == ')'){

                    this->desapilarCP();
                }
                else if(this->isParentesisOn()){operadores.AddToLDETail(cadena[i]);}
                else {operadores.AddToLDETail(cadena[i]);}

            }else
            {
                stringstream ss;
                string s,a;
                char c = cadena[i];
                ss << c;
                ss >> s;

                    if(!this->isInAlf<char>(cadena[i-1])){
                            a = this->operacion.tail->info;
                            s = a + s;
                            operacion.DeleteFromLDETail();
                    }

                 operacion.AddToLDETail(s);
            }
        }
        this->desapilar();
        cout << operacion.index << endl;


    }

    int evaluar(){

        NodeDE<string> *tmp;

        int i = 0;

        for(tmp = operacion.head; tmp != 0; tmp = tmp->next)
        {
            bool a = (tmp->info == "*");
            bool b = (tmp->info == "/");
            bool c = (tmp->info == "-");
            bool d = (tmp->info == "+");
            int var;

            if(a){
                var = numeros.tail->prev->info * numeros.tail->info  ;
               // cout << "var: " << var << endl;
                numeros.DeleteFromLDETail();
                numeros.DeleteFromLDETail();
                numeros.AddToLDETail(var);}


            else if(b){
                var = numeros.tail->prev->info / numeros.tail->info ;
               // cout << "var: " << var << endl;
                numeros.DeleteFromLDETail();
                numeros.DeleteFromLDETail();
                numeros.AddToLDETail(var);
            }

            else if(c){
                var = numeros.tail->prev->info - numeros.tail->info ;
                numeros.DeleteFromLDETail();
                numeros.DeleteFromLDETail();
                numeros.AddToLDETail(var);
            }

            else if(d){
                var = numeros.tail->prev->info + numeros.tail->info ;
               // cout << "var: " << var << endl;
                numeros.DeleteFromLDETail();
                numeros.DeleteFromLDETail();
                numeros.AddToLDETail(var);
            }
            else{
               int b;
               b = atoi( tmp->info.c_str() );
             //  cout << "b: "<< b << endl;
               numeros.AddToLDETail(b);

            }



        };



    }

    template <typename Type>
    bool isInAlf(Type a){
        for(unsigned int i = 0; i < (uint8_t)alfabeto.size(); i++ )
        {
                if(alfabeto.at(i)== a)return true;
        }
        return false;
    }


    string getAllNumber(string subcadena)
    {
        string newCadena;
        int i = 0;
        while(!this->isInAlf<char>(subcadena[i]))
        {
            newCadena += subcadena[i];
            i++;
        }
        return newCadena;
    }
    void desapilarCP(){
       NodeDE<char> *tmp;

       int i = 1;
       for(tmp = operadores.tail; tmp->info != '('; tmp = tmp->prev )
        {
                stringstream ss;
                string s;
                char c = tmp->info;
                ss << c;
                ss >> s;

                operacion.AddToLDETail(s);
                i++;
        }
       for(int j = 0; j < i; j++){
            operadores.DeleteFromLDETail();
        }
    }
    void desapilar(){

        NodeDE<char> *tmp;

        int i = 0;
        for(tmp = operadores.tail; tmp != operadores.head ; tmp= tmp->prev)
        {
            stringstream ss;
            string s;
            char c = tmp->info;
            ss << c;
            ss >> s;

            operacion.AddToLDETail(s);
            i++;
        }
        stringstream ss;
        string s;
        char c = tmp->info;
        ss << c;
        ss >> s;
        operacion.AddToLDETail(s);

        for(int j = 0; j <= i; j++){
             operadores.DeleteFromLDETail();
         }


    }
    bool isParentesisOn(){
        NodeDE<char> *tmp;
        for(tmp = operadores.head; tmp !=0 ; tmp = tmp->next){
            if(tmp->info == '(') return true;
        }
        return false;

    }

};

#endif // EXPRESIONPOSTFIJAS_H
