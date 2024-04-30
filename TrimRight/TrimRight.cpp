#include <iostream>
#include <cstring>
#include <string>

void TrimRight(char* s) {

    long int size = strlen(s);
    const char gap = ' ';

    std::cout << "Длина исходной строки: " << size << std::endl;

    for (long int i = strlen(s) - 1; i >= 0; i--) {
        if (s[i] == gap) {
            size -= 1;
        }
        else {
            break;
        }
    }

    std::cout << "Строка без пробелов справа: " << std::endl;

    if (size == strlen(s)) {

        for (long int i = 0; i < size; i++) {
            std::cout << s[i];
        }

        std::cout << std::endl;
    }
    else {

        char* trimmed_s = new char[size + 1] {0};

        for (long int i = 0; i < size; i++) {
            trimmed_s[i] = s[i];
            std::cout << trimmed_s[i];
        }

        std::cout << std::endl;

        delete[] trimmed_s;
    }

    std::cout << "\nЧисло удалённых пробелов: " << strlen(s) - size << std::endl;

}

int main(int argc, char** argv)
{
    setlocale(LC_ALL, "Russian");

    std::cout << "Введите строку:" << std::endl;
    std::string input_string;
    std::getline(std::cin, input_string);

    char* s = new char[input_string.length() + 1] {0};

    for (int i = 0; i < input_string.length(); i++) {
        s[i] = input_string[i];
    }

    std::cout << std::endl;

    TrimRight(s);

    delete[] s;

    return 0;
}