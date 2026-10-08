#pragma once
#include <wut.h>
#include <nn/result.h>

/**
 * \defgroup nn_ndm_ndm_cpp
 * \ingroup nn_ndm
 * Network daemon manager: suspend and resume the background network daemons (see nn::ndm)
 * @{
 */

#ifdef __cplusplus

namespace nn
{

namespace ndm
{

nn::Result
Initialize()
   asm("Initialize__Q2_2nn3ndmFv");

nn::Result
Finalize()
   asm("Finalize__Q2_2nn3ndmFv");

bool
IsInitialized()
   asm("IsInitialized__Q2_2nn3ndmFv");

//! Suspends the daemons selected by \p daemons (a bit mask).
nn::Result
SuspendDaemons(uint32_t daemons)
   asm("SuspendDaemons__Q2_2nn3ndmFUi");

//! Resumes the daemons selected by \p daemons (a bit mask).
nn::Result
ResumeDaemons(uint32_t daemons)
   asm("ResumeDaemons__Q2_2nn3ndmFUi");

nn::Result
SuspendDaemonsAndDisconnect()
   asm("SuspendDaemonsAndDisconnect__Q2_2nn3ndmFv");

nn::Result
SuspendDaemonsAndDisconnectIfWireless()
   asm("SuspendDaemonsAndDisconnectIfWireless__Q2_2nn3ndmFv");

nn::Result
ResumeDaemonsAndConnect()
   asm("ResumeDaemonsAndConnect__Q2_2nn3ndmFv");

nn::Result
EnableResumeDaemons()
   asm("EnableResumeDaemons__Q2_2nn3ndmFv");

nn::Result
DisableResumeDaemons()
   asm("DisableResumeDaemons__Q2_2nn3ndmFv");

nn::Result
EnableConcurrentConnection()
   asm("EnableConcurrentConnection__Q2_2nn3ndmFv");

} // namespace ndm

} // namespace nn

#endif

/** @} */
