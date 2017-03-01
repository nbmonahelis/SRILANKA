//
//  Component.hpp
//  SRI
//
//  Created by Babbie Monahelis on 2/28/17.
//  Copyright © 2017 Babbie Monahelis. All rights reserved.
//

#ifndef Component_hpp
#define Component_hpp

#include <stdio.h>
#include <cstdarg>
#include <vector>
#include <stdlib.h>
#include <string>
using namespace std;

/* This will be the base class called Component which will either be a fact or a rule. */

typedef struct Component
{
    
    vector<string> elements; //Vector of strings to hold the elements of this component.
    string identity; //the identity for the fact or rule
    
    Component(); //default constructor
    Component(string identity, vector<string> members); 
    Component(const Component & comp); //Copy constructor.
    Component(Component && p);
    
    ~Component(); //Needed to be virtual because this class has descendants.
    
}Component;

typedef struct Fact : Component
{
    
    Fact(string identity, vector<string> members); //Main constructor for a Fact.
    Fact(const Fact & f); //Copy constructor.
    Fact(Fact && f); //Move constructor.
    
    string association; //The association of the fact i.e Father, Mother, etc...
    vector<string> members; //The members of the fact i.e John, Paul, Jones, etc...
    
   // bool factExists(vector<string> members); //Takes in a vector that represents the members of a fact.
    
}Fact;

typedef struct Rule : Component
{
    
    Rule();
    Rule(string identity, vector<Component*> elements, vector< bool (*) (bool, bool) > operators); //constructor that can accept rules with multiple components in a vector of type Component. 
    Rule(const Rule & r); //copy constructor.
    Rule(Rule && r); //Move constructor.
    
    string association; //The association of the rule i.e Grandfather, Grandmother, Parent, etc...
    vector<Component*> elements;
    vector< bool (*) (bool, bool) > functionOperator; //These point to AND/OR, similar to boolan ops.
    
    bool validate(vector<string> members); //Determines if a rule is valid based on the elements it is built from.
    
    
}Rule;


#endif /* Component_hpp */
