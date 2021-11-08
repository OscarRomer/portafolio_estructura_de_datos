#include <iostream>
#include <regex>
#include <iterator>
#include <string>
#include <vector>
#include <cctype>
#include <algorithm>
#include <windows.h>
#include "pila.hpp"
#include "cola.hpp"
//Oscar Alejandro Romero Gonzalez
using namespace std;
bool evaluarPalindomo(string textoevaluar);
void HTML();
void Palindromo();
bool evaluarEtiquetas(string);

int main() {
	int opcion;
    bool R = true;
    
    do {
        
        cout << "\n Opciones:" << endl;;
        cout << "\n1. Evaluacion de balanceo de Etiquestas HTML" << endl;
        cout << "\n2. Verificar si la palabra es palindromo" << endl;
        cout << "\n0. SALIR" << endl;
        
        cout << "\n\tDigite una opcion: ";
        cin >> opcion;
        cout << endl;
        switch (opcion) {
            case 1:
				HTML();     	
                cout << endl;
			    break;
                
            case 2:
                Palindromo();
                cout << endl;
				break;       
            case 0:
            	R = false;
            	break;
        }        
    } while (R);
	
	return 0;
}

//------------------------------------------------------------------------------------------------------------
bool evaluarPalindomo(string textoevaluar){
	
	char letra;
	string palabraPila;
	string palabraLetra;
	
	Pila<char> pilaLetra;
	Cola<char> colaLetra;
	

	for(int i = 0; i < textoevaluar.length(); i++){
		letra = textoevaluar[i];
		pilaLetra.push(letra);
		colaLetra.enqueue(letra);
	}
	

	for(int i = 0; i < textoevaluar.length(); i++){		
		palabraPila += pilaLetra.pop();
		palabraLetra += colaLetra.dequeue();
	}
		if(palabraPila == palabraLetra){
			cout << "Palabra al reves: " << palabraPila << endl;
			cout << "Palabra al derecho: " << palabraLetra << endl;
		return true;
	}else{
			cout << "Palabra al reves: " << palabraPila << endl;
			cout << "Palabra al derecho: " << palabraLetra << endl;
		return false;
	}
}

void Palindromo(){
	string textooriginal;
	string textoevaluar;
	cout<<"ingrese la palabra a evaluar: "<< endl;
	cin>> textooriginal;
	
	textoevaluar = textooriginal;
	
	textoevaluar.erase(std::remove(textoevaluar.begin(), textoevaluar.end(), ' '), textoevaluar.end());
	textoevaluar.erase(std::remove_if(textoevaluar.begin(), textoevaluar.end(), [](unsigned char c) { return std::ispunct(c); }), textoevaluar.end()); 
	textoevaluar.erase(std::remove_if(textoevaluar.begin(), textoevaluar.end(), [](unsigned char c) { return std::isdigit(c); }), textoevaluar.end()); 
	transform(textoevaluar.begin(), textoevaluar.end(), textoevaluar.begin(), [](unsigned char c){ return toupper(c); });

 for (int i = 0; i < textoevaluar.length(); i++) {
    
    textoevaluar[i] = toupper(textoevaluar[i]);
  }

	cout << endl;

	if(evaluarPalindomo(textoevaluar)){
		cout << "La palabra ingresada: '" << textoevaluar << "'es un Palindromo" << endl;
	}else{
		cout << "La palabra ingresada: '" << textoevaluar << "' NO es un Palindromo" << endl;
	}

}


//--------------------------------------------------------------------------------------------------------------
bool evaluarEtiquetas(string caadena){
	Pila<string> pilaEtiquetas;
	
	const std::string s = caadena;

	
	std::regex words_regrex("<\\w+>|</\\w+>");
	
	 auto words_begin = std::sregex_iterator(s.begin(), s.end(), words_regrex); 
	 auto words_end = std::sregex_iterator();
	

	
	for(std::sregex_iterator i = words_begin; i != words_end; ++i){
		std::smatch match = *i; 
		std::string match_str = match.str();
		
		if(match_str.substr(0,2) == "</"){
			if(pilaEtiquetas.estaPilaVacia()){
				return false;
			}else if(pilaEtiquetas.extraer() != match_str.replace(match_str.find("/"),1,"")){
				return false;
			}else{
				pilaEtiquetas.pop();
			}
			
		}else{
			pilaEtiquetas.push(match_str);
		}
		
	}
		
	return pilaEtiquetas.estaPilaVacia();
}

void HTML(){
		
		string cadenahtml;
		cout << "Ingrese codigo html sin espacios:"<<endl;
		cin >> cadenahtml;
		
		cout << " Comprobando la cadena HTML " << endl;
		cout << endl;
		if(evaluarEtiquetas(cadenahtml)){
			cout << endl;
			cout << "\nLa cadena: "<< cadenahtml << "\nesta balanceada " << endl;
		}else{
				cout << endl;
			cout << "\nLa cadena: "<< cadenahtml << "\nno esta balanceada " << endl;
			cout << endl;
		}
		
	//No Balanceadas = <html><head><title>Pagina</head><body><h1><p>HOLA</p></h1></body></html>
	//Balanceadas = <html><head><title>Pagina</title></head><body><h1><p>HOLA</p></h1></body></html>
}

 



