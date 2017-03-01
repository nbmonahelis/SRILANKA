//
//  Component.cpp
//  SRI
//
//  Created by Babbie Monahelis on 2/28/17.
//  Copyright © 2017 Babbie Monahelis. All rights reserved.
//

#include "Component.hpp"
#include <iostream>
using namespace std;

Component::Component()
{
    identity = "";
    vector<string> elements;
    
}

Component::Component(string i, vector<string> members)
{
    identity = i;
    elements = members; 
  
}

Component::Component(const Component & copyComponent)
{
    identity = copyComponent.identity;
    elements = copyComponent.elements;
}

Component::~Component()
{
    
}

Fact::Fact(string a, vector<string> e)
{
    association = a;
    elements = e;
}

Fact::Fact(const Fact & f)
{
    association = f.identity;
    elements = f.elements;
}

Rule::Rule()
{
    association = "";
    vector<Component*> members;
    vector< bool (*) (bool, bool) > operators;
}

Rule::Rule(string i, vector<Component*> e, vector< bool (*) (bool, bool) > operators)
{
    association = i;
    elements = e;
    operators = functionOperator;
}
