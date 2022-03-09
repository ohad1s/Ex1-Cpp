//
// Created by shira on 06/03/2022.
//
#include "mat.hpp"
#include <string>
#include <iostream>
#include <stdexcept>

using namespace std;
//using namespace ariel;

string ariel::mat(int r, int c, char c1, char c2) {
    if (r <= 0 || c <= 0) {
        throw "zero or negative input error ";
    }
//    if (r % 2 == 0 || c % 2 == 0) {
//        throw "Mat size is always odd";
//    }
    char **my_mat = new char *[r];
    for (int i = 0; i < r; i++) {
        my_mat[i] = new char[c];
    }

    int start = 0, row = r-1 , col = c-1 ;
    char sign = c1;

    while (start <= row && start <= col) {

        for (int i = start; i <= row; i++) {
            my_mat[i][start] = sign;
            my_mat[i][col]= sign;
        }

        for (int j = start; j <= col; j++) {
            my_mat[start][j] = sign;
            my_mat[row][j] = sign;
        }
        row = row - 1;
        col = col - 1;
        start = start + 1;
        if (sign == c1) {
            sign = c2;
        } else {
            sign = c1;
        }
    }
    string str_mat = "";
    bool flag = true;
    for (int i = 0; i < r; i++) {
        if (i == r - 1) {
            flag = false;
        }
        for (int j = 0; j < c; j++) {
            str_mat = str_mat + my_mat[i][j];
        }
        if (flag == true) {
            str_mat = str_mat + "\n";
        }

    }
    for (int i = 0; i < r; i++) {
        delete[]my_mat[i];
    }
    delete[] my_mat;
    return str_mat;
}

//int main() {
//
//    std::cout << ariel::mat(11, 7, '1', '0') << endl;
//
//    return 0;
//}
