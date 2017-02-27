//
//  KnowledgeBase.hpp
//  SRI
//
//  Created by Babbie Monahelis on 2/25/17.
//  Copyright © 2017 Babbie Monahelis. All rights reserved.
//

#ifndef KnowledgeBase_hpp
#define KnowledgeBase_hpp

#include <stdio.h>
#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <algorithm>
#include "Fact.hpp"
using namespace std;

class Fact;

class KnowledgeBase
{
    
public:
    
    map<string, vector<Fact*> > FactDictionary; //Map "dictionary" to hold the facts.
    
    KnowledgeBase(); //Constructor
    
    bool findFactAssociation(Fact * fact); //Find if this "relationship" exists in the map. 
    void AddFact(Fact * fact); //Add a fact to the Knowledge Base FactDictionary.
    Fact * drop(Fact * fact); //Drop fact from the FactDictuionary.
    //Fact * getFact(string association, vector<string> members);
    
    ~KnowledgeBase(); //Deconstructor to delete the map. 
    
};



#endif /* KnowledgeBase_hpp */
