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
        Pixel vec1Pixel = Pixel(255, 255, 255);

        vector<Pixel> pix;
        pix.resize(head.getHeight() * head.getWidth());
        for (int i = 0; i < head.getHeight(); i++) {
            pix.
        }





    }


}
