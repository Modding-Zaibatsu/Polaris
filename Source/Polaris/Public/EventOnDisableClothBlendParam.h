#pragma once
#include "CoreMinimal.h"
#include "EventOnDisableClothBlendParam.generated.h"

USTRUCT(BlueprintType)
struct FEventOnDisableClothBlendParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 player_id;
    
    POLARIS_API FEventOnDisableClothBlendParam();
};

