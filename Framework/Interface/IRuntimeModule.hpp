#pragma once

#include "Interface.hpp"

namespace TEngine
{
    Interface IRuntimeModule
    {
        public:
        virtual ~IRuntimeModule() {};

        // init
        virtual int     Initialize() = 0;

        // de-init/clean up
        virtual void    Finalize() = 0;

        // tick
        virtual void    Tick() = 0;
    };
} // namespace TEngine
