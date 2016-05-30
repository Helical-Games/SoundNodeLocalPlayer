// This file implements the Plugin into the Unreal Engine

#include "_SoundNodeLocalPlayerPrivatePCH.h"

#include "SoundNodeLocalPlayer.h"

class FSoundNodeLocalPlayerModule : public ISoundNodeLocalPlayerModuleInterface
{
	/** IModuleInterface implementation */
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;
};

IMPLEMENT_MODULE( FSoundNodeLocalPlayerModule, SoundNodeLocalPlayer )

void FSoundNodeLocalPlayerModule::StartupModule()
{
	// This code will execute after your module is loaded into memory (but after global variables are initialized, of course.)
}

void FSoundNodeLocalPlayerModule::ShutdownModule()
{
	// This function may be called during shutdown to clean up your module.  For modules that support dynamic reloading,
	// we call this function before unloading the module.
}



