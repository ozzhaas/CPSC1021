/**********************
  Kellen Haas
  CPSC1021
  Sec. 001-F19
  mkhaas@g.clemson.edu
  Damion
  11/12/19
 *********************/
 #include "header.hpp"



Header::Header(string m, int w, int h, int mv) {
    magic = m;
    width = w;
    height = h;
    maxVal = mv;
}


void Header::setMagic(string m) {
    magic = m;
}


void Header::setWidth(int w) {
    width = w;
}


void Header::setHeight(int h) {
    height = h;
}


void Header::setMaxVal(int mv) {
    maxVal = mv;
}


string Header::getMagic()const {
    return magic;
}


int Header::getWidth()const {
    return width;
}


int Header::getHeight()const {
    return height;
}


int Header::getMVal()const {
    return maxVal;
}


void Header::readHeader(ifstream& inputFile) {
    inputFile >> magic;
    inputFile >> width;
    inputFile >> height;
    inputFile >> maxVal;
}


void Header::writeHeader(ofstream& outputFile) {
    outputFile << magic << endl << width << " " << height
    << endl << maxVal << endl;
}
