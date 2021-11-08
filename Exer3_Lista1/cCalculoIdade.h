/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   cCalculoIdade.h
 * Author: Usuario
 *
 * Created on 27 de setembro de 2021, 16:42
 */

#ifndef CCALCULOIDADE_H
#define CCALCULOIDADE_H

class cCalculoIdade {
public:
    cCalculoIdade();
    cCalculoIdade(const cCalculoIdade& orig);
    virtual ~cCalculoIdade();
    
    void lerDados();
    int calcular();
    int ano, mes, dia, idade;
    
private:

};

#endif /* CCALCULOIDADE_H */

