// Jack Turner
// Assignment 1
// February 6 2024


#include "assignment1.h"

using namespace std;

void readData(const int size1, int readfile[]) {
    string file = "A1input.txt";
    ifstream file1;
    file1.open(file.c_str());
    //Reads file into array line by line
    if(file1.is_open()){
        for(int i=0; i<size1; i++){
            file1 >> readfile[i];
        }
        file1.close();
    }
}

void check(int input1, const int size1, int readfile[]){
    int count = 0;
    bool found;
    for(int i=0; i<size1;i++){
        //If integer is found print where it was found
        if(readfile[i] == input1){
            cout << "Found at position " << count << "\n\n";
            found = true;
        }
        count += 1;
    }
    if(found == false){
        //If the integer can't be found, state this
        cout << "Could not find\n\n";
    }
}

void change(int index1, int newnumber1, const int size1, int readfile[]){
    int originalnumber = readfile[index1];
    //changes the original number to the new number
    readfile[index1] = newnumber1;
    cout << "The original number was " << originalnumber << " . It has been changed to " << readfile[index1] << "\n\n";
}

void size(int newnumber, int size1, int readfile[]){
    size1 ++;
    //Increases the size of the array
    readfile[size1] = newnumber;
    cout << "Number was added to the end - " << readfile[size1] << "\n\n";
}

void makezero(int index1, int size, int readfile[]){
    int original = readfile[index1];
    //Sets index equal to zero
    readfile[index1] = 0;
    cout << original << " has been changed to " << readfile[index1] << "\n\n";
}


int main(){
    int size1 = 100;
    int readfile[size1];
    bool playing = true;
    int input1;
    int input2;
    int input3;
    readData(size1, readfile);
    while(playing == true){
        cout << "What functions would you like to perform?\n";
        cout << "1. Check array for a particular number\n";
        cout << "2. Change number in the array\n";
        cout << "3. Add number to the end of the array\n";
        cout << "4. Make a number in the array zero\n";
        cout << "5. Exit\n";
        cin >> input1; 
        switch(input1){
            case 1:
                cout << "Which number would you like to check for?\n";
                cin >> input2;
                check(input2,size1,readfile);
                break;
            case 2:
                cout << "Which index would you like to change?\n";
                cin >> input2;
                cout << "What number would you like to change it to?\n";
                cin >> input3;
                change(input2,input3,size1,readfile);
                break;
            case 3:
                cout << "What number would you like to add to the end of the array?\n";
                cin >> input2;
                size(input2, size1, readfile);
                break;
            case 4:
                cout << "What index do you want to change to zero?\n";
                cin >> input2;
                makezero(input2,size1,readfile);
                break;
            case 5:
                playing = false;
                break;

        }

    }
    return 0;
}