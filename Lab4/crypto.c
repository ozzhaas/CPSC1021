/* Kellen Haas
CPSC 1021
Sec. 001 - F19 
09/24/19
mkhaas@clemson.edu
Damion*/


#include "crypto.h"

int P_RAND_SEED = 1;


/*read_header function specifically reads the header of the ppm file 
and stores it in a struct*/
void read_header(FILE* in_img, header_t* header) {
	header->type = malloc(sizeof(char)*3);
	fscanf(in_img, "%s ",     header->type);
	fscanf(in_img, "%d %d ", &header->w, &header->h);
	fscanf(in_img, "%d ",    &header->cs);
	printf("Header:\n%s %d %d %d\n", header->type, header->w, header->h, 
									 header->cs);
}


/*read_image function reads in the data of the pixels from the ppm file 
and stores it in structs*/
void read_image(FILE* input, img_t* image, header_t* header) {
	int row, col;

	//Change header.h to header->h//
	image->data = malloc(sizeof(pixel_t*) * header->h);

	for(row = 0; row < header->h; row++) {
		image->data[row] = malloc(sizeof(pixel_t) * header->w * 3);
		for(col = 0; col < header->w; col++) {
			//Missing semicolon below//
			pixel_t pix;
			fscanf(input, "%c%c%c", &pix.r, &pix.g, &pix.b);
			image->data[row][col] = pix;
		}	
	}
}


//read_seed function reads the random seeds off of the key file//
void read_seed(FILE* seed_file, int* seed) {
  fscanf(seed_file, "%d", seed);
}


/*sym_crypt swaps the key file seeds with the image pixel numbers
to either encrypt or decrypt*/
void sym_crypt(FILE* output, header_t* header, img_t* image, int mode) {

	// Writes header of PPM to files
  	fprintf(output, "%s %d %d %d\n", header->type, header->w, 
									 header->h, header->cs);


  	int row, col;
  	switch (mode) {
  	  	case 1:
      	printf("Encrypt\n");
      	for(row = 0; row < header->h; row++) {
			//fixed the initialization of col//
        	for(col = 0; col < header->w; col++) {
          		int swap_row = p_rand(row*row) % header->h;
          		int swap_col = p_rand(col*col) % header->w;
          		pixel_t swap = image->data[row][col];
          		image->data[row][col] = image->data[swap_row][swap_col];
          		image->data[swap_row][swap_col] = swap;
        	}
      	} break;

	case 2:
		printf("Decrypt\n");
      	for(row = header->h-1; row >= 0; row--) {
			//fixed the initialization of col//
        	for(col = header->w-1; col >= 0; col--) {
          		int swap_row = p_rand(row*row) % header->h;
          		int swap_col = p_rand(col*col) % header->w;
          		pixel_t swap = image->data[row][col];
          		image->data[row][col] = image->data[swap_row][swap_col];
          		image->data[swap_row][swap_col] = swap;
        	}
      	} break;
	default: break;
	}


	for(row = 0; row < header->h; row++) {
    	for(col = 0; col < header->w; col++) {
      		pixel_t pix = image->data[row][col];
      		fprintf(output, "%c%c%c", pix.r, pix.g, pix.b);
    	}
  	}
}



//sp_rand function creates the pseudo random seed//
void sp_rand(unsigned int seed) {
  P_RAND_SEED = seed;
}

//unsigned int p_rand function helps generate pseudo random number//
unsigned int p_rand(unsigned int init) {
  	return (P_RAND_SEED*init) % INT_MAX;
}



