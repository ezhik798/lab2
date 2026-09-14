#include <iostream>
#include <fstream>
#include <cstdlib>
#include <ctime>

using namespace std; //чтоб std:: не писать

int main() {
    srand(time(0)); //генератор случ чисел

    for (int i = 1; i <= 3; i++) {
        string name = "file" + to_string(i) + ".txt"; //создание имен файлов
        ofstream fout(name); //открыть для записи

        for (int j = 0; j < 10; j++) {
            int num = rand() % 10 + 1; //число от 0 до 9, но +1 дает от 1 до 10
            fout << num << " "; //запись десятислуч чисел с пробелом
        }
        fout.close(); //закрыть файл

        cout << "cоздан файл с числами: " << name << endl;
    }

    return 0;
}
