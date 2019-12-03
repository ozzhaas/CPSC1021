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
        Pixel tempPixel = Pixel(255, 255, 255);

		vector<vector<Pixel> > pix;
		pix.resize(head.getHeight());
        for (unsigned int i = 0; i < pix.size(); i++){
            pix.at(i).resize(head.getWidth());
        }
		for (int i = 0; i < head.getHeight(); i++){
			for (int j = 0; j < head.getWidth(); j++){
                Pixel tempPixel2 = tempPixel.readPixel(inputFile);
				pix.at(i).at(j) = tempPixel2;
			}
		}

		HFlip(head, pix);
		head.writeHeader(outputFile);
		for (int i = 0; i < head.getHeight(); i++){
			for (int j = 0; j < head.getWidth(); j++){
				pix.at(i).at(j).writePixel(outputFile);
			}
		}
 	}
inputFile.close();
outputFile.close();
return 0;
}
