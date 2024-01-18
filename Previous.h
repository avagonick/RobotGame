//
//  Previous.hpp
//  Project 1
//
//  Created by Ava Gonick on 6/29/23.
//

#ifndef Previous_h
#define Previous_h
#include "globals.h"


class Previous
{
public:
    Previous(int nRows, int nCols);
    bool dropACrumb(int r, int c);
    void showPreviousMoves() const;
private:
    int moves[MAXROWS][MAXCOLS];
    int m_rows;
    int m_cols;
    
    
};


#endif /* Previous_h */
