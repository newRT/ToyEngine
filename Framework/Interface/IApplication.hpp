#pragma once 

#include "Interface.hpp"
#include "IRuntimeModule.hpp"

namespace TEngine
{
    Interface IApplication : implements IRuntimeModule
    {
    public:
        virtual int     Initialize() = 0;
        virtual void    Finalize() = 0;

        // one cycle of the main loop
        virtual void    Tick() = 0;

        // need quit?
        virtual bool    IsQuit() = 0;
    };
} // namespace TEngine
