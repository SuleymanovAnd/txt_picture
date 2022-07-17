#include <iostream>
#include <fstream>
#include <cctype>

using namespace std;

int main() {
    srand(time(nullptr));

    ofstream file ("pic.txt", ios::app);

    if (!file.is_open()) {
    cout << "Error opening file!";
    }

    int x = 0;
    int y = 0;
    cout << "Enter the width and height of the picture: ";
    cin >>x >>y;

    for (int i = 0; i < x; i++){
        for(int j = 0; j < y; j++){
            file << rand () %2 << " ";
        }
        file <<std::endl;
    }
    cout << "complete\n";
    file.close ();
}
