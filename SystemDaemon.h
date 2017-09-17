/* 
 * Essex Engine
 * 
 * Copyright (C) 2017 Nathan Mentley - All Rights Reserved
 * You may use, distribute and modify this code under the
 * terms of the BSD license.
 *
 * You should have received a copy of the BSD license with
 * this file. If not, please visit: https://github.com/nathanmentley/EssexEngine
 */
#pragma once

#include <EssexEngineSystemDaemon/ISystemDriver.h>
#include <EssexEngineCore/BaseDaemon.h>

namespace EssexEngine{
namespace Daemons{
namespace System{
    class SystemDaemon:public BaseDaemon<ISystemDriver>
    {
    public:
        SystemDaemon(WeakPointer<Context> _context);
        ~SystemDaemon();
        
        void Init() {
            if(GetContext()->HasDriver<Core::Logging::ILogDriver>()) {
                GetContext()->GetDriver<Core::Logging::ILogDriver>()->LogLine(
                    "Loading Daemon [%s] [%s]",
                    GetDaemonName().c_str(),
                    GetDaemonVersion().c_str()
                );
            }
        }
        std::string GetDaemonName() { return "System"; }
        std::string GetDaemonVersion() { return ESSEX_ENGINE_VERSION; }
        
        void StartTimer();
        int GetElapsedTime();
        void Sleep(int milliseconds);
    private:
    };
}}};