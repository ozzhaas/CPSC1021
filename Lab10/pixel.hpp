/**********************
  Kellen Haas
  CPSC1021
  Sec. 001-F19
  mkhaas@g.clemson.edu
  Damion
  11/12/19
 *********************/

#ifndef PIXEL_H
#define PIXEL_H

#include<fstream>
#include<iostream>
#include "header.hpp"
using namespace std;

class Pixel
{
    private:
        unsigned char red, green, blue;

    public:
        Pixel(unsigned char r = 0, unsigned char g = 0, unsigned char b = 0);
        void setR(unsigned char);
        void setG(unsigned char);
        void setB(unsigned char);
        void setPixel(unsigned char, unsigned char, unsigned char);
        Pixel getPixel()const;
        unsigned char getR()const;
        unsigned char getG()const;
        unsigned char getB()const;
        void writePixel(ofstream&);
        Pixel readPixel(ifstream&);

};

#endif
