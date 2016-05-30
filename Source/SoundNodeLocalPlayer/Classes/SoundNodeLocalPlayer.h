// It initialize all functions and variables, and expose them to Blueprint.

#pragma once

#include "Sound/SoundNode.h"
#include "SoundNodeLocalPlayer.generated.h"

/**
* Choose different branch for sounds attached to locally controlled player
*/
UCLASS(hidecategories = Object, editinlinenew)
class USoundNodeLocalPlayer : public USoundNode
{
	GENERATED_UCLASS_BODY()

	virtual void ParseNodes(FAudioDevice* AudioDevice, const UPTRINT NodeWaveInstanceHash, FActiveSound& ActiveSound, const FSoundParseParameters& ParseParams, TArray<FWaveInstance*>& WaveInstances) override;
	virtual int32 GetMaxChildNodes() const override;
	virtual int32 GetMinChildNodes() const override;
#if WITH_EDITOR
	virtual FText GetInputPinName(int32 PinIndex) const override;
#endif
};
