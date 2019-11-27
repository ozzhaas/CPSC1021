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
    inputFile.open(argv[1]);
    ofstream outputFile;
    outputFile.open(argv[2]);
	if ((checkArgs(argc) == true) && (checkFile(inputFile) == true)) {
		Header head;
		head.readHeader(inputFile);
		Pixel array1Pixel = Pixel(255, 255, 255);
		Pixel* pix[head.getHeight() * head.getWidth()];
		for (unsigned int i = 0; i < sizeof(pix); i++) {
			Pixel array1Pixel2 = array1Pixel.readPixel(inputFile);
			pix[i] = array1Pixel2;
		}
		HFlip(head, pix);
		head.writeHeader(outputFile);
		for (unsigned int j = 0; j < sizeof(pix); j++) {
			pix[j]->writePixel(outputFile);
		}
	}
	inputFile.close();
	outputFile.close();

return 0;
}
