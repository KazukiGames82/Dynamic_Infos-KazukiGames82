; [Notification]
; InlineSetting5=Color | [#NotificationTextColor[#TopBarSections][#Dynamic_Infos___Background_Visibility]],#TopBarTitleOpacity#
; StringAlign=[#Dynamic_Infos___Info_Align_[#Dynamic_Infos___Info_Align]]Center
; Padding=((10*#DroptopSize#)+(#TitleSpaOffset#*#DroptopSize#)),(0*#DroptopSize#),((10*#DroptopSize#)+(#TitleSpaOffset#*#DroptopSize#)),0
; X=(#Dynamic_Infos___App_X#+#Dynamic_Infos___App_Width_NoPadding#*([#Dynamic_Infos___Info_Align]=0?0:([#Dynamic_Infos___Info_Align]=1?0.5:1)))
; W=(#Dynamic_Infos___App_Width#*#SlideNot#)
; ClipStringW=(#Dynamic_Infos___App_Width#*#SlideNot#)
; Group=Animation | NotificationBar | Buttons00 | SysTray

; [TimeCenter]
; StringCase=[#Dynamic_Infos___Info_Time_Case_[#Dynamic_Infos___Info_Time_Case]]
; FontColor=[#NotificationTextColor[#TopBarSections][#Dynamic_Infos___Background_Visibility]],((#TopBarTitleOpacity#-(#TopBarTitleOpacity#*#SlideNot#))*(#Dynamic_Infos___Info_Style#=0?(#Dynamic_Infos___Info_Time_ForceAlign#=1?(#WebState#<>1?(1-#Dynamic_Infos___Info_Slider#):0):(#Dynamic_Infos___Info_Align#=0?([NowPlayingSongTitleB:XW]>[TimeCenter:X]?(#WebState#<>1?0:(1-#Dynamic_Infos___Info_Slider#)):1):(#Dynamic_Infos___Info_Align#=2?([TimeCenter:XW]>[NowPlayingSongTitleB:X]?(#WebState#<>1?0:(1-#Dynamic_Infos___Info_Slider#)):1):(#WebState#<>1?(1-#Dynamic_Infos___Info_Slider#):0))))   :  (#Dynamic_Infos___Info_Time_ForceAlign#=1?(#Dynamic_Infos___Info_App_1#=1?1:0):(#Dynamic_Infos___Info_Align#=0?([NowPlayingSongTitleB:XW]>[TimeCenter:X]?0:1):(#Dynamic_Infos___Info_Align#=2?([TimeCenter:XW]>[NowPlayingSongTitleB:X]?0:1):(#Dynamic_Infos___Info_Align#=1?(#Dynamic_Infos___Info_App_1#=1?1:0):1)))) ))
; StringAlign=[#Dynamic_Infos___Info_Align_[#Dynamic_Infos___Info_Time_ForceAlign][#Dynamic_Infos___Info_Align]]Center
; Padding=((10*#DroptopSize#)+(#TitleSpaOffset#*#DroptopSize#)),(0*#DroptopSize#),((10*#DroptopSize#)+(#TitleSpaOffset#*#DroptopSize#)),0
; X=(#Dynamic_Infos___App_X#+#Dynamic_Infos___App_Width_NoPadding#*([#Dynamic_Infos___Info_Time_ForceAlign]=1?([#Dynamic_Infos___Info_Align]=0?0:([#Dynamic_Infos___Info_Align]=1?0.5:1)):0.5))
; W=
; ClipStringW=#Dynamic_Infos___App_Width#
; H=(#TopHeight#-(#TopBarCutout#*2)-2)
; ClipString=2
; Group=Animation | NotificationBar | Buttons00 | SysTray

; [NowPlayingSongTitle]
; InlineSetting2=Color | [#NotificationTextColor[#TopBarSections][#Dynamic_Infos___Background_Visibility]],((#TopBarTitleOpacity#-(#TopBarTitleOpacity#*#SlideNot#))*(1-[#Dynamic_Infos___Info_Style]))
; InlineSetting5=[#TopBarTextShadow[#TopBarFontShadow][#ChamLum1][#LockTopBarShadow[#LockTopBarShadowNum]][#TopBarSections]]
; StringAlign=[#Dynamic_Infos___Info_Align_[#Dynamic_Infos___Info_Align]]Center
; Padding=((10*#DroptopSize#)+(#TitleSpaOffset#*#DroptopSize#)),(0*#DroptopSize#),((10*#DroptopSize#)+(#TitleSpaOffset#*#DroptopSize#)),0
; X=(#Dynamic_Infos___App_X#+#Dynamic_Infos___App_Width_NoPadding#*([#Dynamic_Infos___Info_Align]=0?0:([#Dynamic_Infos___Info_Align]=1?0.5:1)))
; W=
; ClipStringW=(#Dynamic_Infos___App_Width#*(#Dynamic_Infos___Info_Style#=0?#Dynamic_Infos___Info_Slider#:0))
; Text=[#PlayerTitle[#PlayerTypeNum]] - [#PlayerArtist[#PlayerTypeNum]]
; Hidden=#AlwaysShowSongTitleOFF#
; Group=Animation | NotificationBar | Buttons00 | SysTray

; [NowPlayingSongTitleB]
; StringAlign=[#Dynamic_Infos___Info_Align_[#Dynamic_Infos___Info_Align]]Center
; Padding=((10*#DroptopSize#)+(#TitleSpaOffset#*#DroptopSize#)),(0*#DroptopSize#),((10*#DroptopSize#)+(#TitleSpaOffset#*#DroptopSize#)),0
; X=(#Dynamic_Infos___App_X#+#Dynamic_Infos___App_Width_NoPadding#*([#Dynamic_Infos___Info_Align]=0?0:([#Dynamic_Infos___Info_Align]=1?0.5:1)))
; W=
; ClipStringW=(#Dynamic_Infos___App_Width#*(#Dynamic_Infos___Info_Style#=1?(#Dynamic_Infos___Info_App_1#=1?0:1):(#Dynamic_Infos___Info_Style#=0?#Dynamic_Infos___Info_Slider#:1)))
; Text="[#Dynamic_Infos___Info_Style_App_[#Dynamic_Infos___Info_Style][#Dynamic_Infos___Info_App_1]]"
; Hidden=0
; Group=Animation | NotificationBar | Buttons00 | SysTray
