/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   dados.h
 * Author: rafa-
 *
 * Created on 8 de Setembro de 2017, 16:45
 */

#ifndef DADOS_H
#define DADOS_H

struct Dados{
    int numConta;
    char nomeCliente[40];
    float saldo;
    
};

void abrirConta(struct Dados *p);
void lancarCredito (struct Dados *p);
void lancarDebito (struct Dados *p);
void exibirSaldo (struct Dados *p);

#endif /* DADOS_H */

