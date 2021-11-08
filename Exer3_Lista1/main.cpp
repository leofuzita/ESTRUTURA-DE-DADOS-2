/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Usuario
 *
 * Created on 27 de setembro de 2021, 16:38
 */

#include <cstdlib>
#include <iostream>
#include "cCalculoIdade.h"


using namespace std;

int main(int argc, char** argv) {
    cCalculoIdade *obj = new cCalculoIdade();
    obj -> lerDados();

    return 0;
}

