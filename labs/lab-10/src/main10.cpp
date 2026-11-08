#include <iostream>
#include <fstream>
#include "my_lab10.h"

using namespace std;

int main() {
    string inputName = "code.txt";
    string outputName;

    // Автоматическое создание демонстрационного входного файла перед запуском
    ofstream testFile(inputName);
    testFile << "int a = 12; // инициализация переменной a" << endl;
    testFile << "double b = 3.14; // инициализация переменной b" << endl;
    testFile << "// Полная строка комментария, преобразуется в пустую строку" << endl;
    testFile << "cout << a + b << endl; // вывод расчетной суммы" << endl;
    testFile.close();

    cout << "[INFO] Входной файл '" << inputName << "' успешно инициализирован тестовым кодом." << endl;
    cout << "Введите имя файла для записи результата (например, clean_code.txt): ";
    cin >> outputName;

    int lineCount = 0;
    std::string* myLines = readFileToDynamicArray(inputName, lineCount);

    if (myLines != nullptr && lineCount > 0) {
        removeCommentsFromMemory(myLines, lineCount);
        writeArrayToFile(outputName, myLines, lineCount);

        // Освобождение выделенной памяти
        delete[] myLines;

        cout << "[SUCCESS] Обработка завершена. Результат сохранен в файл " << outputName << endl;
    } else {
        cout << "[ERROR] Ошибка обработки данных." << endl;
    }

    return 0;
}