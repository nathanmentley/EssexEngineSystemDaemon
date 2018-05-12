/* 
 * Essex Engine
 * 
 * Copyright (C) 2018 Nathan Mentley - All Rights Reserved
 * You may use, distribute and modify this code under the
 * terms of the BSD license.
 *
 * You should have received a copy of the BSD license with
 * this file. If not, please visit: https://github.com/nathanmentley/EssexEngine
 */
#pragma once

#include <EssexEngineCore/IDriver.h>

namespace EssexEngine{
namespace Daemons{
namespace System{
    class ISystemDriver: public Core::IDriver
    {
    public:
        virtual void StartTimer() = 0;
        virtual int GetElapsedTime() = 0;
        virtual void Sleep(int milliseconds) = 0;
    private:
    };
}}};
