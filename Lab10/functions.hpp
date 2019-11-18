/**********************
  Kellen Haas
  CPSC1021
  Sec. 001-F19
  mkhaas@g.clemson.edu
  Damion
  11/12/19
 *********************/
 #include <string>
 #include <fstream>
 #include <iostream>
 #include "header.hpp"
 #include "pixel.hpp"
 using namespace std;

void HFlip(Header, Pixel**);

bool checkArgs(int);

bool checkFile(ifstream&);
