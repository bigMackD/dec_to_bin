//
//  main.cpp
//  DecNaBin
//
//  Created by Maciej Drozdowicz on 09/11/16.
//  Copyright © 2016 Maciej Drozdowicz. All rights reserved.
//

#include <iostream>
#include <cstdlib>
using namespace std;

void zamiana (int dec)
{
    int k=0;
    int tab[31];
        do
    {
        tab[k]=dec%2;
        dec=dec/2;
        k++;
    }
    while(dec!=0);
    for(int i=(k-1); i>=0; i--)
    {
        cout << tab[i];
    }
    
    
}

int main(int argc, const char * argv[]) {
    int liczba;
    cout << "Podaj liczbe: ";
    cin >> liczba;
    cout << endl;
    cout << "Po zamianie na binarny to: ";
    zamiana(liczba);
    cout << endl;
    
    return 0;
}
