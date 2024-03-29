//CSC237 Project2:
// Student: Margarita Kholostova
// Due Date: July 14th // Description:
//Text Packing / Unpacking Operations
// This program reads a text document, “packs” the ASCII characters // from that document into unsigned int variables, and outputs those variables // to another text file, formatted as hexadecimal numbers.
// This program also reverses the process, converting the unsigned int numbers // back into a copy of the original text document.



#include <iostream>
#include <string>
#include <fstream>
using namespace std;


bool confirmYN(string promptText);
void displayHelpText();
void p();

int main() {

	string command;
    bool keepRunning = true;         // flag to control exit from program.

    
    
    
    
    
    
    
    
    
    
    
    while (keepRunning == true) {

		// Prompt for command input.
		cout << "Enter command (or 'h' for help): ";
		getline(cin, command);

		//   Based on the command that the user entered, call 
		//   the function that implements that command.
		if (command == "p") {
			p();
		}
		else if (command == "u") {
			
		}
		else if (command == "h") {
            	displayHelpText();
		}
		else if (command == "q") {
			// If user confirms, set flag to exit program
			keepRunning = !confirmYN("Are you sure that you want to exit the program? ");
		}
		else {
			cout << "Invalid command: " << command << endl;
		}
    }  // (end 'while')

        cout << "Exit the program." << endl;
	return 0;
}  // (end function 'main')


//command p

void p() {

       //opening file FOR INPUT
    ifstream inFile;
    string fileName;
    cout << "Enter name of input file: " << endl;
    cin>> fileName;
    inFile.open(fileName.c_str());

    //opening file FOR OUTPUT
    ofstream outFile;
    string fileName2;
    cout << "Enter name of output file: " << endl;
    cin>> fileName2;
    outFile.open(fileName2.c_str());

    
 	//works for out put out of file
    string line1;
    
	while(getline(inFile, line1)){  // this is the OUTER loop
      cout<<line1<< "\n";
    //}
	string outputText = line1 + "\n";

	//for (int i = 0; i < 5; i++) {
	//	cout << endl;
		
	unsigned int outputValue = 0;
	int offset = 0;                            // pmorgan
	//                                          this is the INNER loop
		for (int position = 0; position < outputText.length(); position++)
		{
			unsigned int textCharacter = outputText[position];
			offset = position % 4;               // pmorgan
			int shifted_character=0;
			if (offset == 0)
			{
				shifted_character = textCharacter << 24;
				outputValue = shifted_character;                // pmorgan
			}
			else if (offset == 1)
			{
				shifted_character = textCharacter << 16;        
				outputValue = outputValue | shifted_character;   //  pmorgan
			}
			else if (offset == 2)
			{
				shifted_character = textCharacter << 8;
				outputValue = outputValue | shifted_character;   //  pmorgan
			}
			else   // (offset == 3)
			{
				//cout << shifted_character;
				shifted_character = textCharacter;               //  pmorgan
				outputValue = outputValue | shifted_character;   //  pmorgan
				//break;
			}
			if (offset == 3) {
				outFile << hex << outputValue << endl;           // pmorgan
				outputValue = 0;                                 // pmorgan
			}
		}                                              // end of INNER loop 
		// After the INNER loop is done, check if there are any "partial" numbers   // pmorgan
		// in outputValue.   If there are, write those to the output file.          // pmorgan
		if (offset < 3) {                                        // pmorgan
			outFile << hex << outputValue << endl;               // pmorgan
		}


	}  // end of OUTER loop.

		
}

void displayHelpText() {
	// Help text.
	cout << "General command format:  \n"
		<< "     most commands consist of a single-letter \n" << endl;
	cout << "Supported commands: \n"
		<< "     p    Pack a text document into insigned integers.\n"
		<< "     u    Unpack unsigned integers to text.\n"
		<< "     h    Print help text.\n"
		<< "     q    Quit (end the program).\n"
		<< endl;
}





bool confirmYN(string promptText)
{
	string inputString;
	bool confirmationValue = false;
	bool inputIsOK = false;

	do
	{
		// input from user 
		cout << promptText;
		getline(cin, inputString);

		if (inputString == "y" || inputString == "Y")
		{
			confirmationValue = true;
			inputIsOK = true;
		}
		else if (inputString == "n" || inputString == "N")
		{
			confirmationValue = false;
			inputIsOK = true;
		}
		else
		{
			cout << "Invalid input:  " << inputString << ".  Please input y or n." << endl;
		}
	} while (inputIsOK == false);
	return confirmationValue;}




