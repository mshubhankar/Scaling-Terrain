//
//  search.hpp
//  OpenGLTest
//
//  Created by Shubhankar Mohapatra on 22/08/17.
//  Copyright © 2017 Shubhankar Mohapatra. All rights reserved.
//

#ifndef search_hpp
#define search_hpp

#include <stdio.h>
#include <iostream>
#include <set>
#include <cfloat>
#include <cmath>
#include <stack>
#endif /* search_hpp */
using namespace std;
typedef pair<int, int> Pair;
typedef pair<double, pair<int, int>> pPair;

class asearch{
public:
    struct cell
    {
        // Row and Column index of its parent
        // Note that 0 <= i <= ROW-1 & 0 <= j <= COL-1
        int parent_i, parent_j;
        // f = g + h
        double f, g, h;
    };
    int ROW,COL;
    int ** grid;
    int **path;
    cell ** cellDetails;
    asearch(int,int,int **);
    
    
    void aStarSearch(int ** grid, Pair src, Pair dest);
    void start();
    bool isValid(int row, int col);
    bool isUnBlocked(int **grid, int row, int col);
    bool isDestination(int row, int col, Pair dest);
    double calculateHValue(int row, int col, Pair dest);
    void tracePath(cell** cellDetails, Pair dest);

};
