/* Kellen Haas
CPSC 1021
Sec. 001 - F19 
09/24/19
mkhaas@clemson.edu
Damion*/


#include "stdio.h"
#include "stdlib.h"
#include "crypto.h"

int main(int argc, char const *argv[]) {
	FILE* image_file  = fopen(argv[1], "r");
	FILE* key_file    = fopen(argv[2], "r");
	FILE* out_image   = fopen(argv[3], "w");

	// Read image
	header_t header;
	img_t img;
	read_header(image_file, &header);
	read_image(image_file, &img, &header);

	// Read secret key
	//Initialize seed//
	int seed;
	read_seed(key_file, &seed);
  	sp_rand(seed);

	/** NO ERROR HERE **/
	printf("Encrypt[1] or Decrypt[2]?\n");
  	int choice;
  	while(true) {
    	scanf("%d",&choice);
    	if(choice == 1 || choice == 2) {
      		sym_crypt(out_image, &header, &img, choice);
      		break;
    	} 
		else {
      		printf("Please enter 1 or 2\n");
    	}
  	}
  /********************/

	free(header.type);
	for (int k = 0; k < header.h; k++) {
		free(img.data[k]);
	}
	free(img.data);
	
	fclose(image_file);
  	fclose(key_file);
  	fclose(out_image);

  	return 0;
}
