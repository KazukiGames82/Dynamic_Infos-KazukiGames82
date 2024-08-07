[Rainmeter]

[Variables]

Dynamic_Infos-KazukiGames82___Auxiliar_Application_State=([#*Dynamic_Infos-KazukiGames82___Use_Custom_Info*]=0?[#*HideProgramsApp*]:([#*Dynamic_Infos-KazukiGames82___Type_Custom_Info*]=2?0:[#*HideProgramsApp*]))
Dynamic_Infos-KazukiGames82___Auxiliar_Weather_State=([#*Dynamic_Infos-KazukiGames82___Use_Custom_Info*]=0?[#*HideAppWeather*]:([#*Dynamic_Infos-KazukiGames82___Type_Custom_Info*]=5?0:[#*HideAppWeather*]))
Dynamic_Infos-KazukiGames82___Auxiliar_Info_3_State=([#*Dynamic_Infos-KazukiGames82___Use_Custom_Info*]=0?1:([#*Dynamic_Infos-KazukiGames82___Type_Custom_Info*]=3?0:1))
Dynamic_Infos-KazukiGames82___Auxiliar_Info_4_State=([#*Dynamic_Infos-KazukiGames82___Use_Custom_Info*]=0?1:([#*Dynamic_Infos-KazukiGames82___Type_Custom_Info*]=4?0:1))

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

[MeasureStateWeb]
OnUpdateAction=[#Dynamic_Infos-KazukiGames82___Data_Slider_Set_[#Dynamic_Infos-KazukiGames82___Use_Custom_Info]][!WriteKeyValue Variables WebState [MeasureStateWeb] "#@#GlobalVar\Control.inc"][#Dynamic_Infos-KazukiGames82___Data_Slider_Action_[#Dynamic_Infos-KazukiGames82___Use_Custom_Info][&MeasureStateWeb]][!SetOption MeasureStateWeb OnUpdateAction ""]
OnChangeAction=[#Dynamic_Infos-KazukiGames82___Data_Slider_Set_[#Dynamic_Infos-KazukiGames82___Use_Custom_Info]][!WriteKeyValue Variables WebState [MeasureStateWeb] "#@#GlobalVar\Control.inc"][#Dynamic_Infos-KazukiGames82___Data_Slider_Action_[#Dynamic_Infos-KazukiGames82___Use_Custom_Info][&MeasureStateWeb]]

;----------------------------------------------------------------------
; CUSTOM INFO 2
;----------------------------------------------------------------------

[MeasureSetAppTitle]
Disabled=#Dynamic_Infos-KazukiGames82___Auxiliar_Application_State#

[MeasureWritePath]
Disabled=#Dynamic_Infos-KazukiGames82___Auxiliar_Application_State#

;----------------------------------------------------------------------
; CUSTOM INFO 3
;----------------------------------------------------------------------

[Dynamic_Infos-KazukiGames82_Measure_Power]
Measure=Plugin
Plugin=PowerPlugin
PowerState=LifeTime
Format=%#H #TimeHrShorthand#, %#M #TimeMinShorthand#
OnUpdateAction=[!SetVariable Dynamic_Infos-KazukiGames82___Data_Custom_Info_3 "[Dynamic_Infos-KazukiGames82_Measure_Power]" "Droptop\DropdownBar"][!WriteKeyValue Variables Dynamic_Infos-KazukiGames82___Data_Custom_Info_3 "[Dynamic_Infos-KazukiGames82_Measure_Power]" "#Dynamic_Infos-KazukiGames82___MyVariablesLoc#"][!UpdateMeter Dynamic_Infos-KazukiGames82 "Droptop\DropdownBar"][!Redraw "Droptop\DropdownBar"][!SetOption Dynamic_Infos-KazukiGames82_Measure_Power OnUpdateAction ""]
OnChangeAction=[!SetVariable Dynamic_Infos-KazukiGames82___Data_Custom_Info_3 "[Dynamic_Infos-KazukiGames82_Measure_Power]" "Droptop\DropdownBar"][!WriteKeyValue Variables Dynamic_Infos-KazukiGames82___Data_Custom_Info_3 "[Dynamic_Infos-KazukiGames82_Measure_Power]" "#Dynamic_Infos-KazukiGames82___MyVariablesLoc#"][!UpdateMeter Dynamic_Infos-KazukiGames82 "Droptop\DropdownBar"][!Redraw "Droptop\DropdownBar"]
Substitute="Unknown":"Plugged In"
Disabled=#Dynamic_Infos-KazukiGames82___Auxiliar_Info_3_State#
DynamicVariables=1
UpdateDivider=30
Group=Dynamic_Infos-KazukiGames82

;----------------------------------------------------------------------
; CUSTOM INFO 4
;----------------------------------------------------------------------

[Dynamic_Infos-KazukiGames82_Measure_Uptime]
Measure=Uptime
Format="%4!i! #TimeDayShorthand#, %3!i! #TimeHrShorthand#, %2!i! #TimeMinShorthand#"
OnUpdateAction=[!SetVariable Dynamic_Infos-KazukiGames82___Data_Custom_Info_4 "[Dynamic_Infos-KazukiGames82_Measure_Uptime]" "Droptop\DropdownBar"][!WriteKeyValue Variables Dynamic_Infos-KazukiGames82___Data_Custom_Info_4 "[Dynamic_Infos-KazukiGames82_Measure_Uptime]" "#Dynamic_Infos-KazukiGames82___MyVariablesLoc#"][!UpdateMeter Dynamic_Infos-KazukiGames82 "Droptop\DropdownBar"][!Redraw "Droptop\DropdownBar"][!SetOption Dynamic_Infos-KazukiGames82_Measure_Uptime OnUpdateAction ""]
OnChangeAction=[!SetVariable Dynamic_Infos-KazukiGames82___Data_Custom_Info_4 "[Dynamic_Infos-KazukiGames82_Measure_Uptime]" "Droptop\DropdownBar"][!WriteKeyValue Variables Dynamic_Infos-KazukiGames82___Data_Custom_Info_4 "[Dynamic_Infos-KazukiGames82_Measure_Uptime]" "#Dynamic_Infos-KazukiGames82___MyVariablesLoc#"][!UpdateMeter Dynamic_Infos-KazukiGames82 "Droptop\DropdownBar"][!Redraw "Droptop\DropdownBar"]
Disabled=#Dynamic_Infos-KazukiGames82___Auxiliar_Info_4_State#
DynamicVariables=1
UpdateDivider=60
Group=Dynamic_Infos-KazukiGames82

;----------------------------------------------------------------------
; CUSTOM INFO 4
;----------------------------------------------------------------------

[MeasureTime20M]
Disabled=#Dynamic_Infos-KazukiGames82___Auxiliar_Weather_State#
