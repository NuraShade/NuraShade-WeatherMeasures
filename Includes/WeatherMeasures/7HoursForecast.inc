;============================================================
;  NuraShade Skin
;  Copyright (c) 2025 NuraShade
;  Version 1.0
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
[Variables]
; Latitude=29.704813
; Longitude=72.560036
; ;Options: celsius,fahrenheit
; Temperature_Unit=celsius
; ; Options: kmh, mph, ms, kn (kilometers/hour, miles/hour, meters/second, knots)
; Wind_Speed_Unit=kmh
Debug=0
Time_Stamp_Format_For_Hour=%Y-%m-%dT%H:%M
Substitute_For_HourN_Weather_Icons="^1000$":"ClearDay.png","^0$":"ClearNight.png","^1001$":"MainlyClearDay.png","^1$":"MainlyClearNight.png","^1002$":"PartlyCloudyDay.png","^2$":"PartlyCloudyNight.png","^(100)?3$":"Overcast.png","^104[58]$":"FoggyDay.png","^4[58]$":"FoggyNight.png","^(10)?5[135]$":"Drizzle.png","^(10)?5[67]$":"FreezingRain.png","^(10)?6[135]$":"Rain.png","^(10)?6[67]$":"FreezingRain.png","^(10)?7[1357]$":"Snow.png","^(10)?8[012]$":"Rain.png","^(10)?8[56]$":"Snow.png","^(10)?9[569]$":"ThunderStorm.png"
Substitute_For_HourN_Weather_Condition_Translated="^0$":"Clear Sky","^1$":"Mainly Clear","^2$":"Partly Cloudy","^3$":"Overcast","^45$":"Fog","^48$":"Depositing Rime Fog","^51$":"Light Drizzle","^53$":"Moderate Drizzle","^55$":"Dense Drizzle","^56$":"Light Freezing Drizzle","^57$":"Dense Freezing Drizzle","^61$":"Slight Rain","^63$":"Moderate Rain","^65$":"Heavy Rain","^66$":"Light Freezing Rain","^67$":"Heavy Freezing Rain","^71$":"Slight Snow Fall","^73$":"Moderate Snow Fall","^75$":"Heavy Snow Fall","^77$":"Snow Grains","^80$":"Slight Rain Showers","^81$":"Moderate Rain Showers","^82$":"Violent Rain Showers","^85$":"Slight Snow Showers","^86$":"Heavy Snow Showers","^95$":"Thunderstorm","^96$":"Thunderstorm with Slight Hail","^99$":"Thunderstorm with Heavy Hail"

[Measure_Weather_Hourly_Parent]
Measure=WebParser
URL=https://api.open-meteo.com/v1/forecast?latitude=#Latitude#&longitude=#Longitude#&hourly=temperature_2m,weather_code,is_day&timezone=auto&forecast_hours=7
RegExp=(?siU)"hourly".*?"time":\["([0-9-T:]+)","([0-9-T:]+)","([0-9-T:]+)","([0-9-T:]+)","([0-9-T:]+)","([0-9-T:]+)","([0-9-T:]+)"\].*?"temperature_2m":\[([0-9.-]+),([0-9.-]+),([0-9.-]+),([0-9.-]+),([0-9.-]+),([0-9.-]+),([0-9.-]+)\].*?"weather_code":\[([0-9]+),([0-9]+),([0-9]+),([0-9]+),([0-9]+),([0-9]+),([0-9]+)\].*?"is_day":\[([0-1]),([0-1]),([0-1]),([0-1]),([0-1]),([0-1]),([0-1])\]
UpdateRate=600
DynamicVariables=1
Debug=#Debug#
Debug2File=#@#Debug\WeatherHourly.json
FinishAction=[!EnableMeasureGroup Weather]
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