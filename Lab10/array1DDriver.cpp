/**********************
  Kellen Haas
  CPSC1021
  Sec. 001-F19
  mkhaas@g.clemson.edu
  Damion
  11/12/19
 *********************/
#include "functions.hpp"
#include "header.hpp"
#include "pixel.hpp"


int main(int argc, char* argv[]){
	ifstream inputFile;
	string magic;
	int height;
	int width;

	if ((checkArgs(argc) == true) && (checkFile(inputFile) == true)) {
		Header head;
		inputFile >> magic;
		head.setMagic(magic);
		inputFile >> height;
		head.setHeight(height);
		inputFile >> width;
		head.setWidth(width);
		Pixel pix;
	}
return 0;
}
