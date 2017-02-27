//
//  KnowledgeBase.cpp
//  SRI
//
//  Created by Babbie Monahelis on 2/25/17.
//  Copyright © 2017 Babbie Monahelis. All rights reserved.
//

#include "KnowledgeBase.hpp"

KnowledgeBase::KnowledgeBase()
{
    //Allocate memory for our map.
    map<string, vector<Fact *>> FactDictionary = *new map<string, vector<Fact *> >();
}

/*Determines if this Fact association already exists in our map. If we found that it exists,
//return true, if not return false.
*/
bool KnowledgeBase::findFactAssociation(Fact * fact)
{
    if (FactDictionary.find(fact->association) == FactDictionary.end())
        return false;
    
    return true; 
}

//This adds a Fact to the vector of Facts, depending on what association (relationship) it is.
void KnowledgeBase::AddFact(Fact * fact)
{
    bool found = findFactAssociation(fact); //check to see if the association is in the map
    
    if (found == false) //We didn't find one, so we need to build a vector of facts.
    {
        vector<Fact *> tempVector;
        tempVector.push_back(fact);
        FactDictionary[fact->association] = tempVector; //Our key now has a vector.
    }
    else
    {
        for (Fact * f : FactDictionary[fact->association]) //Check to see if we already have a vector with the same members.
        {
            if (f->members == fact->members)
                cout << "This fact is already in our knowledge base.\n";
        }
        
        FactDictionary[fact->association].push_back(fact); //Add the fact to the vector at whatever key was given. 
        
    }
    
}

KnowledgeBase::~KnowledgeBase()
{
    FactDictionary.clear();
}
