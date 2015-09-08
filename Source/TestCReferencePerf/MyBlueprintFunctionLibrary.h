// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Kismet/BlueprintFunctionLibrary.h"
#include "MyBlueprintFunctionLibrary.generated.h"

/**
 * 
 */

USTRUCT(BlueprintType)
struct FST_Test
{
	GENERATED_USTRUCT_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Test")
	FVector Location;

	FST_Test()
	{
		Location = { -1, -1, -1 };
	};
};



UCLASS()
class TESTCREFERENCEPERF_API UMyBlueprintFunctionLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
	
public:

	UFUNCTION(BlueprintCallable, Category = "Test")
	static FST_Test TestRefPerf(const TArray<FST_Test>& TestArray);

	
};
