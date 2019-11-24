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
	int j = head.getWidth() * head.getHeight();
	int w = head.getWidth();
	vector<Pixel> tempPix(pix);
	int r = 0;

	/*Yvon's Comment:  Try looping through 0 and (width*height)/2 */

	for (int i = 0; i < (head.getWidth() * head.getHeight())/2; i++) {
		r = (w*(i / w));
		//pix.at(r +(((j - i - 1)))) = tempPix.at(i);
		swap(pix.at(i), pix.at(r +(j - i - 1)));
		//pix.at(j - 1 - i) = tempPix.at(i);
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
