#include "BaseApplication.hpp"

// parse command line, read configuration, initialize all sub modules
int TEngine::BaseApplication::Initialize()
{
    m_bQuit = false;

    return 0;
}

// finalize all sub modules and clean up all runtime temporary file
void TEngine::BaseApplication::Finalize()
{
}

// one cycle of the main loop
void TEngine::BaseApplication::Tick()
{
}

bool TEngine::BaseApplication::IsQuit()
{
    return m_bQuit;
}