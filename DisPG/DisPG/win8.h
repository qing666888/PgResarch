#pragma once
extern "C" {
#include <ntddk.h>
}


////////////////////////////////////////////////////////////////////////////////
//
// macro utilities
//


////////////////////////////////////////////////////////////////////////////////
//
// constants and macros
//


////////////////////////////////////////////////////////////////////////////////
//
// types
//

struct Win8Symbols
{
    ULONG64 KernelVersion;
    ULONG_PTR KiCommitThreadWait;
    ULONG_PTR KiAttemptFastRemovePriQueue;
    ULONG_PTR HalPerformEndOfInterrupt;
    ULONG_PTR KeDelayExecutionThread;
    ULONG_PTR KeWaitForSingleObject;
    ULONG_PTR KiScbQueueScanWorker;
};


////////////////////////////////////////////////////////////////////////////////
//
// prototypes
//

EXTERN_C
NTSTATUS Win8DisablePatchGuard(
    __in const Win8Symbols& Symbols);


////////////////////////////////////////////////////////////////////////////////
//
// variables
//


////////////////////////////////////////////////////////////////////////////////
//
// implementations
//

