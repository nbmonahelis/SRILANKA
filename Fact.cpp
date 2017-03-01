//
//  Fact.cpp
//  SRI
//
//  Created by Babbie Monahelis on 2/25/17.
//  Copyright © 2017 Babbie Monahelis. All rights reserved.
//

#include "Fact.hpp"

//Constructor. Initializing the association of this object
//and the chain of the relationships.
Fact::Fact(vector<string> fact, string name)
{
    association = name;
    members = fact;
    
}
