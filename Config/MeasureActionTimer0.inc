[MeasureActionTimer]
Measure=Plugin
Plugin=ActionTimer
ActionList1=SlideOut | Wait 10000 | SlideIn
SlideOut=[!SetVariable SlideNot 1]#U2#
SlideIn=[!SetVariable SlideNot 0]#U2#
ActionList2=SlideOut#AlwaysShowSongTitleOFF# | Wait 10000 | SlideIn1 | EndSlideIn
SlideOut1=[!SetVariable SlideNot 1]#U2#
SlideIn1=[!SetVariable SlideNot 0]#U2#
EndSlideIn=[!SetVariable SlideNot 0]#U2#