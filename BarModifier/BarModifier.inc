[Variables]
@IncludeDynamicInfosMeter1="#SKINSPATH#Droptop Community Apps\Apps\Dynamic_Infos-KazukiGames82\Config\Background.inc"
;----------------------------------------------------------------------
; Auxiliar Variables for apps state
;----------------------------------------------------------------------

Dynamic_Infos___Info_Main_0=[#Dynamic_Infos___Info_Style_App_[#*DisableAllNotifications*]]
Dynamic_Infos___Info_Main_1=

Dynamic_Infos___Info_Style_App_0=[#PlayerTitle[#*PlayerTypeNum*]] - [#PlayerArtist[#*PlayerTypeNum*]]
Dynamic_Infos___Info_Style_App_1=""

Dynamic_Infos___Info_Style_App_00=[#Dynamic_Infos___Info_Main_[#*AlwaysShowSongTitleOFF*]]
Dynamic_Infos___Info_Style_App_01=[#Dynamic_Infos___Info_Main_[#*AlwaysShowSongTitleOFF*]]
Dynamic_Infos___Info_Style_App_02=[#Dynamic_Infos___Info_Main_[#*AlwaysShowSongTitleOFF*]]
Dynamic_Infos___Info_Style_App_03=[#Dynamic_Infos___Info_Main_[#*AlwaysShowSongTitleOFF*]]
Dynamic_Infos___Info_Style_App_04=[#Dynamic_Infos___Info_Main_[#*AlwaysShowSongTitleOFF*]]
Dynamic_Infos___Info_Style_App_05=[#Dynamic_Infos___Info_Main_[#*AlwaysShowSongTitleOFF*]]
Dynamic_Infos___Info_Style_App_06=[#Dynamic_Infos___Info_Main_[#*AlwaysShowSongTitleOFF*]]
Dynamic_Infos___Info_Style_App_07=[#Dynamic_Infos___Info_Main_[#*AlwaysShowSongTitleOFF*]]
Dynamic_Infos___Info_Style_App_08=[#Dynamic_Infos___Info_Main_[#*AlwaysShowSongTitleOFF*]]
Dynamic_Infos___Info_Style_App_09=[#Dynamic_Infos___Info_Main_[#*AlwaysShowSongTitleOFF*]]
Dynamic_Infos___Info_Style_App_010=[#Dynamic_Infos___Info_Main_[#*AlwaysShowSongTitleOFF*]]
 
Dynamic_Infos___Info_Style_App_10=""
Dynamic_Infos___Info_Style_App_11=""
Dynamic_Infos___Info_Style_App_12=[#*LastFocusedApp*]
Dynamic_Infos___Info_Style_App_13=Battery Life Time: [#*Dynamic_Infos___Battery_LifeTime*]
Dynamic_Infos___Info_Style_App_14=Uptime: [#*Dynamic_Infos___Uptime*]
Dynamic_Infos___Info_Style_App_15=
Dynamic_Infos___Info_Style_App_16=
Dynamic_Infos___Info_Style_App_17=
Dynamic_Infos___Info_Style_App_18=
Dynamic_Infos___Info_Style_App_19=
Dynamic_Infos___Info_Style_App_110=

;----------------------------------------------------
; Styles - Droptop
;----------------------------------------------------

[Dynamic_Infos-KazukiGames82.Style]
ImageAlpha=(#TopBarTitleOpacity#*#Dynamic_Infos___App_Visibility#)
W=((((#TopHeight#+#TopBarIconHOffset#)*1.5)-((#TopHeight#+#TopBarIconHOffset#)*1.5)%1)*#Dynamic_Infos___App_Visibility#)

;----------------------------------------------------
; Measures - Droptop4
;----------------------------------------------------

[Dynamic_Infos___MeasureActionTimer]
@Include_Dynamic_Infos___Measure_ActionTimer=#SKINSPATH#Droptop Community Apps\Apps\Dynamic_Infos-KazukiGames82\Config\MeasureActionTimer[#Dynamic_Infos___Info_Mail_Animations].inc

[Dynamic_Infos___Measure_ActionTimer]
Measure=Plugin
Plugin=ActionTimer
ActionList1=ResetValue10 | Repeat SlideIn,#W#,20 | Wait 1500 | ResetValue11 | Repeat SlideOut,#W#,20 | UpdateTime
ResetValue10=[!SetVariable Dynamic_Infos___Info_Slider "0"]
SlideIn=[!SetVariable Dynamic_Infos___Info_Slider "(Clamp(#Dynamic_Infos___Info_Slider#-0.05,0,1))"]#U2#
ResetValue11=[!SetVariable Dynamic_Infos___Info_Slider "1"]
SlideOut=[!SetVariable Dynamic_Infos___Info_Slider "(Clamp(#Dynamic_Infos___Info_Slider#+0.05,0,1))"]#U2#
ActionList2=ResetValue10 | Repeat SlideIn,#W#,20 | UpdateTime
ActionList3=ResetValue11 | Repeat SlideOut,#W#,20 | UpdateTime 
ActionList4=ResetValue00 | UpdateTime
ActionList5=ResetValue01 | UpdateTime
ResetValue00=[!SetVariable Dynamic_Infos___Info_Slider "0"]#U2#
ResetValue01=[!SetVariable Dynamic_Infos___Info_Slider "1"]#U2#
UpdateTime=[!UpdateMeter NowPlayingSongTitleB][!UpdateMeter TimeCenter][!UpdateMeter Dynamic_Infos___KazukiGames82][!Redraw]
DynamicVariables=1
IgnoreWarnings=1
Group=Animation
Disabled=1

;----------------------------------------------------
; HideProgramsApp 
;----------------------------------------------------

[TopBar]
Shape11=Rectangle ([Application:X]-#TopBarSectionPadding#),(#TopBarCutout#+#TopBarSectionSpacingY#),([Application:W]+[01:W]+[02:W]+[03:W]+[04:W]+[05:W]+(#TopBarSectionPadding#*2)),(#TopHeight#-(#TopBarCutout#*2)-(#TopBarSectionSpacingY#*2)),#TopBarCorner# | Fill Color #TopBarBGColor1#,(((#ForceOpaque#=1?255:(#TopBarOpacity1#<1?1:#TopBarOpacity1#))*#TopBarSections#)*((#Dynamic_Infos___Auxiliar_Application_State#-1)*-1)) | StrokeWidth #TopBarStrokeWidth# | Stroke Color #TopBarStrokeColor#,((#TopBarStrokeOpacity#*#TopBarSections#)*(#Dynamic_Infos___Auxiliar_Application_State#-1)*-1) | Skew #TopBarSkew#,0
Shape13=Rectangle ([Application:XW]+[01:W]+[02:W]+[03:W]+[04:W]+[05:W]+(#TopBarSectionSpacingX#*((#Dynamic_Infos___Auxiliar_Application_State#-1)*-1))-#TopBarSectionPadding#),(#TopBarCutout#+#TopBarSectionSpacingY#),([Folder1:W]+[Folder2:W]+[Folder3:W]+[Folder4:W]+[Folder5:W]+[Folder6:W]+[Folder7:W]+[Folder8:W]+[Folder9:W]+[Folder10:W]+[Folder11:W]+[Folder12:W]+(#TopBarSectionPadding#*2)),(#TopHeight#-(#TopBarCutout#*2)-(#TopBarSectionSpacingY#*2)),#TopBarCorner# | Fill Color #TopBarBGColor1#,(((#ForceOpaque#=1?255:(#TopBarOpacity1#<1?1:#TopBarOpacity1#))*#TopBarSections#)*((#FolderHidden1#+#FolderHidden2#+#FolderHidden3#+#FolderHidden4#+#FolderHidden5#+#FolderHidden6#+#FolderHidden7#+#FolderHidden8#+#FolderHidden9#+#FolderHidden10#+#FolderHidden11#+#FolderHidden12#)=12?0:1)) | StrokeWidth #TopBarStrokeWidth# | Stroke Color #TopBarStrokeColor#,((#TopBarStrokeOpacity#*#TopBarSections#)*((#FolderHidden1#+#FolderHidden2#+#FolderHidden3#+#FolderHidden4#+#FolderHidden5#+#FolderHidden6#+#FolderHidden7#+#FolderHidden8#+#FolderHidden9#+#FolderHidden10#+#FolderHidden11#+#FolderHidden12#)=12?0:1)) | Skew #TopBarSkew#,0
Shape14=Rectangle ([Application:XW]+[01:W]+[02:W]+[03:W]+[04:W]+[05:W]+(#TopBarSectionSpacingX#*((#Dynamic_Infos___Auxiliar_Application_State#-1)*-1))-#TopBarSectionPadding#),(#TopBarCutout#+#TopBarSectionSpacingY#),([Folder1:W]+[Folder2:W]+[Folder3:W]+[Folder4:W]+[Folder5:W]+[Folder6:W]+[Folder7:W]+[Folder8:W]+[Folder9:W]+[Folder10:W]+[Folder11:W]+[Folder12:W]+(#TopBarSectionPadding#*2)),(#TopHeight#-(#TopBarCutout#*2)-(#TopBarSectionSpacingY#*2)),#TopGradientCorner# | StrokeWidth 0 | Fill LinearGradient ShadowGradient3 | Skew #TopBarSkew#,0

Shape88=Rectangle ([Application:X]-#TopBarSectionPadding#),(#TopBarCutout#+#TopBarSectionSpacingY#),([Application:W]+[01:W]+[02:W]+[03:W]+[04:W]+[05:W]+(#TopBarSectionPadding#*2)),(#TopHeight#-(#TopBarCutout#*2)-(#TopBarSectionSpacingY#*2)),#TopBarCorner# | Skew #TopBarSkew#,0 | Offset (#TopBarBlur#=0?(#TopBarShadowOffsetX#*#TopBarShadow#*#TopBarSections#*((#Dynamic_Infos___Auxiliar_Application_State#-1)*-1)):0),(#TopBarBlur#=0?(#TopBarShadowOffsetY#*#TopBarShadow#*#TopBarSections#*((#Dynamic_Infos___Auxiliar_Application_State#-1)*-1)):0)

Shape90=Rectangle ([Application:XW]+[01:W]+[02:W]+[03:W]+[04:W]+[05:W]+(#TopBarSectionSpacingX#*((#Dynamic_Infos___Auxiliar_Application_State#-1)*-1))-#TopBarSectionPadding#),(#TopBarCutout#+#TopBarSectionSpacingY#),([Folder1:W]+[Folder2:W]+[Folder3:W]+[Folder4:W]+[Folder5:W]+[Folder6:W]+[Folder7:W]+[Folder8:W]+[Folder9:W]+[Folder10:W]+[Folder11:W]+[Folder12:W]+(#TopBarSectionPadding#*2)),(#TopHeight#-(#TopBarCutout#*2)-(#TopBarSectionSpacingY#*2)),#TopBarCorner# | Skew #TopBarSkew#,0
Shape91=Rectangle ([Application:XW]+[01:W]+[02:W]+[03:W]+[04:W]+[05:W]+(#TopBarSectionSpacingX#*((#Dynamic_Infos___Auxiliar_Application_State#-1)*-1))-#TopBarSectionPadding#),(#TopBarCutout#+#TopBarSectionSpacingY#),([Folder1:W]+[Folder2:W]+[Folder3:W]+[Folder4:W]+[Folder5:W]+[Folder6:W]+[Folder7:W]+[Folder8:W]+[Folder9:W]+[Folder10:W]+[Folder11:W]+[Folder12:W]+(#TopBarSectionPadding#*2)),(#TopHeight#-(#TopBarCutout#*2)-(#TopBarSectionSpacingY#*2)),#TopBarCorner# | Skew #TopBarSkew#,0 | Offset (#TopBarBlur#=0?(#TopBarShadowOffsetX#*#TopBarShadow#*#TopBarSections#*((#FolderHidden1#+#FolderHidden2#+#FolderHidden3#+#FolderHidden4#+#FolderHidden5#+#FolderHidden6#+#FolderHidden7#+#FolderHidden8#+#FolderHidden9#+#FolderHidden10#+#FolderHidden11#+#FolderHidden12#)=12?0:1)):0),(#TopBarBlur#=0?(#TopBarShadowOffsetY#*#TopBarShadow#*#TopBarSections#*((#FolderHidden1#+#FolderHidden2#+#FolderHidden3#+#FolderHidden4#+#FolderHidden5#+#FolderHidden6#+#FolderHidden7#+#FolderHidden8#+#FolderHidden9#+#FolderHidden10#+#FolderHidden11#+#FolderHidden12#)=12?0:1)):0)

[Application]
Hidden=#Dynamic_Infos___Auxiliar_Application_State#
H=(#TopHeight#/2)

[PresetAppCommands]
Disabled=(#Dynamic_Infos___Auxiliar_Application_State#=1?1:#HideAppCommands#)

[FolderSpacing]
X=(#TopBarSectionSpacingX#*((#Dynamic_Infos___Auxiliar_Application_State#-1)*-1))R

[Folder1]
X=([05:XW]+(#TopBarSectionSpacingX#*((#Dynamic_Infos___Auxiliar_Application_State#-1)*-1)))

;----------------------------------------------------
; Meters - Droptop4
;----------------------------------------------------

[Notification]
InlineSetting5=Color | [#NotificationTextColor[#TopBarSections][#Dynamic_Infos___Background_Visibility]],#TopBarTitleOpacity#
StringAlign=[#Dynamic_Infos___Info_Align_[#Dynamic_Infos___Info_Align]]Center
Padding=((10*#DroptopSize#)+(#TitleSpaOffset#*#DroptopSize#)),#TopBarSysTextYPadding#,((10*#DroptopSize#)+(#TitleSpaOffset#*#DroptopSize#)),0
X=(#Dynamic_Infos___App_X#+#Dynamic_Infos___App_Width_NoPadding#*([#Dynamic_Infos___Info_Align]=0?0:([#Dynamic_Infos___Info_Align]=1?0.5:1)))
W=([#Dynamic_Infos___App_Length]-[#Dynamic_Infos___App_X]<0?0:(#Dynamic_Infos___App_Width#*#SlideNot#))
H=(#TopHeight#/2)
ClipString=2
ClipStringW=([#Dynamic_Infos___App_Length]-[#Dynamic_Infos___App_X]<0?0:(#Dynamic_Infos___App_Width#*#SlideNot#))
ClipStringH=(#TopHeight#/2)
FontWeight=[#NotificationWeight[#TopBarSections][#Dynamic_Infos___Background_Visibility]]
Group=Animation | NotificationBar

[TimeCenter]
StringCase=[#Dynamic_Infos___Info_Time_Case_[#Dynamic_Infos___Info_Time_Case]]
FontColor=[#NotificationTextColor[#TopBarSections][#Dynamic_Infos___Background_Visibility]],((#TopBarTitleOpacity#-(#TopBarTitleOpacity#*#SlideNot#))*(#Dynamic_Infos___Info_Style#=0?(#DisableAllNotifications#=1?1:(#AlwaysShowSongTitleOFF#=1?1:(#Dynamic_Infos___Info_Time_ForceAlign#=1?(#WebState#<>1?(1-#Dynamic_Infos___Info_Slider#):0):(#Dynamic_Infos___Info_Align#=0?([NowPlayingSongTitleB:XW]>[TimeCenter:X]?(#WebState#<>1?0:(1-#Dynamic_Infos___Info_Slider#)):1):(#Dynamic_Infos___Info_Align#=2?([TimeCenter:XW]>[NowPlayingSongTitleB:X]?(#WebState#<>1?0:(1-#Dynamic_Infos___Info_Slider#)):1):(#WebState#<>1?(1-#Dynamic_Infos___Info_Slider#):0)))))):(#Dynamic_Infos___Info_Time_ForceAlign#=1?(#Dynamic_Infos___Info_App_1#=1?1:0):(#Dynamic_Infos___Info_Align#=0?([NowPlayingSongTitleB:XW]>[TimeCenter:X]?0:1):(#Dynamic_Infos___Info_Align#=2?([TimeCenter:XW]>[NowPlayingSongTitleB:X]?0:1):(#Dynamic_Infos___Info_Align#=1?(#Dynamic_Infos___Info_App_1#=1?1:0):1))))))
StringAlign=[#Dynamic_Infos___Info_Align_[#Dynamic_Infos___Info_Time_ForceAlign][#Dynamic_Infos___Info_Align]]Center
Padding=((10*#DroptopSize#)+(#TitleSpaOffset#*#DroptopSize#)),#TopBarSysTextYPadding#,((10*#DroptopSize#)+(#TitleSpaOffset#*#DroptopSize#)),0
X=(#Dynamic_Infos___App_X#+#Dynamic_Infos___App_Width_NoPadding#*([#Dynamic_Infos___Info_Time_ForceAlign]=1?([#Dynamic_Infos___Info_Align]=0?0:([#Dynamic_Infos___Info_Align]=1?0.5:1)):0.5))
Y=(((#TopBarTextYOffset#+#TopHeight#/2)-((#TopBarTextYOffset#+#TopHeight#/2)%1))-(#TopHeight#*#TopBarMovement#))
W=
H=(#TopHeight#/2)
ClipString=2
ClipStringW=([#Dynamic_Infos___App_Length]-[#Dynamic_Infos___App_X]<0?0:#Dynamic_Infos___App_Width#)
ClipStringH=(#TopHeight#/2)
FontWeight=[#NotificationWeight[#TopBarSections][#Dynamic_Infos___Background_Visibility]]
Hidden=#HideTimeCenter#
ClipString=1
Group=Animation | NotificationBar

[NowPlayingSongTitle]
InlineSetting2=Color | [#NotificationTextColor[#TopBarSections][#Dynamic_Infos___Background_Visibility]],((#TopBarTitleOpacity#-(#TopBarTitleOpacity#*#SlideNot#))*(1-[#Dynamic_Infos___Info_Style]))
InlineSetting5=[#TopBarTextShadow[#TopBarFontShadow][#ChamLum1][#LockTopBarShadow[#LockTopBarShadowNum]][#TopBarSections]]
StringAlign=[#Dynamic_Infos___Info_Align_[#Dynamic_Infos___Info_Align]]Center
Padding=((10*#DroptopSize#)+(#TitleSpaOffset#*#DroptopSize#)),#TopBarSysTextYPadding#,((10*#DroptopSize#)+(#TitleSpaOffset#*#DroptopSize#)),0
X=(#Dynamic_Infos___App_X#+#Dynamic_Infos___App_Width_NoPadding#*([#Dynamic_Infos___Info_Align]=0?0:([#Dynamic_Infos___Info_Align]=1?0.5:1)))
Y=(((#TopBarTextYOffset#+#TopHeight#/2)-((#TopBarTextYOffset#+#TopHeight#/2)%1))-(#TopHeight#*#TopBarMovement#))
W=([#Dynamic_Infos___App_Length]-[#Dynamic_Infos___App_X]<0?0:(#Dynamic_Infos___App_Width#*(#Dynamic_Infos___Info_Style#=0?#Dynamic_Infos___Info_Slider#:0)))
H=(#TopHeight#/2)
ClipString=2
ClipStringW=([#Dynamic_Infos___App_Length]-[#Dynamic_Infos___App_X]<0?0:(#Dynamic_Infos___App_Width#*(#Dynamic_Infos___Info_Style#=0?#Dynamic_Infos___Info_Slider#:0)))
ClipStringH=(#TopHeight#/2)
FontWeight=[#NotificationWeight[#TopBarSections][#Dynamic_Infos___Background_Visibility]]
Text=[#Dynamic_Infos___Info_Main_[#AlwaysShowSongTitleOFF]]
Hidden=(#AlwaysShowSongTitleOFF#=0?#DisableAllNotifications#:1)
Group=Animation | NotificationBar

[NowPlayingSongTitleB]
StringAlign=[#Dynamic_Infos___Info_Align_[#Dynamic_Infos___Info_Align]]Center
Padding=((10*#DroptopSize#)+(#TitleSpaOffset#*#DroptopSize#)),#TopBarSysTextYPadding#,((10*#DroptopSize#)+(#TitleSpaOffset#*#DroptopSize#)),0
X=(#Dynamic_Infos___App_X#+#Dynamic_Infos___App_Width_NoPadding#*([#Dynamic_Infos___Info_Align]=0?0:([#Dynamic_Infos___Info_Align]=1?0.5:1)))
Y=(((#TopBarTextYOffset#+#TopHeight#/2)-((#TopBarTextYOffset#+#TopHeight#/2)%1))-(#TopHeight#*#TopBarMovement#))
W=
H=(#TopHeight#/2)
ClipString=2
ClipStringW=([#Dynamic_Infos___App_Length]-[#Dynamic_Infos___App_X]<0?0:(#Dynamic_Infos___App_Width#*(#Dynamic_Infos___Info_Style#=1?(#Dynamic_Infos___Info_App_1#=1?0:1):(#Dynamic_Infos___Info_Style#=0?#Dynamic_Infos___Info_Slider#:1))))
ClipStringH=(#TopHeight#/2)
FontWeight=[#NotificationWeight[#TopBarSections][#Dynamic_Infos___Background_Visibility]]
Text="[#Dynamic_Infos___Info_Style_App_[#Dynamic_Infos___Info_Style][#Dynamic_Infos___Info_App_1]]"
Hidden=0
Group=Animation | NotificationBar

[Dynamic_Infos-KazukiGames82]
Meter=Image
MeterStyle=InfoStyle | CustomAppModifierStyle

; ----------------------------------------------------
; Custom App - KazukiGames82
; ----------------------------------------------------

[Dynamic_Infos___Info_Style_Basic]
SolidColor=255,55,55,(55*((#DebugModeOFF#-1)*-1))
FontWeight=[#NotificationWeight[#TopBarSections][#Dynamic_Infos___Background_Visibility]]
InlineSetting2=[#TopBarTextShadow[#TopBarFontShadow][#ChamLum1][#LockTopBarShadow[#LockTopBarShadowNum]][#TopBarSections]]
InlineSetting3=Color | [#NotificationTextColor[#TopBarSections][#Dynamic_Infos___Background_Visibility]],(#TopBarTitleOpacity#-(#TopBarTitleOpacity#*#SlideNot#))
StringAlign=[#Dynamic_Infos___Info_Align_[#Dynamic_Infos___Info_Align]]Center
Padding=((10*#DroptopSize#)+(#TitleSpaOffset#*#DroptopSize#)),#TopBarSysTextYPadding#,((10*#DroptopSize#)+(#TitleSpaOffset#*#DroptopSize#)),0
Y=(((#TopBarTextYOffset#+#TopHeight#/2)-((#TopBarTextYOffset#+#TopHeight#/2)%1))-(#TopHeight#*#TopBarMovement#))
X=(#Dynamic_Infos___App_X#+#Dynamic_Infos___App_Width_NoPadding#*([#Dynamic_Infos___Info_Align]=0?0:([#Dynamic_Infos___Info_Align]=1?0.5:1)))
W=
H=(#TopHeight#/2)
ClipString=2
ClipStringW=([#Dynamic_Infos___App_Length]-[#Dynamic_Infos___App_X]<0?0:#Dynamic_Infos___App_Width#)
ClipStringH=(#TopHeight#/2)
LeftMouseDownAction=[]
MouseOverAction=
MouseLeaveAction=
Hidden=(1-#Dynamic_Infos___Info_Style#)
Group=Animation | NotificationBar

[Dynamic_Infos___Info_Style_1]
Hidden=1

[Dynamic_Infos___Info_Style_2]
StringCase=[#TopBarTitleCase[#TopBarTitleCaseNum]]
InlinePattern2=^[a-zA-Z0-9.,$;]
InlineSetting2=Case | [#TopBarTitleCaseApp[#TopBarTitleCaseNum]]
InlineSetting3=[#TopBarTextShadow[#TopBarFontShadow][#ChamLum1][#LockTopBarShadow[#LockTopBarShadowNum]]0]
InlineSetting4=Color | [#NotificationTextColor[#TopBarSections][#Dynamic_Infos___Background_Visibility]],(#TopBarTitleOpacity#-(#TopBarTitleOpacity#*#SlideNot#))
LeftMouseDownAction=[!EnableMouseActionGroup "MouseOverAction" Buttons00][!ToggleMouseAction #CURRENTSECTION# "MouseOverAction"][!ToggleConfig "Droptop\Other\Apps\Application\AppControls" "AppControls.ini"][!HideGroup Folders][!HideGroup Tray][!HideGroup WebView][!SetVariable ActiveFolder 0][!SetVariable ActiveAll (#ActiveTray#=4?0:1)][!SetVariable ActiveTray (#ActiveTray#=4?0:4)][!HideMeterGroup HighlightSelected][!CommandMeasure MeasureActionTimer "Execute 2" "Droptop\Other\PowerMenu"][!HideGroup ContextBox][!HideGroup SettingsMenu][!Move ([#CURRENTCONFIGX]+[#CURRENTSECTION#:X]+([#CURRENTSECTION#:W]/2)-#DropdownMenuWidth#-1+(#DropdownMenuWidth#/2)) ([#CURRENTCONFIGY]+#TopHeight#+#DropdownMenuYOffset#) "Droptop\Other\Apps\Application\AppControls"][!UpdateMeter #CURRENTSECTION#][!Redraw][!Log "#ErrorMessage#" Notice][!Delay 16][!#Show# "Droptop\Other\Apps\Application\AppControls"]
RightMouseDownAction=[!CommandMeasure MeasureActionTimer "Stop 3"][!SetVariable ButtonSection ""][!SetVariable ActiveAll 0][!SetVariable ActiveFolder 0][!SetVariable ActiveTray 0][#PowerMenuActionTimer[#PowerMenuLoadState]][!HideGroup Folders][!HideGroup Tray][!HideGroup WebView][!HideMeterGroup HighlightSelected][!HideMeterGroup HighlightSelected "#CURRENTCONFIG#\Other\ContextBox"][!HideGroup ContextBox][!HideGroup SettingsMenu][!WriteKeyValue Variables SettingsSubMenuOpenLeft 0 "#@#GlobalVar\Control.inc"][!WriteKeyValue Variables WindowPos [#CURRENTSECTION#:X] "#SKINSPATH#Droptop\DropdownBar\Other\ContextBox\ContextBox2.ini"][!WriteKeyValue Variables SettingsMenuIndex2 1 "#@#GlobalVar\SettingsMenuOptions.inc"][!ActivateConfig "#CURRENTCONFIG#\Other\ContextBox" "ContextBox2.ini"][!SetVariable FolderLoc "[#FolderLoc[#SlotFolder[##CURRENTSECTION#]]]" "#CURRENTCONFIG#\Other\ContextBox"][!SetVariable FolderTitle "[#FolderTitle[#SlotFolder[##CURRENTSECTION#]]]" "#CURRENTCONFIG#\Other\ContextBox"][!SetVariable FolderNum 1 "#CURRENTCONFIG#\Other\ContextBox"][!Move ([#CURRENTCONFIGX]+[#CURRENTSECTION#:X]-1) ([#CURRENTCONFIGY]+#TopHeight#+#DropdownContextMenuYOffset#) "#CURRENTCONFIG#\Other\ContextBox"][!UpdateMeterGroup Folders][!Redraw][!Redraw "#CURRENTCONFIG#\Other\ContextBox"][!#Show# "#CURRENTCONFIG#\Other\ContextBox"][!Delay 105][!HideGroup SettingsMenu]
MiddleMouseUpAction=[!CommandMeasure MeasureActionTimer "Stop 3"][#AppMiddleButton[#AppMiddleSelect]][!SetVariable AppMiddleSelect (#AppMiddleSelect#=1?0:1)][!UpdateMeter #CURRENTSECTION#][!Redraw]
FontWeight=#ApplicationFontWeight#

[Dynamic_Infos___Info_Style_3]
LeftMouseDownAction=[!EnableMouseActionGroup "MouseOverAction" Buttons00][!ToggleMouseAction #CURRENTSECTION# "MouseOverAction"][!ToggleConfig "Droptop\Other\Apps\Battery" "Battery.ini"][!HideGroup Folders][!HideGroup Tray][!HideGroup WebView][!SetVariable ActiveFolder 0][!SetVariable ActiveAll (#ActiveTray#=4?0:1)][!SetVariable ActiveTray (#ActiveTray#=4?0:4)][!HideMeterGroup HighlightSelected][!CommandMeasure MeasureActionTimer "Execute 2" "Droptop\Other\PowerMenu"][!HideGroup ContextBox][!HideGroup SettingsMenu][!Move ([#CURRENTCONFIGX]+[#CURRENTSECTION#:X]+([#CURRENTSECTION#:W]/2)-#DropdownMenuWidth#-1+(#DropdownMenuWidth#/2)) ([#CURRENTCONFIGY]+#TopHeight#+#DropdownMenuYOffset#) "Droptop\Other\Apps\Battery"][!UpdateMeter #CURRENTSECTION#][!Redraw][!Log "#ErrorMessage#" Notice][!Delay 16][!#Show# "Droptop\Other\Apps\Battery"]

[Dynamic_Infos___Info_Style_4]

[Dynamic_Infos___Info_Style_5]

[Dynamic_Infos___Info_Style_6]

[Dynamic_Infos___Info_Style_7]

[Dynamic_Infos___Info_Style_8]

[Dynamic_Infos___Info_Style_9]

[Dynamic_Infos___Info_Style_10]

[Dynamic_Infos___KazukiGames82]
Meter=String
MeterStyle=InfoStyle | Dynamic_Infos___Info_Style_Basic | Dynamic_Infos___Info_Style_#Dynamic_Infos___Info_App_1#
Text="[#Dynamic_Infos___Info_Style_App_1[#Dynamic_Infos___Info_App_1]]"
DynamicVariables=1
