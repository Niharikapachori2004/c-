#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    string sourceFileName, destinationFileName;

    // Prompt the user to input the names of the source and destination files
    cout << "Enter the source file name: ";
    cin >> sourceFileName;
    cout << "Enter the destination file name: ";
    cin >> destinationFileName;

    // Open the source file for reading
    ifstream sourceFile(sourceFileName, ios::binary);
    if (!sourceFile) {
        cerr << "Error: Could not open source file." << endl;
        return 1;
    }

    // Open the destination file for writing
    ofstream destinationFile(destinationFileName, ios::binary);
    if (!destinationFile) {
        cerr << "Error: Could not open destination file." << endl;
        return 1;
    }

    // Copy contents from source file to destination file
    destinationFile << sourceFile.rdbuf();

    // Close the files
    sourceFile.close();
    destinationFile.close();

    cout << "File copied successfully!" << endl;

    return 0;
}
