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
