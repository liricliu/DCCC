#pragma once
#ifndef _CONSTRUCTOR_H_
#define _CONSTRUCTOR_H_

enum class constructorType{
    execution,staticlib,dynamiclib
};

class constructor{
public:
    constructor();
    ~constructor();
private:
    constructorType type;
    
};

#endif