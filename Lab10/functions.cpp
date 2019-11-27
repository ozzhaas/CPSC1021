/**********************
  Kellen Haas
  CPSC1021
  Sec. 001-F19
  mkhaas@g.clemson.edu
  Damion
  11/12/19
 *********************/
#include "functions.hpp"

void HFlip(Header head, Pixel** pix){
	//double for loop to go through the pixels
	//start with right side (last pixel) and decrement
	Pixel tempPixel[head.getHeight()][head.getWidth()];
	for (int k = 0; k < head.getHeight(); k++) {
		for (int n = 0; n < head.getWidth(); n++){
			tempPixel[k][n] = pix[k][n];
		}
	}


	for (int i = 0; i < head.getHeight(); i++){
		for (int j = 0; j < head.getWidth(); j++){
			pix[i][j] = tempPixel[i][head.getWidth()-j];
		}
	}
}



void HFlip(Header head, vector<vector<Pixel> >& pix) {
	int width = head.getWidth();
	for (int k = 0; k < head.getHeight(); k++) {
		for (int n = 0; n < head.getWidth() / 2; n++){
			swap(pix.at(k).at(n), pix.at(k).at(width - n - 1));
		}
	}
}


void HFlip(Header head, vector<Pixel>& pix) {
	int w = head.getWidth();
	vector<Pixel> tempPix(pix);

	for (int i = 0; i < head.getHeight(); i++) {
		for (int j = 0; j < head.getWidth()/2; j++) {
			swap(pix.at((i * w) + (w - j - 1)), pix.at((i * w) + j));
		}
	}
}


void HFlip(Header head, Pixel* pix) {
	int w = head.getWidth();
	Pixel tempPixel[head.getHeight()*head.getWidth()];

	for (int i = 0; i < head.getHeight(); i++) {
		for (int j = 0; j < head.getWidth()/2; j++) {
			tempPixel = pix[((i * w) + j)];
			pix[((i * w) + j)] = pix[((i * w) + (w - j - 1))];
			pix[((i * w) + (w - j - 1))] = tempPixel;
		}
	}
}


bool checkArgs(int argc) {
	if (argc == 3) {
		return true;
	}
	else {
		cout << "Not enough command line arguments. Exiting program..." << endl;
		return false;
	}
}



bool checkFile(ifstream& inputFile) {
	while (!inputFile.fail()){
		return true;
	}
cout << "Input file failed to open." << endl;
return false;
}
