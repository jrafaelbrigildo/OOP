#include <iostream>
#include <string>
using namespace std;

void printIntegers(){
    int arrNum[100];

    for(int i = 0; i < 100; i++){
        arrNum[i] = i + 1;
    }
    for(int i = 0; i < 100; i++){
        cout << arrNum[i] << " ";
    }
    cout << endl;
}
string personWithCorrectAns(){
    char arrAns[100] = {};
    cout << "Input the answer: ";
    for(int i = 0; i < 10; i++){
        cin >> arrAns[i];
    }
    char adrianArr[] = {'A', 'B', 'C', 'A', 'B', 'C'};
    char brunoArr[] = {'B', 'A', 'B', 'C', 'B', 'A'};
    char gornaArr[] = {'B', 'B', 'C', 'C', 'A', 'A'};

    for(int i = 0; i < 6; i++){
        if(adrianArr[i] == arrAns[i]){
            return "Adrian";
        }
        else if(brunoArr[i] == arrAns[i]){
            return "Bruno";
        }
        else{
            return "Gorna";
        }
    }

}
int main(){
    printIntegers();
    string personMostCorrectAnswer = personWithCorrectAns();
    cout << personMostCorrectAnswer << " has the most correct answer.";
}