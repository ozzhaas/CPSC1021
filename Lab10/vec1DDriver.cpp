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
        for (unsigned int i = 0; i < pix.size(); i++) {
            Pixel vec1Pixel2 = vec1Pixel.readPixel(inputFile);
            pix.at(i) = vec1Pixel2;
            //cout << pix.at(i).getB() << endl;
        }
        HFlip(head, pix);
        head.writeHeader(outputFile);
        for (unsigned int j = 0; j < pix.size(); j++) {
            pix.at(j).writePixel(outputFile);
        }
    }
    inputFile.close();
    outputFile.close();

}
