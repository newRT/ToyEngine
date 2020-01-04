#include <stdio.h>
#include "IApplication.hpp"

using namespace TEngine;

namespace TEngine
{
    extern IApplication* g_pApp;
} // namespace TEngine

int main(int argc, char** argv)
{
    int ret = 0;

    if ((ret == g_pApp->Initialize()) != 0)
    {
        printf("App Initialize failed, will exit now.");
        return ret;
    }

    while (!g_pApp->IsQuit())
    {   
        g_pApp->Tick();
    }

    g_pApp->Finalize();

    return 0;    
}
