#pragma once

#include "IApplication.hpp"

namespace TEngine
{
    class BaseApplication : implements IApplication
    {
    public:
        virtual int     Initialize();
        virtual void    Finalize();
        virtual void    Tick();

        virtual bool    IsQuit();

    private:
        // flag if need quit the main loop of the application
        bool m_bQuit;
    };
} // namespace TEngine
