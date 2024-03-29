[Rainmeter]

[Variables]

;----------------------------------------------------
; # # ADD BACKGROUND PROCESSES BELOW # # # # # # # #
; # # Measures that run even when the app isn't open
;----------------------------------------------------

;----------------------------------------------------------------------
; Example # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # #
; Updates the top bar when CPU temperature changes
; 
; UpdateDivider=10 rechecks the temperature every 10 seconds
; Recommended this number be no lower than 10 to prevent high CPU usage
;----------------------------------------------------------------------

Dynamic_Infos___Auxiliar_Application_State=(#Dynamic_Infos___Info_Style#=0?#HideProgramsApp#:(#Dynamic_Infos___Info_App_1#=2?0:#HideProgramsApp#))

[MeasureSetAppTitle]
Disabled=#Dynamic_Infos___Auxiliar_Application_State#

[MeasureWritePath]
Disabled=#Dynamic_Infos___Auxiliar_Application_State#

[MeasureStateWeb]
OnUpdateAction=[!Delay 1000][#Dynamic_Infos___Timer_WebState_[#Dynamic_Infos___Info_Style]][!WriteKeyValue Variables WebState [MeasureStateWeb] "#@#GlobalVar\Control.inc"][#Dynamic_Infos___Timer_ChangeAction_0[&MeasureStateWeb][#Dynamic_Infos___Info_Song_Animations]][!SetOption MeasureStateWeb OnUpdateAction ""]
OnChangeAction=[#Dynamic_Infos___Timer_WebState_[#Dynamic_Infos___Info_Style]][!WriteKeyValue Variables WebState [MeasureStateWeb] "#@#GlobalVar\Control.inc"][#Dynamic_Infos___Timer_ChangeAction_[#Dynamic_Infos___Info_Style][&MeasureStateWeb][#Dynamic_Infos___Info_Song_Animations]]

[MeasurePlayerWebTitle]
OnUpdateAction=[!Delay 1000][#Dynamic_Infos___Timer_WebState_[#Dynamic_Infos___Info_Style][&MeasureStateWeb][#Dynamic_Infos___Info_Song_Animations]][!CommandMeasure RunCommand.CoverBlur "Run"][!UpdateMeasureGroup WebNowPlaying][#TitleOnChangeAction[#VolumeAppLoaded]][!SetOption MeasurePlayerWebTitle OnUpdateAction ""]
OnChangeAction=[#Dynamic_Infos___Timer_WebState_[#Dynamic_Infos___Info_Style][&MeasureStateWeb][#Dynamic_Infos___Info_Song_Animations]][!CommandMeasure RunCommand.CoverBlur "Run"][!UpdateMeasureGroup WebNowPlaying][#TitleOnChangeAction[#VolumeAppLoaded]]

[Dynamic_Infos___Measure_PowerPlugin_LifeTime]
Measure=Plugin
Plugin=PowerPlugin
PowerState=LifeTime
Format=%#H #TimeHrShorthand#, %#M #TimeMinShorthand#
OnUpdateAction=[!SetVariable Dynamic_Infos___Battery_LifeTime "[Dynamic_Infos___Measure_PowerPlugin_LifeTime]" "Droptop\DropdownBar"][!WriteKeyValue Variables Dynamic_Infos___Battery_LifeTime "[Dynamic_Infos___Measure_PowerPlugin_LifeTime]" "#Dynamic_Infos___WriteConfigPath#"][!UpdateMeter Dynamic_Infos___KazukiGames82 "Droptop\DropdownBar"][!Redraw "Droptop\DropdownBar"][!SetOption Dynamic_Infos___Measure_PowerPlugin_LifeTime OnUpdateAction ""]
OnChangeAction=[!SetVariable Dynamic_Infos___Battery_LifeTime "[Dynamic_Infos___Measure_PowerPlugin_LifeTime]" "Droptop\DropdownBar"][!WriteKeyValue Variables Dynamic_Infos___Battery_LifeTime "[Dynamic_Infos___Measure_PowerPlugin_LifeTime]" "#Dynamic_Infos___WriteConfigPath#"][!UpdateMeter Dynamic_Infos___KazukiGames82 "Droptop\DropdownBar"][!Redraw "Droptop\DropdownBar"]
Substitute="Unknown":"Plugged In"
Disabled=(#Dynamic_Infos___Info_Style#=1?(#Dynamic_Infos___Info_App_1#=3?0:1):1)
UpdateDivider=1
DynamicVariables=1

[Dynamic_Infos___Measure_Uptime]
Measure=Uptime
Format="%4!i! days, %3!i! hours, %2!i! minutes, %1!i! seconds"
OnUpdateAction=[!SetVariable Dynamic_Infos___Uptime "[Dynamic_Infos___Measure_Uptime]" "Droptop\DropdownBar"][!WriteKeyValue Variables Dynamic_Infos___Uptime "[Dynamic_Infos___Measure_Uptime]" "#Dynamic_Infos___WriteConfigPath#"][!UpdateMeter Dynamic_Infos___KazukiGames82 "Droptop\DropdownBar"][!Redraw "Droptop\DropdownBar"][!SetOption Dynamic_Infos___Uptime OnUpdateAction ""]
OnChangeAction=[!SetVariable Dynamic_Infos___Uptime "[Dynamic_Infos___Measure_Uptime]" "Droptop\DropdownBar"][!WriteKeyValue Variables Dynamic_Infos___Uptime "[Dynamic_Infos___Measure_Uptime]" "#Dynamic_Infos___WriteConfigPath#"][!UpdateMeter Dynamic_Infos___KazukiGames82 "Droptop\DropdownBar"][!Redraw "Droptop\DropdownBar"]
Disabled=(#Dynamic_Infos___Info_Style#=1?(#Dynamic_Infos___Info_App_1#=4?0:1):1)
DynamicVariables=1