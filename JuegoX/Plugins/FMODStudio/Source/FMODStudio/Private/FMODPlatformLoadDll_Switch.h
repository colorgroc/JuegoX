// Copyright (c), Firelight Technologies Pty, Ltd. 2012-2020.
#pragma once

#include "fmod_switch.h"

void *FMODPlatformLoadDll(const TCHAR *LibToLoad)
{
    return FPlatformProcess::GetDllHandle(LibToLoad);
}

FMOD_RESULT FMODPlatformSystemSetup()
{
    verifyfmod(FMOD::Thread_SetAttributes(FMOD_THREAD_TYPE_MIXER, FMOD_THREAD_AFFINITY_CORE_1));
    verifyfmod(FMOD::Thread_SetAttributes(FMOD_THREAD_TYPE_STUDIO_UPDATE, FMOD_THREAD_AFFINITY_CORE_0));
    verifyfmod(FMOD::Thread_SetAttributes(FMOD_THREAD_TYPE_STUDIO_LOAD_BANK, FMOD_THREAD_AFFINITY_CORE_0));
    verifyfmod(FMOD::Thread_SetAttributes(FMOD_THREAD_TYPE_STUDIO_LOAD_SAMPLE, FMOD_THREAD_AFFINITY_CORE_0));
    return FMOD_OK;
}
