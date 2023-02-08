#include "functions.h"

readFile() //function for reading from readme
{
    ifstream infile; //open file to write in
    while(infile!eof) //loop to make sure the program goes through the whole file
    {    
        getline(infile, name); //getting line from readme file
        cout << name << endl; //displays line
    }
    infile.close(); //close file
}


