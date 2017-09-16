//
//  dikdortgen.cpp
//  10_polymorphism
//
//  Created by Emre AKTÜRK on 16/09/2017.
//  Copyright © 2017 Emre AKTÜRK. All rights reserved.
//

#include "dikdortgen.hpp"
#include <iostream>
using namespace std;

Dikdortgen::Dikdortgen(double x, double y)
{
    this->x = x;
    this->y = y;
}
Dikdortgen::~Dikdortgen()
{
    cout<<"Dikdortgen yikisici calisti"<<endl;
}
void Dikdortgen::tanistir()
{
    cout<<"Ben Dikdortgenim!"<<endl;
}
double Dikdortgen::alanHesapla()
{
    return x*y;
}

double Dikdortgen::cevreHesapla()
{
    return 2*(x+y);
}
