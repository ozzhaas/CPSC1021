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
		Pixel **pix = new Pixel*[head.getHeight()];
		for(int i = 0; i < head.getHeight(); i++){
			pix[i] = new Pixel[head.getWidth()];
		}
		for (int i = 0; i < head.getHeight(); i++){
			for (int j = 0; j < head.getWidth(); j++){
				pix[i][j] = pix[i][j].readPixel(inputFile);
			}
		}
		HFlip(head, pix);
		head.writeHeader(outputFile);
		for (int i = 0; i < head.getHeight(); i++){
			for (int j = 0; j < head.getWidth(); j++){
				pix[i][j].writePixel(outputFile);
			}
		}

 	}
	inputFile.close();
	outputFile.close();
return 0;
}
