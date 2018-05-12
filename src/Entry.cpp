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

#include <EssexEngineSystemDaemon/SystemDaemon.h>

using EssexEngine::Context;
using EssexEngine::WeakPointer;

using EssexEngine::Daemons::System::SystemDaemon;

extern "C" {
    void daemon_init(WeakPointer<Context> context) {
        context->RegisterDaemon<SystemDaemon>(
            new SystemDaemon(context)
        );
    }
}

