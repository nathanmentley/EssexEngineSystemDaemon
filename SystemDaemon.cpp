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

#include <EssexEngineSystemDaemon/SystemDaemon.h>

EssexEngine::Daemons::System::SystemDaemon::SystemDaemon(WeakPointer<Context> _context):BaseDaemon(_context) {}

EssexEngine::Daemons::System::SystemDaemon::~SystemDaemon() {}

extern "C" {
    void daemon_init(EssexEngine::Context* context) {
        context->RegisterDaemon<EssexEngine::Daemons::System::SystemDaemon>(
            new EssexEngine::Daemons::System::SystemDaemon(context)
        );
    }
}

void EssexEngine::Daemons::System::SystemDaemon::StartTimer() {
    GetDriver()->StartTimer();
}

int EssexEngine::Daemons::System::SystemDaemon::GetElapsedTime() {
    return GetDriver()->GetElapsedTime();
}

void EssexEngine::Daemons::System::SystemDaemon::Sleep(int milliseconds) {
    GetDriver()->Sleep(milliseconds);
}
