/**********************
  Kellen Haas
  CPSC1021
  Sec. 001-F19
  mkhaas@g.clemson.edu
  Damion
  11/12/19
 *********************/
#include "pixel.hpp"

Pixel::Pixel(unsigned char r, unsigned char g, unsigned char b){
	red = r;
	green = g;
	blue = b;
}


void Pixel::setR(unsigned char r){
	red = r;

}


void Pixel::setG(unsigned char g) {
	green = g;
}


void Pixel::setB(unsigned char b) {
	blue = b;
}


void Pixel::setPixel(unsigned char r, unsigned char g, unsigned char b) {
	setR(r);
	setG(g);
	setB(b);
}


Pixel Pixel::getPixel()const {
	Pixel tempPix(red, green, blue);
	return tempPix;
}


unsigned char Pixel::getR()const {
	return red;
}


unsigned char Pixel::getG()const {
	return green;
}


unsigned char Pixel::getB()const {
	return blue;
}


void Pixel::writePixel(ofstream& outputFile) {
	outputFile << red << green << blue;
}


Pixel Pixel::readPixel(ifstream& inputFile) {
	unsigned char r;
	unsigned char g;
	unsigned char b;


	inputFile >> r >> g >> b;
	//cout << "Pixel Test: " << r << g << b << endl;
	Pixel temp(r, g, b);
	return temp;
}
