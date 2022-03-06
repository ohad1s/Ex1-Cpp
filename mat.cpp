//
// Created by shira on 06/03/2022.
//
#include "mat.hpp"
#include <string>
#include <iostream>
#include <stdexcept>
using namespace std;
//using namespace ariel;

string ariel::mat (int r, int c, char c1, char c2){
    if (r<=0 || c<=0){
        throw "zero or negative input error ";
    }
    if (r%2==0 || c%2==0){
        throw "even input error";
    }
    char** my_mat=new char*[r];
    for (int i=0; i<r; i++){
        my_mat[i]=new char[c];
    }
    int start=0, row=r-1, col=c-1;
    while (start<r || start<c){
        for (int i=0; i<r;)
    }
    return "123";
}
