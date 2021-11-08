/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   cCalculoIdade.cpp
 * Author: Usuario
 * 
 * Created on 27 de setembro de 2021, 16:42
 */
#include <iostream>
#include "cCalculoIdade.h"

using namespace std;

cCalculoIdade::cCalculoIdade() {
}

cCalculoIdade::cCalculoIdade(const cCalculoIdade& orig) {
}

cCalculoIdade::~cCalculoIdade() {
}

void cCalculoIdade::lerDados(){
    
    cout << "Esse é um programa que calcula sua idade em dias. Supondo que os meses têm 30 DIAS!! \n";
    cout << "Informe a quantidade de anos: \n";
    cin >> this->ano;
    cout << "Informe a quantidade de meses: \n";
    cin >> this->mes;
    cout << "Informe a quantidade de dias: \n";
    cin >> this->dia;
    
    cout << this->calcular();
}

int cCalculoIdade::calcular(){
    idade = ((this->ano*365 + this->mes*30 + this->dia));
            return idade;
}

