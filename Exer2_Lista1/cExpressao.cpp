/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   cExpressao.cpp
 * Author: Usuario
 * 
 * Created on 26 de setembro de 2021, 15:03
 */
#include <iostream>
#include "cExpressao.h"
#include <math.h>

using namespace std;

cExpressao::cExpressao() {
}

cExpressao::cExpressao(const cExpressao& orig) {
}

cExpressao::~cExpressao() {
}

void cExpressao::lerDados(){
    
    cout << "Digite o valor A: \n";
    cin >> A;
    cout << "Digite o valor B: \n";
    cin >> B;
    cout << "Digite o valor C: \n";
    cin >> C;
    
    cout << this->calcularExpressao();
}

float cExpressao::calcularExpressao(){
    
    R = pow((A + B),2);
    S = pow((B + C),2);
    D = (R + S) / 2;
    
    return D;
}

