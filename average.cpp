#include <iostream>
#include <sstream>
#include <vector>
#include <iomanip>
using namespace std;

int main(int argc, char* argv[]){
    if(argc < 2){
        cout << "Please input numbers to find average." << endl;
        return 0;
    }

    vector<double> numbers;
    double sum = 0.0;

    for(int i = 1; i < argc; i++){
        double num;
        stringstream ss(argv[i]);
        if(ss >> num){
            numbers.push_back(num);
            sum += num;
        }else{
            cerr << "Invalid input: " << argv[i] << endl;
            return 1;
        }
    }

    if(numbers.size() == 0){
        cout << "No valid numbers to calculate average." << endl;
        return 1;
    }

    double average = sum / numbers.size();
    cout << "---------------------------------\n";
    cout << "Average of " << numbers.size() << " numbers = " << average << "\n";
    cout << "---------------------------------\n";

    return 0;
}
