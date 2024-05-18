#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ModelViewViewModel

#include "Basic.hpp"

#include "ModelViewViewModel_classes.hpp"
#include "ModelViewViewModel_parameters.hpp"


namespace SDK
{

// Function ModelViewViewModel.MVVMConversionLibrary.Conv_BoolToSlateVisibility
// (Final, Native, Static, Private, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                                    bIsVisible                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// ESlateVisibility                        TrueVisibility                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// ESlateVisibility                        FalseVisibility                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// ESlateVisibility                        ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

ESlateVisibility UMVVMConversionLibrary::Conv_BoolToSlateVisibility(bool bIsVisible, ESlateVisibility TrueVisibility, ESlateVisibility FalseVisibility)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("MVVMConversionLibrary", "Conv_BoolToSlateVisibility");

	Params::MVVMConversionLibrary_Conv_BoolToSlateVisibility Parms{};

	Parms.bIsVisible = bIsVisible;
	Parms.TrueVisibility = TrueVisibility;
	Parms.FalseVisibility = FalseVisibility;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function ModelViewViewModel.MVVMViewModelContextResolver.K2_CreateInstance
// (Event, Public, BlueprintEvent, Const)
// Parameters:
// class UClass*                           ExpectedType                                           (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UUserWidget*                      UserWidget                                             (ConstParm, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TScriptInterface<class INotifyFieldValueChanged>ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

TScriptInterface<class INotifyFieldValueChanged> UMVVMViewModelContextResolver::K2_CreateInstance(class UClass* ExpectedType, class UUserWidget* UserWidget) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MVVMViewModelContextResolver", "K2_CreateInstance");

	Params::MVVMViewModelContextResolver_K2_CreateInstance Parms{};

	Parms.ExpectedType = ExpectedType;
	Parms.UserWidget = UserWidget;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function ModelViewViewModel.MVVMGameSubsystem.GetViewModelCollection
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UMVVMViewModelCollectionObject*   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UMVVMViewModelCollectionObject* UMVVMGameSubsystem::GetViewModelCollection() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MVVMGameSubsystem", "GetViewModelCollection");

	Params::MVVMGameSubsystem_GetViewModelCollection Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function ModelViewViewModel.MVVMSubsystem.DoesWidgetTreeContainedWidget
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UWidgetTree*                      WidgetTree                                             (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UWidget*                          ViewWidget                                             (ConstParm, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMVVMSubsystem::DoesWidgetTreeContainedWidget(class UWidgetTree* WidgetTree, class UWidget* ViewWidget) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MVVMSubsystem", "DoesWidgetTreeContainedWidget");

	Params::MVVMSubsystem_DoesWidgetTreeContainedWidget Parms{};

	Parms.WidgetTree = WidgetTree;
	Parms.ViewWidget = ViewWidget;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function ModelViewViewModel.MVVMSubsystem.GetGlobalViewModelCollection
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UMVVMViewModelCollectionObject*   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UMVVMViewModelCollectionObject* UMVVMSubsystem::GetGlobalViewModelCollection() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MVVMSubsystem", "GetGlobalViewModelCollection");

	Params::MVVMSubsystem_GetGlobalViewModelCollection Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function ModelViewViewModel.MVVMSubsystem.K2_GetAvailableBinding
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UClass*                           Param_Class                                            (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FMVVMBindingName                 BindingName                                            (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UClass*                           Accessor                                               (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FMVVMAvailableBinding            ReturnValue                                            (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FMVVMAvailableBinding UMVVMSubsystem::K2_GetAvailableBinding(class UClass* Param_Class, const struct FMVVMBindingName& BindingName, class UClass* Accessor) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MVVMSubsystem", "K2_GetAvailableBinding");

	Params::MVVMSubsystem_K2_GetAvailableBinding Parms{};

	Parms.Param_Class = Param_Class;
	Parms.BindingName = std::move(BindingName);
	Parms.Accessor = Accessor;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function ModelViewViewModel.MVVMSubsystem.K2_GetAvailableBindings
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UClass*                           Param_Class                                            (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UClass*                           Accessor                                               (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FMVVMAvailableBinding>    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<struct FMVVMAvailableBinding> UMVVMSubsystem::K2_GetAvailableBindings(class UClass* Param_Class, class UClass* Accessor) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MVVMSubsystem", "K2_GetAvailableBindings");

	Params::MVVMSubsystem_K2_GetAvailableBindings Parms{};

	Parms.Param_Class = Param_Class;
	Parms.Accessor = Accessor;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function ModelViewViewModel.MVVMSubsystem.K2_GetViewFromUserWidget
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UUserWidget*                      UserWidget                                             (ConstParm, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UMVVMView*                        ReturnValue                                            (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UMVVMView* UMVVMSubsystem::K2_GetViewFromUserWidget(class UUserWidget* UserWidget) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MVVMSubsystem", "K2_GetViewFromUserWidget");

	Params::MVVMSubsystem_K2_GetViewFromUserWidget Parms{};

	Parms.UserWidget = UserWidget;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function ModelViewViewModel.MVVMViewModelBase.K2_AddFieldValueChangedDelegate
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FFieldNotificationId             FieldId                                                (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TDelegate<void(class UObject* Object, const struct FFieldNotificationId& Field)>Delegate                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMVVMViewModelBase::K2_AddFieldValueChangedDelegate(const struct FFieldNotificationId& FieldId, TDelegate<void(class UObject* Object, const struct FFieldNotificationId& Field)> Delegate)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MVVMViewModelBase", "K2_AddFieldValueChangedDelegate");

	Params::MVVMViewModelBase_K2_AddFieldValueChangedDelegate Parms{};

	Parms.FieldId = std::move(FieldId);
	Parms.Delegate = Delegate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function ModelViewViewModel.MVVMViewModelBase.K2_BroadcastFieldValueChanged
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// struct FFieldNotificationId             FieldId                                                (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMVVMViewModelBase::K2_BroadcastFieldValueChanged(const struct FFieldNotificationId& FieldId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MVVMViewModelBase", "K2_BroadcastFieldValueChanged");

	Params::MVVMViewModelBase_K2_BroadcastFieldValueChanged Parms{};

	Parms.FieldId = std::move(FieldId);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function ModelViewViewModel.MVVMViewModelBase.K2_RemoveFieldValueChangedDelegate
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FFieldNotificationId             FieldId                                                (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TDelegate<void(class UObject* Object, const struct FFieldNotificationId& Field)>Delegate                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMVVMViewModelBase::K2_RemoveFieldValueChangedDelegate(const struct FFieldNotificationId& FieldId, TDelegate<void(class UObject* Object, const struct FFieldNotificationId& Field)> Delegate)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MVVMViewModelBase", "K2_RemoveFieldValueChangedDelegate");

	Params::MVVMViewModelBase_K2_RemoveFieldValueChangedDelegate Parms{};

	Parms.FieldId = std::move(FieldId);
	Parms.Delegate = Delegate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function ModelViewViewModel.MVVMViewModelBase.K2_SetPropertyValue
// (Final, Native, Protected, HasOutParams, BlueprintCallable)
// Parameters:
// int32                                   OldValue                                               (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                                   NewValue                                               (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMVVMViewModelBase::K2_SetPropertyValue(int32& OldValue, int32& NewValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MVVMViewModelBase", "K2_SetPropertyValue");

	Params::MVVMViewModelBase_K2_SetPropertyValue Parms{};

	Parms.OldValue = OldValue;
	Parms.NewValue = NewValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function ModelViewViewModel.MVVMViewModelCollectionObject.AddViewModelInstance
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FMVVMViewModelContext            Context                                                (Parm, NoDestructor, NativeAccessSpecifierPublic)
// class UMVVMViewModelBase*               ViewModel                                              (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMVVMViewModelCollectionObject::AddViewModelInstance(const struct FMVVMViewModelContext& Context, class UMVVMViewModelBase* ViewModel)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MVVMViewModelCollectionObject", "AddViewModelInstance");

	Params::MVVMViewModelCollectionObject_AddViewModelInstance Parms{};

	Parms.Context = std::move(Context);
	Parms.ViewModel = ViewModel;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function ModelViewViewModel.MVVMViewModelCollectionObject.RemoveAllViewModelInstance
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UMVVMViewModelBase*               ViewModel                                              (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UMVVMViewModelCollectionObject::RemoveAllViewModelInstance(class UMVVMViewModelBase* ViewModel)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MVVMViewModelCollectionObject", "RemoveAllViewModelInstance");

	Params::MVVMViewModelCollectionObject_RemoveAllViewModelInstance Parms{};

	Parms.ViewModel = ViewModel;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function ModelViewViewModel.MVVMViewModelCollectionObject.RemoveViewModel
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FMVVMViewModelContext            Context                                                (Parm, NoDestructor, NativeAccessSpecifierPublic)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMVVMViewModelCollectionObject::RemoveViewModel(const struct FMVVMViewModelContext& Context)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MVVMViewModelCollectionObject", "RemoveViewModel");

	Params::MVVMViewModelCollectionObject_RemoveViewModel Parms{};

	Parms.Context = std::move(Context);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function ModelViewViewModel.MVVMViewModelCollectionObject.FindFirstViewModelInstanceOfType
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TSubclassOf<class UMVVMViewModelBase>   ViewModelClass                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UMVVMViewModelBase*               ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UMVVMViewModelBase* UMVVMViewModelCollectionObject::FindFirstViewModelInstanceOfType(TSubclassOf<class UMVVMViewModelBase>& ViewModelClass) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MVVMViewModelCollectionObject", "FindFirstViewModelInstanceOfType");

	Params::MVVMViewModelCollectionObject_FindFirstViewModelInstanceOfType Parms{};

	Parms.ViewModelClass = ViewModelClass;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function ModelViewViewModel.MVVMViewModelCollectionObject.FindViewModelInstance
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FMVVMViewModelContext            Context                                                (Parm, NoDestructor, NativeAccessSpecifierPublic)
// class UMVVMViewModelBase*               ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UMVVMViewModelBase* UMVVMViewModelCollectionObject::FindViewModelInstance(const struct FMVVMViewModelContext& Context) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MVVMViewModelCollectionObject", "FindViewModelInstance");

	Params::MVVMViewModelCollectionObject_FindViewModelInstance Parms{};

	Parms.Context = std::move(Context);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function ModelViewViewModel.MVVMView.InitializeBindings
// (Final, Native, Public, BlueprintCallable)

void UMVVMView::InitializeBindings()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MVVMView", "InitializeBindings");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// Function ModelViewViewModel.MVVMView.InitializeSources
// (Final, Native, Public, BlueprintCallable)

void UMVVMView::InitializeSources()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MVVMView", "InitializeSources");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// Function ModelViewViewModel.MVVMView.SetViewModel
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FName                             ViewModelName                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TScriptInterface<class INotifyFieldValueChanged>ViewModel                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMVVMView::SetViewModel(class FName ViewModelName, TScriptInterface<class INotifyFieldValueChanged> ViewModel)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MVVMView", "SetViewModel");

	Params::MVVMView_SetViewModel Parms{};

	Parms.ViewModelName = ViewModelName;
	Parms.ViewModel = ViewModel;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function ModelViewViewModel.MVVMView.SetViewModelByClass
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TScriptInterface<class INotifyFieldValueChanged>NewValue                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMVVMView::SetViewModelByClass(TScriptInterface<class INotifyFieldValueChanged> NewValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MVVMView", "SetViewModelByClass");

	Params::MVVMView_SetViewModelByClass Parms{};

	Parms.NewValue = NewValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function ModelViewViewModel.MVVMView.UninitializeBindings
// (Final, Native, Public, BlueprintCallable)

void UMVVMView::UninitializeBindings()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MVVMView", "UninitializeBindings");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// Function ModelViewViewModel.MVVMView.UninitializeSources
// (Final, Native, Public, BlueprintCallable)

void UMVVMView::UninitializeSources()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MVVMView", "UninitializeSources");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// Function ModelViewViewModel.MVVMView.AreBindingsInitialized
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMVVMView::AreBindingsInitialized() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MVVMView", "AreBindingsInitialized");

	Params::MVVMView_AreBindingsInitialized Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function ModelViewViewModel.MVVMView.AreSourcesInitialized
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMVVMView::AreSourcesInitialized() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MVVMView", "AreSourcesInitialized");

	Params::MVVMView_AreSourcesInitialized Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function ModelViewViewModel.MVVMView.GetViewModel
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FName                             ViewModelName                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TScriptInterface<class INotifyFieldValueChanged>ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

TScriptInterface<class INotifyFieldValueChanged> UMVVMView::GetViewModel(class FName ViewModelName) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MVVMView", "GetViewModel");

	Params::MVVMView_GetViewModel Parms{};

	Parms.ViewModelName = ViewModelName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

}
