// Fill out your copyright notice in the Description page of Project Settings.

#include "TestCReferencePerf.h"
#include "MyBlueprintFunctionLibrary.h"



FST_Test UMyBlueprintFunctionLibrary::TestRefPerf(const TArray<FST_Test>& TestArray)
{
	return TestArray[0];
}