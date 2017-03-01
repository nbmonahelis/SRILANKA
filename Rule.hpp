//
//  Rule.hpp
//  SRI
//
//  Created by Babbie Monahelis on 2/26/17.
//  Copyright © 2017 Babbie Monahelis. All rights reserved.
//

#ifndef Rule_hpp
#define Rule_hpp

#include <stdio.h>
#include "Fact.hpp"

class Fact;

class Rule
{
    
public:
    
    string name;
    
    //Vector of Facts or Rules that builds a rule.
    vector<Fact*> elements;
    
    //AND/OR, using boolean operators.
    vector< bool (*)(bool, bool)> operators;
    
    //Constructor, can accept multiple facts to build a rule.
    Rule(string name, vector<bool (*)(bool, bool)> operators, int total, ...);
    
    
};


#endif /* Rule_hpp */
