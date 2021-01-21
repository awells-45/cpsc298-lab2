// Takes an input file and outputs the even numbers to another file; Based off code from in-class and Zybooks

#include <iostream>
#include <fstream>
using namespace std;

void evenNums(string inputFile, string outputFile){
  ifstream inFS;
  ofstream outFS;

  inFS.open(inputFile);

  if (!inFS.is_open()) {
     cout << "Could not open file " << inputFile << endl;
  }

  outFS.open(outputFile);

  if (!outFS.is_open()) {
     cout << "Could not open file " << outputFile << endl;
  }

  while(!inFS.fail()) {
    int fileNum;
    inFS >> fileNum;
    if (fileNum % 2 == 0){
      outFS << fileNum << endl;
    }
  }

  cout << "Closing files" << endl;
  inFS.close();
  outFS.close();
}


int main() {

   evenNums("numFile.txt", "myOutfile.txt");

   return 0;
}
