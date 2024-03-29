[Variables]
; -------------------------------------------------------------------------------
; VariablesData.inc is used to store variables for your app that are not user-specific or user-configurable.
; Variables in this document should be used to control the app's general functionality.
; -------------------------------------------------------------------------------

MyAppVersion=24.0218

Dynamic_Infos___Update_Meters_TopBar=[!UpdateMeterGroup CustomApp[#Dynamic_Infos-KazukiGames82]Sys "Droptop\DropdownBar"][!UpdateMeterGroup SysTray "Droptop\DropdownBar"][!UpdateMeterGroup HL "Droptop\DropdownBar"][!UpdateMeterGroup NotificationBar "Droptop\DropdownBar"][!Redraw "Droptop\DropdownBar"]

; This values are used in key "X".
Dynamic_Infos___App_X=([Home:XW]+[WinButton:W]+#TopBarSectionSpacingX#+[Application:W]+[01:W]+[02:W]+[03:W]+[04:W]+[05:W]+#TopBarSectionSpacingX#*(1-[#*Dynamic_Infos___Auxiliar_Application_State*])+[Folder1:W]+[Folder2:W]+[Folder3:W]+[Folder4:W]+[Folder5:W]+[Folder6:W]+[Folder7:W]+[Folder8:W]+[Folder9:W]+[Folder10:W]+[Folder11:W]+[Folder12:W]+#TopBarSectionSpacingX#*(([#*FolderHidden1*]+[#*FolderHidden2*]+[#*FolderHidden3*]+[#*FolderHidden4*]+[#*FolderHidden5*]+[#*FolderHidden6*]+[#*FolderHidden7*]+[#*FolderHidden8*]+[#*FolderHidden9*]+[#*FolderHidden10*]+[#*FolderHidden11*]+[#*FolderHidden12*])=12?0:1))
Dynamic_Infos___App_Width_NoPadding=([#WORKAREAWIDTH[#DroptopDisplayMonitor]]-([[#*SideAppName1*]:W]+[[#*SideAppName2*]:W]+[[#*SideAppName3*]:W]+[[#*SideAppName4*]:W]+[[#*SideAppName5*]:W]+[[#*SideAppName6*]:W]+[[#*SideAppName7*]:W]+[[#*SideAppName8*]:W]+[[#*SideAppName9*]:W]+[[#*SideAppName10*]:W]+[[#*SideAppName11*]:W]+[[#*SideAppName12*]:W]+[[#*SideAppName13*]:W]+[[#*SideAppName14*]:W]+[[#*SideAppName15*]:W]+[[#*SideAppName16*]:W]+[[#*SideAppName17*]:W]+[[#*SideAppName18*]:W]+[[#*SideAppName19*]:W]+[[#*SideAppName20*]:W]+[[#*SideAppName21*]:W]+[[#*SideAppName22*]:W]+[Update:W]+[TopBarDivider1:W]+[TopBarDivider2:W]+[TopBarDivider3:W]+[TopBarDivider4:W]+[TopBarDivider5:W]+[TopBarDivider6:W]+[TopBarDivider7:W]+[TopBarDivider8:W]+[TopBarDivider9:W]+[TopBarDivider10:W]+[TopBarDivider11:W]+[TopBarDivider12:W]+[TopBarDivider13:W]+[TopBarDivider14:W]+[TopBarDivider15:W]+[TopBarDivider16:W]+[TopBarDivider17:W]+[TopBarDivider18:W]+[TopBarDivider19:W]+[TopBarDivider20:W]+[TopBarDivider21:W]+[TopBarDivider22:W])-[#*TopBarContentXOffset*]+#StretchBarWidth#+#BarLengthOffset#-#TopBarSectionSpacingX#-([Home:XW]+[WinButton:W]+#TopBarSectionSpacingX#+[Application:W]+[01:W]+[02:W]+[03:W]+[04:W]+[05:W]+#TopBarSectionSpacingX#*(1-[#*Dynamic_Infos___Auxiliar_Application_State*])+[Folder1:W]+[Folder2:W]+[Folder3:W]+[Folder4:W]+[Folder5:W]+[Folder6:W]+[Folder7:W]+[Folder8:W]+[Folder9:W]+[Folder10:W]+[Folder11:W]+[Folder12:W]+#TopBarSectionSpacingX#*(([#*FolderHidden1*]+[#*FolderHidden2*]+[#*FolderHidden3*]+[#*FolderHidden4*]+[#*FolderHidden5*]+[#*FolderHidden6*]+[#*FolderHidden7*]+[#*FolderHidden8*]+[#*FolderHidden9*]+[#*FolderHidden10*]+[#*FolderHidden11*]+[#*FolderHidden12*])=12?0:1)))

; This value is used in key "W"
Dynamic_Infos___App_Width=([#WORKAREAWIDTH[#DroptopDisplayMonitor]]-([[#*SideAppName1*]:W]+[[#*SideAppName2*]:W]+[[#*SideAppName3*]:W]+[[#*SideAppName4*]:W]+[[#*SideAppName5*]:W]+[[#*SideAppName6*]:W]+[[#*SideAppName7*]:W]+[[#*SideAppName8*]:W]+[[#*SideAppName9*]:W]+[[#*SideAppName10*]:W]+[[#*SideAppName11*]:W]+[[#*SideAppName12*]:W]+[[#*SideAppName13*]:W]+[[#*SideAppName14*]:W]+[[#*SideAppName15*]:W]+[[#*SideAppName16*]:W]+[[#*SideAppName17*]:W]+[[#*SideAppName18*]:W]+[[#*SideAppName19*]:W]+[[#*SideAppName20*]:W]+[[#*SideAppName21*]:W]+[[#*SideAppName22*]:W]+[Update:W]+[TopBarDivider1:W]+[TopBarDivider2:W]+[TopBarDivider3:W]+[TopBarDivider4:W]+[TopBarDivider5:W]+[TopBarDivider6:W]+[TopBarDivider7:W]+[TopBarDivider8:W]+[TopBarDivider9:W]+[TopBarDivider10:W]+[TopBarDivider11:W]+[TopBarDivider12:W]+[TopBarDivider13:W]+[TopBarDivider14:W]+[TopBarDivider15:W]+[TopBarDivider16:W]+[TopBarDivider17:W]+[TopBarDivider18:W]+[TopBarDivider19:W]+[TopBarDivider20:W]+[TopBarDivider21:W]+[TopBarDivider22:W])-[#*TopBarContentXOffset*]+#StretchBarWidth#+#BarLengthOffset#-#TopBarSectionSpacingX#-([Home:XW]+[WinButton:W]+#TopBarSectionSpacingX#+[Application:W]+[01:W]+[02:W]+[03:W]+[04:W]+[05:W]+#TopBarSectionSpacingX#*(1-[#*Dynamic_Infos___Auxiliar_Application_State*])+[Folder1:W]+[Folder2:W]+[Folder3:W]+[Folder4:W]+[Folder5:W]+[Folder6:W]+[Folder7:W]+[Folder8:W]+[Folder9:W]+[Folder10:W]+[Folder11:W]+[Folder12:W]+#TopBarSectionSpacingX#*(([#*FolderHidden1*]+[#*FolderHidden2*]+[#*FolderHidden3*]+[#*FolderHidden4*]+[#*FolderHidden5*]+[#*FolderHidden6*]+[#*FolderHidden7*]+[#*FolderHidden8*]+[#*FolderHidden9*]+[#*FolderHidden10*]+[#*FolderHidden11*]+[#*FolderHidden12*])=12?0:1))-((10*#DroptopSize#)+([#*TitleSpaOffset*]*#DroptopSize#))*2)

Dynamic_Infos___App_Length=([#WORKAREAWIDTH[#DroptopDisplayMonitor]]-([[#*SideAppName1*]:W]+[[#*SideAppName2*]:W]+[[#*SideAppName3*]:W]+[[#*SideAppName4*]:W]+[[#*SideAppName5*]:W]+[[#*SideAppName6*]:W]+[[#*SideAppName7*]:W]+[[#*SideAppName8*]:W]+[[#*SideAppName9*]:W]+[[#*SideAppName10*]:W]+[[#*SideAppName11*]:W]+[[#*SideAppName12*]:W]+[[#*SideAppName13*]:W]+[[#*SideAppName14*]:W]+[[#*SideAppName15*]:W]+[[#*SideAppName16*]:W]+[[#*SideAppName17*]:W]+[[#*SideAppName18*]:W]+[[#*SideAppName19*]:W]+[[#*SideAppName20*]:W]+[[#*SideAppName21*]:W]+[[#*SideAppName22*]:W]+[Update:W]+[TopBarDivider1:W]+[TopBarDivider2:W]+[TopBarDivider3:W]+[TopBarDivider4:W]+[TopBarDivider5:W]+[TopBarDivider6:W]+[TopBarDivider7:W]+[TopBarDivider8:W]+[TopBarDivider9:W]+[TopBarDivider10:W]+[TopBarDivider11:W]+[TopBarDivider12:W]+[TopBarDivider13:W]+[TopBarDivider14:W]+[TopBarDivider15:W]+[TopBarDivider16:W]+[TopBarDivider17:W]+[TopBarDivider18:W]+[TopBarDivider19:W]+[TopBarDivider20:W]+[TopBarDivider21:W]+[TopBarDivider22:W])-[#*TopBarContentXOffset*]+#StretchBarWidth#+#BarLengthOffset#-#TopBarSectionSpacingX#)

Dynamic_Infos___Timer_ChangeAction_000=[!CommandMeasure Dynamic_Infos___Measure_ActionTimer "Execute 4" "Droptop\DropdownBar"]
Dynamic_Infos___Timer_ChangeAction_001=[!CommandMeasure Dynamic_Infos___Measure_ActionTimer "Stop 2" "Droptop\DropdownBar"][!CommandMeasure Dynamic_Infos___Measure_ActionTimer "Execute 2" "Droptop\DropdownBar"]
Dynamic_Infos___Timer_ChangeAction_010=[!CommandMeasure Dynamic_Infos___Measure_ActionTimer "Execute 5" "Droptop\DropdownBar"]
Dynamic_Infos___Timer_ChangeAction_011=[!CommandMeasure Dynamic_Infos___Measure_ActionTimer "Stop 2" "Droptop\DropdownBar"][!Delay 1000][!CommandMeasure Dynamic_Infos___Measure_ActionTimer "Stop 1" "Droptop\DropdownBar"][!CommandMeasure Dynamic_Infos___Measure_ActionTimer "Execute 1" "Droptop\DropdownBar"]
Dynamic_Infos___Timer_ChangeAction_020=[!CommandMeasure Dynamic_Infos___Measure_ActionTimer "Execute 4" "Droptop\DropdownBar"]
Dynamic_Infos___Timer_ChangeAction_021=[!CommandMeasure Dynamic_Infos___Measure_ActionTimer "Stop 2" "Droptop\DropdownBar"][!CommandMeasure Dynamic_Infos___Measure_ActionTimer "Execute 2" "Droptop\DropdownBar"]
Dynamic_Infos___Timer_ChangeAction_100=
Dynamic_Infos___Timer_ChangeAction_101=
Dynamic_Infos___Timer_ChangeAction_110=
Dynamic_Infos___Timer_ChangeAction_111=
Dynamic_Infos___Timer_ChangeAction_120=
Dynamic_Infos___Timer_ChangeAction_121=
Dynamic_Infos___Timer_WebState_000=
Dynamic_Infos___Timer_WebState_001=
Dynamic_Infos___Timer_WebState_010=
Dynamic_Infos___Timer_WebState_011=[!CommandMeasure Dynamic_Infos___Measure_ActionTimer "Stop 2" "Droptop\DropdownBar"][!CommandMeasure Dynamic_Infos___Measure_ActionTimer "Stop 1" "Droptop\DropdownBar"][!CommandMeasure Dynamic_Infos___Measure_ActionTimer "Execute 1" "Droptop\DropdownBar"][!Delay 1000]
Dynamic_Infos___Timer_WebState_020=
Dynamic_Infos___Timer_WebState_021=
Dynamic_Infos___Timer_WebState_100=
Dynamic_Infos___Timer_WebState_101=
Dynamic_Infos___Timer_WebState_110=
Dynamic_Infos___Timer_WebState_111=
Dynamic_Infos___Timer_WebState_120=
Dynamic_Infos___Timer_WebState_121=
Dynamic_Infos___Timer_WebState_0=[!SetVariable WebState [MeasureStateWeb] "Droptop\DropdownBar"]
Dynamic_Infos___Timer_WebState_1=

Dynamic_Infos___Auxiliar_Application_State=(#Dynamic_Infos___Info_Style#=0?#HideProgramsApp#:(#Dynamic_Infos___Info_App_1#=2?1:#HideProgramsApp#))

Dynamic_Infos___Info_Slider=#WebState#

Dynamic_Infos___Info_Style_App_1_1_0=
Dynamic_Infos___Info_Style_App_1_1_1=
Dynamic_Infos___Info_Style_App_1_2_0=#OptionChanged.Suite#[!SetVariable Dynamic_Infos___Auxiliar_Application_State ([#*HideProgramsApp*]=1?0:1) "Droptop\DropdownBar"]
Dynamic_Infos___Info_Style_App_1_2_1=#OptionChanged.Suite#[!SetVariable Dynamic_Infos___Auxiliar_Application_State [#HideProgramsApp] "Droptop\DropdownBar"]
Dynamic_Infos___Info_Style_App_1_3_0=#OptionChanged.Suite#
Dynamic_Infos___Info_Style_App_1_3_1=#OptionChanged.Suite#
Dynamic_Infos___Info_Style_App_1_4_0=#OptionChanged.Suite#
Dynamic_Infos___Info_Style_App_1_4_1=#OptionChanged.Suite#
Dynamic_Infos___Info_Style_App_1_5_0=#OptionChanged.Suite#
Dynamic_Infos___Info_Style_App_1_5_1=#OptionChanged.Suite#
Dynamic_Infos___Info_Style_App_1_6_0=#OptionChanged.Suite#
Dynamic_Infos___Info_Style_App_1_6_1=#OptionChanged.Suite#
Dynamic_Infos___Info_Style_App_1_7_0=#OptionChanged.Suite#
Dynamic_Infos___Info_Style_App_1_7_1=#OptionChanged.Suite#
Dynamic_Infos___Info_Style_App_1_8_0=#OptionChanged.Suite#
Dynamic_Infos___Info_Style_App_1_8_1=#OptionChanged.Suite#
Dynamic_Infos___Info_Style_App_1_9_0=#OptionChanged.Suite#
Dynamic_Infos___Info_Style_App_1_9_1=#OptionChanged.Suite#
Dynamic_Infos___Info_Style_App_1_10_0=#OptionChanged.Suite#
Dynamic_Infos___Info_Style_App_1_10_1=#OptionChanged.Suite#

NotificationWeight00=#FontWeight#
NotificationWeight01=#FontWeight#
NotificationWeight10=800
NotificationWeight11=#FontWeight#

NotificationTextColor01=[#*TopBarFontColor1*]
NotificationTextColor11=[#*TopBarFontColor1*]
Dynamic_Infos___Info_Time_Case_0=None
Dynamic_Infos___Info_Time_Case_1=Proper
Dynamic_Infos___Info_Align_0=Left
Dynamic_Infos___Info_Align_1=Center
Dynamic_Infos___Info_Align_2=Right
Dynamic_Infos___Info_Align_00=Center
Dynamic_Infos___Info_Align_01=Center
Dynamic_Infos___Info_Align_02=Center
Dynamic_Infos___Info_Align_10=Left
Dynamic_Infos___Info_Align_11=Center
Dynamic_Infos___Info_Align_12=Right

