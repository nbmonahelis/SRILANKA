//
//  Fact.hpp
//  SRI
//
//  Created by Babbie Monahelis on 2/25/17.
//  Copyright © 2017 Babbie Monahelis. All rights reserved.
//

#ifndef Fact_hpp
#define Fact_hpp

#include <stdio.h>
#include <iostream>
#include <string>
#include <vector>
#include <stdlib.h>
#include "Fact.hpp"
using namespace std;

class KnowledgeBase;

class Fact
{

public:
    vector<string> members; //The members of the fact. Like John, Paul, Jones.. etc.
    string association; //Their association - Like father, mother.. etc.
    
    Fact(vector<string> fact, string name); //Vector to hold all of the members, along with their association. 
    
    //Need to write a function to find if a fact exists or not. 
    
};


#endif /* Fact_hpp */
