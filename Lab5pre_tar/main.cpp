#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <vector>

FILE* file;
using namespace std;
ifstream inputFile;


int main()
{


    std::vector<int> vector;
    vector.reserve(10000);
    // When you are finished, you should print this number to the terminal. 
    int avg = 0;

    // Below is an example how you populate a vector in c++. 
    // When you are comfortable parsing through the txt file, push all the numbers
    // into our vector using the .emplace_back method. 
    // When you are preparing to fill your vector, remove the line of code below. 

	ifstream file("numbers.txt"); 
		int temp = 0;

			while (file >> temp) {
				vector.emplace_back(temp);		
			}

		file.close();
		
		int sum = 0;
		int count = 0;
			
			for (int i : vector){
				sum += i;
				count++;
			}

		avg = sum/count;

		cout << endl;
		cout << avg << endl;
		cout << endl;



    //When a vector does not have pointers inside of it, we clear the vector calling
    // the .clear() method. 
    vector.clear();

    

    return 0;
}
