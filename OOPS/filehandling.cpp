#include<iostream>
#include<fstream>
using namespace std;

    // outfile.open("Ques.txt");
    // outfile<<"what is c language?";
    // outfile.close();
    // inpfile.getline("answers.txt");
    int main(){
    ofstream file("MultiplicationTable.txt");
    file<<"Multiplication table of"

    int n;
    cout << "Enter a number: ";
    cin >> n;

    ofstream file("multiplication_table.txt");
    if (!file) {
        cout << "File could not be opened!" << endl;
        return 1;
    }

    file << "Multiplication Table of " <<n<< ":\n";
    for (int i = 1; i <= 10; ++i) {
        file << n << " x " << i << " = " << n * i << "\n";
    }

   cout << "Multiplication table of " << n << " has been written to 'multiplication_table.txt'.\n";


    file.close();  
    return 0;
}