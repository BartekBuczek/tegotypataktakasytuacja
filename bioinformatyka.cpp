#include <iostream>
#include <vector>
#include <string>
#include <Windows.h>
#include <map>
using namespace std;


int main() {
    map<string, char> tabela_aminokwasow = {
    {"UUU", 'F'}, {"UUC", 'F'}, {"UUA", 'L'}, {"UUG", 'L'},
    {"UCU", 'S'}, {"UCC", 'S'}, {"UCA", 'S'}, {"UCG", 'S'},
    {"UAU", 'Y'}, {"UAC", 'Y'}, {"UAA", '*'}, {"UAG", '*'},
    {"UGU", 'C'}, {"UGC", 'C'}, {"UGA", '*'}, {"UGG", 'W'},
    {"CUU", 'L'}, {"CUC", 'L'}, {"CUA", 'L'}, {"CUG", 'L'},
    {"CCU", 'P'}, {"CCC", 'P'}, {"CCA", 'P'}, {"CCG", 'P'},
    {"CAU", 'H'}, {"CAC", 'H'}, {"CAA", 'Q'}, {"CAG", 'Q'},
    {"CGU", 'R'}, {"CGC", 'R'}, {"CGA", 'R'}, {"CGG", 'R'},
    {"AUU", 'I'}, {"AUC", 'I'}, {"AUA", 'I'}, {"AUG", 'M'},
    {"ACU", 'T'}, {"ACC", 'T'}, {"ACA", 'T'}, {"ACG", 'T'},
    {"AAU", 'N'}, {"AAC", 'N'}, {"AAA", 'K'}, {"AAG", 'K'},
    {"AGU", 'S'}, {"AGC", 'S'}, {"AGA", 'R'}, {"AGG", 'R'},
    {"GUU", 'V'}, {"GUC", 'V'}, {"GUA", 'V'}, {"GUG", 'V'},
    {"GCU", 'A'}, {"GCC", 'A'}, {"GCA", 'A'}, {"GCG", 'A'},
    {"GAU", 'D'}, {"GAC", 'D'}, {"GAA", 'E'}, {"GAG", 'E'},
    {"GGU", 'G'}, {"GGC", 'G'}, {"GGA", 'G'}, {"GGG", 'G'}
    };
    string code;
    bool answerv2 = false;
    int answer;
    int error = 0;
    do {
        system("cls");
        cout << "Witaj! Podaj kod RNA: ";
        cin >> code;
        cout << endl << "Sprawdzanie RNA";
        for (int x = 0; x < code.length(); x++)
        {
            code[x] = toupper(code[x]);
        }
        int p = 0; //przesunięcie
        if (code.length() % 3 == 2) {
            p = 2;
        }
        else if (code.length() % 3 == 1) {
            p = 1;
        }
        else if (code.length() % 3 == 0) {
            p = 0;
        }
        else {
            cout << "Cos poszlo nie tak!" << endl;
            return 0;
        }
        for (int i = 0; i < code.length(); i++) {
            char Adenin = 'A';
            char Guanin = 'G';
            char Uracyl = 'U';
            char Cytozin = 'C';
            char Tymin = 'T';
            if (code[i] == Adenin) {
                break;
            }
            else if (code[i] == Guanin) {
                break;
            }
            else if (code[i] == Uracyl) {
                break;
            }
            else if (code[i] == Cytozin) {
                break;
            }
            else if (code[i] == Tymin) {
                code[i] = Uracyl;
            }
            else {
                error += 1;
            }
        }
        if (error == 0) {
            break;
        }
        else {
            cout << "W kodzie jest nieprawidlowosc. Czy chcesz poprawic? 1 = tak; 0 = nie: ";
            cin >> answer;
            if (answer == 1)
            {
                answerv2 = true;
            }
            else if (answer == 0) {
                answerv2 = false;
            }
            else {
                cout << endl << "Nie otrzymalem jednoznacznej odpowiedzi yes ani no!";
                answerv2 = false;
            }
        }
    } while (answerv2);
    cout << endl <<"Test zapisanego kodu, udany!"<<endl;
    cout << "Budowanie bialek";
    
    
    
    
    
    
    
    return 0;
}
