#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_TopBackerSettings_CloseButton

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "SlateCore_structs.hpp"


namespace SDK
{

// UserDefinedStruct BP_TopBackerSettings_CloseButton.BP_TopBackerSettings_CloseButton
// 0x00A0 (0x00A0 - 0x0000)
struct FBP_TopBackerSettings_CloseButton final
{
public:
	class FText                                   HeaderText_2_EA373CCE4930FCB77210B394319320C0;     // 0x0000(0x0018)(Edit, BlueprintVisible)
	bool                                          HasIcon_5_CD589218490309AA3D068EB349BB9170;        // 0x0018(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4E0C[0x7];                                     // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TSoftObjectPtr<class UTexture2D>              Icon_9_1F893CA94C1E7DA96C1CA79528953044;           // 0x0020(0x0028)(Edit, BlueprintVisible, HasGetValueTypeHash)
	struct FVector2D                              IconDesiredSize_12_7089676E460A29815F8F83BC80BABCA0; // 0x0048(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              IconRenderScale_14_D8AE2AF1418CB588B396A6B18DA91CCA; // 0x0058(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FMargin                                ContainerPadding_17_C45CA54740CDFDB090E5889918A7060F; // 0x0068(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FMargin                                TextPadding_19_003446FD4AFD75B2F74B25A2797C6E6E;   // 0x0078(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	EHorizontalAlignment                          TextHAlignment_24_E8CE26FC40E0B6C8564655BB01406C58; // 0x0088(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4E0D[0x3];                                     // 0x0089(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FMargin                                CloseButtonPadding_21_D4FE4BD94DFE4034CD4014822969DF6A; // 0x008C(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          ShowCloseButton_26_BCF7196548616FC8B20B9DBF9B75FEFF; // 0x009C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(FBP_TopBackerSettings_CloseButton) == 0x000008, "Wrong alignment on FBP_TopBackerSettings_CloseButton");
static_assert(sizeof(FBP_TopBackerSettings_CloseButton) == 0x0000A0, "Wrong size on FBP_TopBackerSettings_CloseButton");
static_assert(offsetof(FBP_TopBackerSettings_CloseButton, HeaderText_2_EA373CCE4930FCB77210B394319320C0) == 0x000000, "Member 'FBP_TopBackerSettings_CloseButton::HeaderText_2_EA373CCE4930FCB77210B394319320C0' has a wrong offset!");
static_assert(offsetof(FBP_TopBackerSettings_CloseButton, HasIcon_5_CD589218490309AA3D068EB349BB9170) == 0x000018, "Member 'FBP_TopBackerSettings_CloseButton::HasIcon_5_CD589218490309AA3D068EB349BB9170' has a wrong offset!");
static_assert(offsetof(FBP_TopBackerSettings_CloseButton, Icon_9_1F893CA94C1E7DA96C1CA79528953044) == 0x000020, "Member 'FBP_TopBackerSettings_CloseButton::Icon_9_1F893CA94C1E7DA96C1CA79528953044' has a wrong offset!");
static_assert(offsetof(FBP_TopBackerSettings_CloseButton, IconDesiredSize_12_7089676E460A29815F8F83BC80BABCA0) == 0x000048, "Member 'FBP_TopBackerSettings_CloseButton::IconDesiredSize_12_7089676E460A29815F8F83BC80BABCA0' has a wrong offset!");
static_assert(offsetof(FBP_TopBackerSettings_CloseButton, IconRenderScale_14_D8AE2AF1418CB588B396A6B18DA91CCA) == 0x000058, "Member 'FBP_TopBackerSettings_CloseButton::IconRenderScale_14_D8AE2AF1418CB588B396A6B18DA91CCA' has a wrong offset!");
static_assert(offsetof(FBP_TopBackerSettings_CloseButton, ContainerPadding_17_C45CA54740CDFDB090E5889918A7060F) == 0x000068, "Member 'FBP_TopBackerSettings_CloseButton::ContainerPadding_17_C45CA54740CDFDB090E5889918A7060F' has a wrong offset!");
static_assert(offsetof(FBP_TopBackerSettings_CloseButton, TextPadding_19_003446FD4AFD75B2F74B25A2797C6E6E) == 0x000078, "Member 'FBP_TopBackerSettings_CloseButton::TextPadding_19_003446FD4AFD75B2F74B25A2797C6E6E' has a wrong offset!");
static_assert(offsetof(FBP_TopBackerSettings_CloseButton, TextHAlignment_24_E8CE26FC40E0B6C8564655BB01406C58) == 0x000088, "Member 'FBP_TopBackerSettings_CloseButton::TextHAlignment_24_E8CE26FC40E0B6C8564655BB01406C58' has a wrong offset!");
static_assert(offsetof(FBP_TopBackerSettings_CloseButton, CloseButtonPadding_21_D4FE4BD94DFE4034CD4014822969DF6A) == 0x00008C, "Member 'FBP_TopBackerSettings_CloseButton::CloseButtonPadding_21_D4FE4BD94DFE4034CD4014822969DF6A' has a wrong offset!");
static_assert(offsetof(FBP_TopBackerSettings_CloseButton, ShowCloseButton_26_BCF7196548616FC8B20B9DBF9B75FEFF) == 0x00009C, "Member 'FBP_TopBackerSettings_CloseButton::ShowCloseButton_26_BCF7196548616FC8B20B9DBF9B75FEFF' has a wrong offset!");

}
