#pragma once
#ifndef _ENV_H_
#define _ENV_H_

namespace environment{
    enum class error{
        NO_GCC=0,
        NO_LD=1,

    };
    int check();
}

#endif