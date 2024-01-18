//
//  Previous.cpp
//  Project 1
//
//  Created by Ava Gonick on 6/29/23.
//

#include "Previous.h"
#include <iostream>
using namespace std;

Previous :: Previous(int nRows, int nCols){
    m_cols = nCols;
    m_rows = nRows;
    for(int i = 0; i < nRows; i++){
        for(int j = 0; j < nCols; j++){
            moves[i][j] = 0;
        }
    }
}
bool Previous :: dropACrumb(int r, int c ){
    if( r < 1 || c < 1 || r > m_rows || c > m_cols )
        return false;
    moves[r-1][c-1]++;
    return true;
    
}
void Previous :: showPreviousMoves() const {
    clearScreen();
    char indisplay[27] = {'.', 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};
    char display [MAXROWS][MAXCOLS];
    for(int i = 0; i < m_rows; i++){
        for(int j = 0; j < m_cols; j++){
            if(moves[i][j] > 26)
                display[i][j] = 'Z';
            else
                display[i][j] = indisplay[moves[i][j]];
        }
    }
    for(int i = 0; i < m_rows; i++){
        for(int j = 0; j < m_cols; j++){
            cout << display[i][j];
        }
        cout << endl;
    }
    cout << endl;
    
}
