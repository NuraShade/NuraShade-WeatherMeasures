;============================================================
;  NuraShade Skin
;  Copyright (c) 2025 NuraShade
;
;  Licensed under the Creative Commons Attribution-ShareAlike 3.0 Unported License.
;  You are free to:
;    • Share — copy and redistribute the material in any medium or format
;    • Adapt — remix, transform, and build upon the material
;      for any purpose, even commercially.
;
;  Under the following terms:
;    • Attribution — You must give appropriate credit, provide a link to the license,
;      and indicate if changes were made.
;    • ShareAlike — If you remix, transform, or build upon the material,
;      you must distribute your contributions under the same license as the original.
;
;  License Details: https://creativecommons.org/licenses/by-sa/3.0/
;============================================================
[Measure_Weather_Hourly_Parent]
Measure=WebParser
URL=https://api.open-meteo.com/v1/forecast?latitude=#Latitude#&longitude=#Longitude#&hourly=temperature_2m,weather_code,is_day&timezone=auto&forecast_hours=7
RegExp=(?siU)"hourly".*?"time":\["([0-9-T:]+)","([0-9-T:]+)","([0-9-T:]+)","([0-9-T:]+)","([0-9-T:]+)","([0-9-T:]+)","([0-9-T:]+)"\].*?"temperature_2m":\[([0-9.-]+),([0-9.-]+),([0-9.-]+),([0-9.-]+),([0-9.-]+),([0-9.-]+),([0-9.-]+)\].*?"weather_code":\[([0-9]+),([0-9]+),([0-9]+),([0-9]+),([0-9]+),([0-9]+),([0-9]+)\].*?"is_day":\[([0-1]),([0-1]),([0-1]),([0-1]),([0-1]),([0-1]),([0-1])\]
UpdateRate=#Weather_Update_Rate#
Debug=#Weather_Debug#
Debug2File=#7HoursForecast_Debug_Path#
FinishAction=[!EnableMeasureGroup Weather]
DynamicVariables=1
;============================================================
; Hourly Forecast Times
;============================================================

[Measure_Hour1_Time]
Measure=WebParser
URL=[Measure_Weather_Hourly_Parent]
StringIndex=1
Group=Weather
Disabled=1
DynamicVariables=1

[Measure_Hour2_Time]
Measure=WebParser
URL=[Measure_Weather_Hourly_Parent]
StringIndex=2
Group=Weather
Disabled=1
DynamicVariables=1

[Measure_Hour3_Time]
Measure=WebParser
URL=[Measure_Weather_Hourly_Parent]
StringIndex=3
Group=Weather
Disabled=1
DynamicVariables=1

[Measure_Hour4_Time]
Measure=WebParser
URL=[Measure_Weather_Hourly_Parent]
StringIndex=4
Group=Weather
Disabled=1
DynamicVariables=1

[Measure_Hour5_Time]
Measure=WebParser
URL=[Measure_Weather_Hourly_Parent]
StringIndex=5
Group=Weather
Disabled=1
DynamicVariables=1

[Measure_Hour6_Time]
Measure=WebParser
URL=[Measure_Weather_Hourly_Parent]
StringIndex=6
Group=Weather
Disabled=1
DynamicVariables=1

[Measure_Hour7_Time]
Measure=WebParser
URL=[Measure_Weather_Hourly_Parent]
StringIndex=7
Group=Weather
Disabled=1
DynamicVariables=1
;============================================================
; Hourly Forecast Times Abbreviated
;============================================================

[Measure_Hour1_Time_Abbreviated]
Measure=WebParser
URL=[Measure_Weather_Hourly_Parent]
StringIndex=1
Group=Weather
Disabled=1
DynamicVariables=1

[Measure_Hour2_Time_Abbreviated]
Measure=WebParser
URL=[Measure_Weather_Hourly_Parent]
StringIndex=2
Group=Weather
Disabled=1
DynamicVariables=1

[Measure_Hour3_Time_Abbreviated]
Measure=WebParser
URL=[Measure_Weather_Hourly_Parent]
StringIndex=3
Group=Weather
Disabled=1
DynamicVariables=1

[Measure_Hour4_Time_Abbreviated]
Measure=WebParser
URL=[Measure_Weather_Hourly_Parent]
StringIndex=4
Group=Weather
Disabled=1
DynamicVariables=1

[Measure_Hour5_Time_Abbreviated]
Measure=WebParser
URL=[Measure_Weather_Hourly_Parent]
StringIndex=5
Group=Weather
Disabled=1
DynamicVariables=1

[Measure_Hour6_Time_Abbreviated]
Measure=WebParser
URL=[Measure_Weather_Hourly_Parent]
StringIndex=6
Group=Weather
Disabled=1
DynamicVariables=1

[Measure_Hour7_Time_Abbreviated]
Measure=WebParser
URL=[Measure_Weather_Hourly_Parent]
StringIndex=7
Group=Weather
Disabled=1
DynamicVariables=1
;============================================================
; Formatted Hourly Times
;============================================================

[Measure_Hour1_Time_Formatted]
Measure=Time
TimeStamp=[Measure_Hour1_Time]
TimeStampFormat=#Time_Stamp_Format_For_Hour#
Format=%H:00
Group=Weather
Disabled=1
DynamicVariables=1

[Measure_Hour2_Time_Formatted]
Measure=Time
TimeStamp=[Measure_Hour2_Time]
TimeStampFormat=#Time_Stamp_Format_For_Hour#
Format=%H:00
Group=Weather
Disabled=1
DynamicVariables=1

[Measure_Hour3_Time_Formatted]
Measure=Time
TimeStamp=[Measure_Hour3_Time]
TimeStampFormat=#Time_Stamp_Format_For_Hour#
Format=%H:00
Group=Weather
Disabled=1
DynamicVariables=1

[Measure_Hour4_Time_Formatted]
Measure=Time
TimeStamp=[Measure_Hour4_Time]
TimeStampFormat=#Time_Stamp_Format_For_Hour#
Format=%H:00
Group=Weather
Disabled=1
DynamicVariables=1

[Measure_Hour5_Time_Formatted]
Measure=Time
TimeStamp=[Measure_Hour5_Time]
TimeStampFormat=#Time_Stamp_Format_For_Hour#
Format=%H:00
Group=Weather
Disabled=1
DynamicVariables=1

[Measure_Hour6_Time_Formatted]
Measure=Time
TimeStamp=[Measure_Hour6_Time]
TimeStampFormat=#Time_Stamp_Format_For_Hour#
Format=%H:00
Group=Weather
Disabled=1
DynamicVariables=1

[Measure_Hour7_Time_Formatted]
Measure=Time
TimeStamp=[Measure_Hour7_Time]
TimeStampFormat=#Time_Stamp_Format_For_Hour#
Format=%H:00
Group=Weather
Disabled=1
DynamicVariables=1
;============================================================
; Formatted Hourly Abbreviated Times
;============================================================

[Measure_Hour1_Time_Abbreviated_Formatted]
Measure=Time
TimeStamp=[Measure_Hour1_Time]
TimeStampFormat=#Time_Stamp_Format_For_Hour#
Format=%H
Group=Weather
Disabled=1
DynamicVariables=1

[Measure_Hour2_Time_Abbreviated_Formatted]
Measure=Time
TimeStamp=[Measure_Hour2_Time]
TimeStampFormat=#Time_Stamp_Format_For_Hour#
Format=%H
Group=Weather
Disabled=1
DynamicVariables=1

[Measure_Hour3_Time_Abbreviated_Formatted]
Measure=Time
TimeStamp=[Measure_Hour3_Time]
TimeStampFormat=#Time_Stamp_Format_For_Hour#
Format=%H
Group=Weather
Disabled=1
DynamicVariables=1

[Measure_Hour4_Time_Abbreviated_Formatted]
Measure=Time
TimeStamp=[Measure_Hour4_Time]
TimeStampFormat=#Time_Stamp_Format_For_Hour#
Format=%H
Group=Weather
Disabled=1
DynamicVariables=1

[Measure_Hour5_Time_Abbreviated_Formatted]
Measure=Time
TimeStamp=[Measure_Hour5_Time]
TimeStampFormat=#Time_Stamp_Format_For_Hour#
Format=%H
Group=Weather
Disabled=1
DynamicVariables=1

[Measure_Hour6_Time_Abbreviated_Formatted]
Measure=Time
TimeStamp=[Measure_Hour6_Time]
TimeStampFormat=#Time_Stamp_Format_For_Hour#
Format=%H
Group=Weather
Disabled=1
DynamicVariables=1

[Measure_Hour7_Time_Abbreviated_Formatted]
Measure=Time
TimeStamp=[Measure_Hour7_Time]
TimeStampFormat=#Time_Stamp_Format_For_Hour#
Format=%H
Group=Weather
Disabled=1
DynamicVariables=1
;============================================================
; Formatted Hourly Times 12H Format (AM/PM)
;============================================================

[Measure_Hour1_Time_Formatted_12H]
Measure=Time
TimeStamp=[Measure_Hour1_Time]
TimeStampFormat=#Time_Stamp_Format_For_Hour#
Format=%I:%M %p
Group=Weather
Disabled=1
DynamicVariables=1

[Measure_Hour2_Time_Formatted_12H]
Measure=Time
TimeStamp=[Measure_Hour2_Time]
TimeStampFormat=#Time_Stamp_Format_For_Hour#
Format=%I:%M %p
Group=Weather
Disabled=1
DynamicVariables=1

[Measure_Hour3_Time_Formatted_12H]
Measure=Time
TimeStamp=[Measure_Hour3_Time]
TimeStampFormat=#Time_Stamp_Format_For_Hour#
Format=%I:%M %p
Group=Weather
Disabled=1
DynamicVariables=1

[Measure_Hour4_Time_Formatted_12H]
Measure=Time
TimeStamp=[Measure_Hour4_Time]
TimeStampFormat=#Time_Stamp_Format_For_Hour#
Format=%I:%M %p
Group=Weather
Disabled=1
DynamicVariables=1

[Measure_Hour5_Time_Formatted_12H]
Measure=Time
TimeStamp=[Measure_Hour5_Time]
TimeStampFormat=#Time_Stamp_Format_For_Hour#
Format=%I:%M %p
Group=Weather
Disabled=1
DynamicVariables=1

[Measure_Hour6_Time_Formatted_12H]
Measure=Time
TimeStamp=[Measure_Hour6_Time]
TimeStampFormat=#Time_Stamp_Format_For_Hour#
Format=%I:%M %p
Group=Weather
Disabled=1
DynamicVariables=1

[Measure_Hour7_Time_Formatted_12H]
Measure=Time
TimeStamp=[Measure_Hour7_Time]
TimeStampFormat=#Time_Stamp_Format_For_Hour#
Format=%I:%M %p
Group=Weather
Disabled=1
DynamicVariables=1
;============================================================
; Formatted Hourly Times 12H Format Abbreviated (AM/PM)
;============================================================

[Measure_Hour1_Time_Abbreviated_Formatted_12H]
Measure=Time
TimeStamp=[Measure_Hour1_Time]
TimeStampFormat=#Time_Stamp_Format_For_Hour#
Format=%I %p
Group=Weather
Disabled=1
DynamicVariables=1

[Measure_Hour2_Time_Abbreviated_Formatted_12H]
Measure=Time
TimeStamp=[Measure_Hour2_Time]
TimeStampFormat=#Time_Stamp_Format_For_Hour#
Format=%I %p
Group=Weather
Disabled=1
DynamicVariables=1

[Measure_Hour3_Time_Abbreviated_Formatted_12H]
Measure=Time
TimeStamp=[Measure_Hour3_Time]
TimeStampFormat=#Time_Stamp_Format_For_Hour#
Format=%I %p
Group=Weather
Disabled=1
DynamicVariables=1

[Measure_Hour4_Time_Abbreviated_Formatted_12H]
Measure=Time
TimeStamp=[Measure_Hour4_Time]
TimeStampFormat=#Time_Stamp_Format_For_Hour#
Format=%I %p
Group=Weather
Disabled=1
DynamicVariables=1

[Measure_Hour5_Time_Abbreviated_Formatted_12H]
Measure=Time
TimeStamp=[Measure_Hour5_Time]
TimeStampFormat=#Time_Stamp_Format_For_Hour#
Format=%I %p
Group=Weather
Disabled=1
DynamicVariables=1

[Measure_Hour6_Time_Abbreviated_Formatted_12H]
Measure=Time
TimeStamp=[Measure_Hour6_Time]
TimeStampFormat=#Time_Stamp_Format_For_Hour#
Format=%I %p
Group=Weather
Disabled=1
DynamicVariables=1

[Measure_Hour7_Time_Abbreviated_Formatted_12H]
Measure=Time
TimeStamp=[Measure_Hour7_Time]
TimeStampFormat=#Time_Stamp_Format_For_Hour#
Format=%I %p
Group=Weather
Disabled=1
DynamicVariables=1
;============================================================
; Next 7 Hours Forecast
;============================================================
[Measure_Hour1_Temperature]
Measure=WebParser
URL=[Measure_Weather_Hourly_Parent]
StringIndex=8
Group=Weather
Disabled=1
DynamicVariables=1

[Measure_Hour2_Temperature]
Measure=WebParser
URL=[Measure_Weather_Hourly_Parent]
StringIndex=9
Group=Weather
Disabled=1
DynamicVariables=1

[Measure_Hour3_Temperature]
Measure=WebParser
URL=[Measure_Weather_Hourly_Parent]
StringIndex=10
Group=Weather
Disabled=1
DynamicVariables=1

[Measure_Hour4_Temperature]
Measure=WebParser
URL=[Measure_Weather_Hourly_Parent]
StringIndex=11
Group=Weather
Disabled=1
DynamicVariables=1

[Measure_Hour5_Temperature]
Measure=WebParser
URL=[Measure_Weather_Hourly_Parent]
StringIndex=12
Group=Weather
Disabled=1
DynamicVariables=1

[Measure_Hour6_Temperature]
Measure=WebParser
URL=[Measure_Weather_Hourly_Parent]
StringIndex=13
Group=Weather
Disabled=1
DynamicVariables=1

[Measure_Hour7_Temperature]
Measure=WebParser
URL=[Measure_Weather_Hourly_Parent]
StringIndex=14
Group=Weather
Disabled=1
DynamicVariables=1
;============================================================
; Next 7 Hours Forecast Rounded
;============================================================
[Measure_Hour1_Temperature_Rounded]
Measure=Calc
Formula=Round([Measure_Hour1_Temperature],0)
Group=Weather
Disabled=1
DynamicVariables=1

[Measure_Hour2_Temperature_Rounded]
Measure=Calc
Formula=Round([Measure_Hour2_Temperature],0)
Group=Weather
Disabled=1
DynamicVariables=1

[Measure_Hour3_Temperature_Rounded]
Measure=Calc
Formula=Round([Measure_Hour3_Temperature],0)
Group=Weather
Disabled=1
DynamicVariables=1

[Measure_Hour4_Temperature_Rounded]
Measure=Calc
Formula=Round([Measure_Hour4_Temperature],0)
Group=Weather
Disabled=1
DynamicVariables=1

[Measure_Hour5_Temperature_Rounded]
Measure=Calc
Formula=Round([Measure_Hour5_Temperature],0)
Group=Weather
Disabled=1
DynamicVariables=1

[Measure_Hour6_Temperature_Rounded]
Measure=Calc
Formula=Round([Measure_Hour6_Temperature],0)
Group=Weather
Disabled=1
DynamicVariables=1

[Measure_Hour7_Temperature_Rounded]
Measure=Calc
Formula=Round([Measure_Hour7_Temperature],0)
Group=Weather
Disabled=1
DynamicVariables=1
;============================================================
; Next 7 Hours Weather Code
;============================================================

[Measure_Hour1_Weather_Code]
Measure=WebParser
URL=[Measure_Weather_Hourly_Parent]
StringIndex=15
Group=Weather
Disabled=1
DynamicVariables=1

[Measure_Hour2_Weather_Code]
Measure=WebParser
URL=[Measure_Weather_Hourly_Parent]
StringIndex=16
Group=Weather
Disabled=1
DynamicVariables=1

[Measure_Hour3_Weather_Code]
Measure=WebParser
URL=[Measure_Weather_Hourly_Parent]
StringIndex=17
Group=Weather
Disabled=1
DynamicVariables=1

[Measure_Hour4_Weather_Code]
Measure=WebParser
URL=[Measure_Weather_Hourly_Parent]
StringIndex=18
Group=Weather
Disabled=1
DynamicVariables=1

[Measure_Hour5_Weather_Code]
Measure=WebParser
URL=[Measure_Weather_Hourly_Parent]
StringIndex=19
Group=Weather
Disabled=1
DynamicVariables=1

[Measure_Hour6_Weather_Code]
Measure=WebParser
URL=[Measure_Weather_Hourly_Parent]
StringIndex=20
Group=Weather
Disabled=1
DynamicVariables=1

[Measure_Hour7_Weather_Code]
Measure=WebParser
URL=[Measure_Weather_Hourly_Parent]
StringIndex=21
Group=Weather
Disabled=1
DynamicVariables=1
;============================================================
; Hourly Is Day Values
;============================================================

[Measure_Hour1_Is_Day]
Measure=WebParser
URL=[Measure_Weather_Hourly_Parent]
StringIndex=22
OnUpdateAction=[!SetVariable Hour1_Is_Day  [Measure_Hour1_Is_Day]]
Group=Weather
Disabled=1
DynamicVariables=1

[Measure_Hour2_Is_Day]
Measure=WebParser
URL=[Measure_Weather_Hourly_Parent]
StringIndex=23
OnUpdateAction=[!SetVariable Hour2_Is_Day  [Measure_Hour1_Is_Day]]
Group=Weather
Disabled=1
DynamicVariables=1

[Measure_Hour3_Is_Day]
Measure=WebParser
URL=[Measure_Weather_Hourly_Parent]
StringIndex=24
OnUpdateAction=[!SetVariable Hour3_Is_Day  [Measure_Hour1_Is_Day]]
Group=Weather
Disabled=1
DynamicVariables=1

[Measure_Hour4_Is_Day]
Measure=WebParser
URL=[Measure_Weather_Hourly_Parent]
StringIndex=25
OnUpdateAction=[!SetVariable Hour4_Is_Day  [Measure_Hour1_Is_Day]]
Group=Weather
Disabled=1
DynamicVariables=1

[Measure_Hour5_Is_Day]
Measure=WebParser
URL=[Measure_Weather_Hourly_Parent]
StringIndex=26
OnUpdateAction=[!SetVariable Hour5_Is_Day  [Measure_Hour1_Is_Day]]
Group=Weather
Disabled=1
DynamicVariables=1

[Measure_Hour6_Is_Day]
Measure=WebParser
URL=[Measure_Weather_Hourly_Parent]
StringIndex=27
OnUpdateAction=[!SetVariable Hour6_Is_Day  [Measure_Hour1_Is_Day]]
Group=Weather
Disabled=1
DynamicVariables=1

[Measure_Hour7_Is_Day]
Measure=WebParser
URL=[Measure_Weather_Hourly_Parent]
StringIndex=28
OnUpdateAction=[!SetVariable Hour7_Is_Day  [Measure_Hour1_Is_Day]]
Group=Weather
Disabled=1
DynamicVariables=1
;============================================================
; Hourly Weather Condition Translations
;============================================================

[Measure_Hour1_Weather_Condition_Translated]
Measure=Calc
Formula=[Measure_Hour1_Weather_Code]
RegExpSubstitute=1
Substitute=#Substitute_For_HourN_Weather_Condition_Translated#
Group=Weather
Disabled=1
DynamicVariables=1

[Measure_Hour2_Weather_Condition_Translated]
Measure=Calc
Formula=[Measure_Hour2_Weather_Code]
RegExpSubstitute=1
Substitute=#Substitute_For_HourN_Weather_Condition_Translated#
Group=Weather
Disabled=1
DynamicVariables=1

[Measure_Hour3_Weather_Condition_Translated]
Measure=Calc
Formula=[Measure_Hour3_Weather_Code]
RegExpSubstitute=1
Substitute=#Substitute_For_HourN_Weather_Condition_Translated#
Group=Weather
Disabled=1
DynamicVariables=1

[Measure_Hour4_Weather_Condition_Translated]
Measure=Calc
Formula=[Measure_Hour4_Weather_Code]
RegExpSubstitute=1
Substitute=#Substitute_For_HourN_Weather_Condition_Translated#
Group=Weather
Disabled=1
DynamicVariables=1

[Measure_Hour5_Weather_Condition_Translated]
Measure=Calc
Formula=[Measure_Hour5_Weather_Code]
RegExpSubstitute=1
Substitute=#Substitute_For_HourN_Weather_Condition_Translated#
Group=Weather
Disabled=1
DynamicVariables=1

[Measure_Hour6_Weather_Condition_Translated]
Measure=Calc
Formula=[Measure_Hour6_Weather_Code]
RegExpSubstitute=1
Substitute=#Substitute_For_HourN_Weather_Condition_Translated#
Group=Weather
Disabled=1
DynamicVariables=1

[Measure_Hour7_Weather_Condition_Translated]
Measure=Calc
Formula=[Measure_Hour7_Weather_Code]
RegExpSubstitute=1
Substitute=#Substitute_For_HourN_Weather_Condition_Translated#
Group=Weather
Disabled=1
DynamicVariables=1
;============================================================
; Hourly Weather Icons
;============================================================

[Measure_Hour1_Weather_Icon]
Measure=Calc
Formula=[Measure_Hour1_Weather_Code] + ([Measure_Hour1_Is_Day] * 1000)
RegExpSubstitute=1
Substitute=#Substitute_For_HourN_Weather_Icons#
Group=Weather
Disabled=1
DynamicVariables=1

[Measure_Hour2_Weather_Icon]
Measure=Calc
Formula=[Measure_Hour2_Weather_Code] + ([Measure_Hour2_Is_Day] * 1000)
RegExpSubstitute=1
Substitute=#Substitute_For_HourN_Weather_Icons#
Group=Weather
Disabled=1
DynamicVariables=1

[Measure_Hour3_Weather_Icon]
Measure=Calc
Formula=[Measure_Hour3_Weather_Code] + ([Measure_Hour3_Is_Day] * 1000)
RegExpSubstitute=1
Substitute=#Substitute_For_HourN_Weather_Icons#
Group=Weather
Disabled=1
DynamicVariables=1

[Measure_Hour4_Weather_Icon]
Measure=Calc
Formula=[Measure_Hour4_Weather_Code] + ([Measure_Hour4_Is_Day] * 1000)
RegExpSubstitute=1
Substitute=#Substitute_For_HourN_Weather_Icons#
Group=Weather
Disabled=1
DynamicVariables=1

[Measure_Hour5_Weather_Icon]
Measure=Calc
Formula=[Measure_Hour5_Weather_Code] + ([Measure_Hour5_Is_Day] * 1000)
RegExpSubstitute=1
Substitute=#Substitute_For_HourN_Weather_Icons#
Group=Weather
Disabled=1
DynamicVariables=1

[Measure_Hour6_Weather_Icon]
Measure=Calc
Formula=[Measure_Hour6_Weather_Code] + ([Measure_Hour6_Is_Day] * 1000)
RegExpSubstitute=1
Substitute=#Substitute_For_HourN_Weather_Icons#
Group=Weather
Disabled=1
DynamicVariables=1

[Measure_Hour7_Weather_Icon]
Measure=Calc
Formula=[Measure_Hour7_Weather_Code] + ([Measure_Hour7_Is_Day] * 1000)
RegExpSubstitute=1
Substitute=#Substitute_For_HourN_Weather_Icons#
Group=Weather
Disabled=1
DynamicVariables=1