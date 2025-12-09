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
Time_Stamp_Format_For_Date_And_Day_Name=%Y-%m-%d
Time_Stamp_Format_For_Sun_Cycle=%Y-%m-%dT%H:%M
Substitute_For_DayN_Weather_Condition_Translated="^0$":"Clear Sky","^1$":"Mainly Clear","^2$":"Partly Cloudy","^3$":"Overcast","^45$":"Fog","^48$":"Depositing Rime Fog","^51$":"Light Drizzle","^53$":"Moderate Drizzle","^55$":"Dense Drizzle","^56$":"Light Freezing Drizzle","^57$":"Dense Freezing Drizzle","^61$":"Slight Rain","^63$":"Moderate Rain","^65$":"Heavy Rain","^66$":"Light Freezing Rain","^67$":"Heavy Freezing Rain","^71$":"Slight Snow Fall","^73$":"Moderate Snow Fall","^75$":"Heavy Snow Fall","^77$":"Snow Grains","^80$":"Slight Rain Showers","^81$":"Moderate Rain Showers","^82$":"Violent Rain Showers","^85$":"Slight Snow Showers","^86$":"Heavy Snow Showers","^95$":"Thunderstorm","^96$":"Thunderstorm with Slight Hail","^99$":"Thunderstorm with Heavy Hail"
Substitute_For_DayN_Weather_Icon="^0$":"ClearDay.png","^1$":"ClearDay.png","^2$":"PartlyCloudyDay.png","^3$":"Overcast.png","^45$":"FoggyDay.png","^48$":"FoggyDay.png","^51$":"Drizzle.png","^53$":"Drizzle.png","^55$":"Drizzle.png","^56$":"FreezingRain.png","^57$":"FreezingRain.png","^61$":"Rain.png","^63$":"Rain.png","^65$":"Rain.png","^66$":"FreezingRain.png","^67$":"FreezingRain.png","^71$":"Snow.png","^73$":"Snow.png","^75$":"Snow.png","^77$":"Snow.png","^80$":"Rain.png","^81$":"Rain.png","^82$":"Rain.png","^85$":"Snow.png","^86$":"Snow.png","^95$":"ThunderStorm.png","^96$":"ThunderStorm.png","^99$":"ThunderStorm.png"

[Measure_Weather_Daily_Parent]
Measure=WebParser
URL=https://api.open-meteo.com/v1/forecast?latitude=#Latitude#&longitude=#Longitude#&daily=weather_code,temperature_2m_max,temperature_2m_min,sunrise,sunset&timezone=auto&forecast_days=7&temperature_unit=#Temperature_Unit#
RegExp=(?siU)"daily".*?"time":\["([0-9-]+)","([0-9-]+)","([0-9-]+)","([0-9-]+)","([0-9-]+)","([0-9-]+)","([0-9-]+)"\].*?"weather_code":\[([0-9]+),([0-9]+),([0-9]+),([0-9]+),([0-9]+),([0-9]+),([0-9]+)\].*?"temperature_2m_max":\[([0-9.-]+),([0-9.-]+),([0-9.-]+),([0-9.-]+),([0-9.-]+),([0-9.-]+),([0-9.-]+)\].*?"temperature_2m_min":\[([0-9.-]+),([0-9.-]+),([0-9.-]+),([0-9.-]+),([0-9.-]+),([0-9.-]+),([0-9.-]+)\].*?"sunrise":\["([0-9-T:]+)","([0-9-T:]+)","([0-9-T:]+)","([0-9-T:]+)","([0-9-T:]+)","([0-9-T:]+)","([0-9-T:]+)"\].*?"sunset":\["([0-9-T:]+)","([0-9-T:]+)","([0-9-T:]+)","([0-9-T:]+)","([0-9-T:]+)","([0-9-T:]+)","([0-9-T:]+)"\]
UpdateRate=600
DynamicVariables=1
Debug=#Debug#
Debug2File=#@#Debug\WeatherDaily.json
FinishAction=[!EnableMeasureGroup Weather]

[Measure_Day1_Date]
Measure=WebParser
URL=[Measure_Weather_Daily_Parent]
StringIndex=1
Group=Weather
Disabled=1
DynamicVariables=1

[Measure_Day2_Date]
Measure=WebParser
URL=[Measure_Weather_Daily_Parent]
StringIndex=2
Group=Weather
Disabled=1
DynamicVariables=1

[Measure_Day3_Date]
Measure=WebParser
URL=[Measure_Weather_Daily_Parent]
StringIndex=3
Group=Weather
Disabled=1
DynamicVariables=1

[Measure_Day4_Date]
Measure=WebParser
URL=[Measure_Weather_Daily_Parent]
StringIndex=4
Group=Weather
Disabled=1
DynamicVariables=1

[Measure_Day5_Date]
Measure=WebParser
URL=[Measure_Weather_Daily_Parent]
StringIndex=5
Group=Weather
Disabled=1
DynamicVariables=1

[Measure_Day6_Date]
Measure=WebParser
URL=[Measure_Weather_Daily_Parent]
StringIndex=6
Group=Weather
Disabled=1
DynamicVariables=1

[Measure_Day7_Date]
Measure=WebParser
URL=[Measure_Weather_Daily_Parent]
StringIndex=7
Group=Weather
Disabled=1
DynamicVariables=1
;============================================================
; Day of Week Names
;============================================================

[Measure_Day1_Name]
Measure=Time
TimeStamp=[Measure_Day1_Date]
TimeStampFormat=#Time_Stamp_Format_For_Date_And_Day_Name#
Format=%A
Group=Weather
Disabled=1
DynamicVariables=1

[Measure_Day2_Name]
Measure=Time
TimeStamp=[Measure_Day2_Date]
TimeStampFormat=#Time_Stamp_Format_For_Date_And_Day_Name#
Format=%A
Group=Weather
Disabled=1
DynamicVariables=1

[Measure_Day3_Name]
Measure=Time
TimeStamp=[Measure_Day3_Date]
TimeStampFormat=#Time_Stamp_Format_For_Date_And_Day_Name#
Format=%A
Group=Weather
Disabled=1
DynamicVariables=1

[Measure_Day4_Name]
Measure=Time
TimeStamp=[Measure_Day4_Date]
TimeStampFormat=#Time_Stamp_Format_For_Date_And_Day_Name#
Format=%A
Group=Weather
Disabled=1
DynamicVariables=1

[Measure_Day5_Name]
Measure=Time
TimeStamp=[Measure_Day5_Date]
TimeStampFormat=#Time_Stamp_Format_For_Date_And_Day_Name#
Format=%A
Group=Weather
Disabled=1
DynamicVariables=1

[Measure_Day6_Name]
Measure=Time
TimeStamp=[Measure_Day6_Date]
TimeStampFormat=#Time_Stamp_Format_For_Date_And_Day_Name#
Format=%A
Group=Weather
Disabled=1
DynamicVariables=1

[Measure_Day7_Name]
Measure=Time
TimeStamp=[Measure_Day7_Date]
TimeStampFormat=#Time_Stamp_Format_For_Date_And_Day_Name#
Format=%A
Group=Weather
Disabled=1
DynamicVariables=1
;============================================================
; Abbreviated Day Names
;============================================================

[Measure_Day1_Name_Abbreviated]
Measure=Time
TimeStamp=[Measure_Day1_Date]
TimeStampFormat=#Time_Stamp_Format_For_Date_And_Day_Name#
Format=%a
Group=Weather
Disabled=1
DynamicVariables=1

[Measure_Day2_Name_Abbreviated]
Measure=Time
TimeStamp=[Measure_Day2_Date]
TimeStampFormat=#Time_Stamp_Format_For_Date_And_Day_Name#
Format=%a
Group=Weather
Disabled=1
DynamicVariables=1

[Measure_Day3_Name_Abbreviated]
Measure=Time
TimeStamp=[Measure_Day3_Date]
TimeStampFormat=#Time_Stamp_Format_For_Date_And_Day_Name#
Format=%a
Group=Weather
Disabled=1
DynamicVariables=1

[Measure_Day4_Name_Abbreviated]
Measure=Time
TimeStamp=[Measure_Day4_Date]
TimeStampFormat=#Time_Stamp_Format_For_Date_And_Day_Name#
Format=%a
Group=Weather
Disabled=1
DynamicVariables=1

[Measure_Day5_Name_Abbreviated]
Measure=Time
TimeStamp=[Measure_Day5_Date]
TimeStampFormat=#Time_Stamp_Format_For_Date_And_Day_Name#
Format=%a
Group=Weather
Disabled=1
DynamicVariables=1

[Measure_Day6_Name_Abbreviated]
Measure=Time
TimeStamp=[Measure_Day6_Date]
TimeStampFormat=#Time_Stamp_Format_For_Date_And_Day_Name#
Format=%a
Group=Weather
Disabled=1
DynamicVariables=1

[Measure_Day7_Name_Abbreviated]
Measure=Time
TimeStamp=[Measure_Day7_Date]
TimeStampFormat=#Time_Stamp_Format_For_Date_And_Day_Name#
Format=%a
Group=Weather
Disabled=1
DynamicVariables=1
;============================================================
; Next 7 Days Maximum Temperature
;============================================================

[Measure_Day1_Max_Temperature]
Measure=WebParser
URL=[Measure_Weather_Daily_Parent]
StringIndex=15
Group=Weather
Disabled=1
DynamicVariables=1

[Measure_Day1_Max_Temperature_Rounded]
Measure=Calc
Formula=Round([Measure_Day1_Max_Temperature],0)
Group=Weather
Disabled=1
DynamicVariables=1

[Measure_Day2_Max_Temperature]
Measure=WebParser
URL=[Measure_Weather_Daily_Parent]
StringIndex=16
Group=Weather
Disabled=1
DynamicVariables=1

[Measure_Day2_Max_Temperature_Rounded]
Measure=Calc
Formula=Round([Measure_Day2_Max_Temperature],0)
Group=Weather
Disabled=1
DynamicVariables=1

[Measure_Day3_Max_Temperature]
Measure=WebParser
URL=[Measure_Weather_Daily_Parent]
StringIndex=17
Group=Weather
Disabled=1
DynamicVariables=1

[Measure_Day3_Max_Temperature_Rounded]
Measure=Calc
Formula=Round([Measure_Day3_Max_Temperature],0)
Group=Weather
Disabled=1
DynamicVariables=1

[Measure_Day4_Max_Temperature]
Measure=WebParser
URL=[Measure_Weather_Daily_Parent]
StringIndex=18
Group=Weather
Disabled=1
DynamicVariables=1

[Measure_Day4_Max_Temperature_Rounded]
Measure=Calc
Formula=Round([Measure_Day4_Max_Temperature],0)
Group=Weather
Disabled=1
DynamicVariables=1

[Measure_Day5_Max_Temperature]
Measure=WebParser
URL=[Measure_Weather_Daily_Parent]
StringIndex=19
Group=Weather
Disabled=1
DynamicVariables=1

[Measure_Day5_Max_Temperature_Rounded]
Measure=Calc
Formula=Round([Measure_Day5_Max_Temperature],0)
Group=Weather
Disabled=1
DynamicVariables=1

[Measure_Day6_Max_Temperature]
Measure=WebParser
URL=[Measure_Weather_Daily_Parent]
StringIndex=20
Group=Weather
Disabled=1
DynamicVariables=1

[Measure_Day6_Max_Temperature_Rounded]
Measure=Calc
Formula=Round([Measure_Day6_Max_Temperature],0)
Group=Weather
Disabled=1
DynamicVariables=1

[Measure_Day7_Max_Temperature]
Measure=WebParser
URL=[Measure_Weather_Daily_Parent]
StringIndex=21
Group=Weather
Disabled=1
DynamicVariables=1

[Measure_Day7_Max_Temperature_Rounded]
Measure=Calc
Formula=Round([Measure_Day7_Max_Temperature],0)
Group=Weather
Disabled=1
DynamicVariables=1
;============================================================
; Next 7 Days Minimum Temperature
;============================================================

[Measure_Day1_Min_Temperature]
Measure=WebParser
URL=[Measure_Weather_Daily_Parent]
StringIndex=22
Group=Weather
Disabled=1
DynamicVariables=1

[Measure_Day1_Min_Temperature_Rounded]
Measure=Calc
Formula=Round([Measure_Day1_Min_Temperature],0)
Group=Weather
Disabled=1
DynamicVariables=1

[Measure_Day2_Min_Temperature]
Measure=WebParser
URL=[Measure_Weather_Daily_Parent]
StringIndex=23
Group=Weather
Disabled=1
DynamicVariables=1

[Measure_Day2_Min_Temperature_Rounded]
Measure=Calc
Formula=Round([Measure_Day2_Min_Temperature],0)
Group=Weather
Disabled=1
DynamicVariables=1

[Measure_Day3_Min_Temperature]
Measure=WebParser
URL=[Measure_Weather_Daily_Parent]
StringIndex=24
Group=Weather
Disabled=1
DynamicVariables=1

[Measure_Day3_Min_Temperature_Rounded]
Measure=Calc
Formula=Round([Measure_Day3_Min_Temperature],0)
Group=Weather
Disabled=1
DynamicVariables=1

[Measure_Day4_Min_Temperature]
Measure=WebParser
URL=[Measure_Weather_Daily_Parent]
StringIndex=25
Group=Weather
Disabled=1
DynamicVariables=1

[Measure_Day4_Min_Temperature_Rounded]
Measure=Calc
Formula=Round([Measure_Day4_Min_Temperature],0)
Group=Weather
Disabled=1
DynamicVariables=1

[Measure_Day5_Min_Temperature]
Measure=WebParser
URL=[Measure_Weather_Daily_Parent]
StringIndex=26
Group=Weather
Disabled=1
DynamicVariables=1

[Measure_Day5_Min_Temperature_Rounded]
Measure=Calc
Formula=Round([Measure_Day5_Min_Temperature],0)
Group=Weather
Disabled=1
DynamicVariables=1

[Measure_Day6_Min_Temperature]
Measure=WebParser
URL=[Measure_Weather_Daily_Parent]
StringIndex=27
Group=Weather
Disabled=1
DynamicVariables=1

[Measure_Day6_Min_Temperature_Rounded]
Measure=Calc
Formula=Round([Measure_Day6_Min_Temperature],0)
Group=Weather
Disabled=1
DynamicVariables=1

[Measure_Day7_Min_Temperature]
Measure=WebParser
URL=[Measure_Weather_Daily_Parent]
StringIndex=28
Group=Weather
Disabled=1
DynamicVariables=1

[Measure_Day7_Min_Temperature_Rounded]
Measure=Calc
Formula=Round([Measure_Day7_Min_Temperature],0)
Group=Weather
Disabled=1
DynamicVariables=1
;============================================================
; Next 7 Days Weather Code
;============================================================

[Measure_Day1_Weather_Code]
Measure=WebParser
URL=[Measure_Weather_Daily_Parent]
StringIndex=8
Group=Weather
Disabled=1
DynamicVariables=1

[Measure_Day2_Weather_Code]
Measure=WebParser
URL=[Measure_Weather_Daily_Parent]
StringIndex=9
Group=Weather
Disabled=1
DynamicVariables=1

[Measure_Day3_Weather_Code]
Measure=WebParser
URL=[Measure_Weather_Daily_Parent]
StringIndex=10
Group=Weather
Disabled=1
DynamicVariables=1

[Measure_Day4_Weather_Code]
Measure=WebParser
URL=[Measure_Weather_Daily_Parent]
StringIndex=11
Group=Weather
Disabled=1
DynamicVariables=1

[Measure_Day5_Weather_Code]
Measure=WebParser
URL=[Measure_Weather_Daily_Parent]
StringIndex=12
Group=Weather
Disabled=1
DynamicVariables=1

[Measure_Day6_Weather_Code]
Measure=WebParser
URL=[Measure_Weather_Daily_Parent]
StringIndex=13
Group=Weather
Disabled=1
DynamicVariables=1

[Measure_Day7_Weather_Code]
Measure=WebParser
URL=[Measure_Weather_Daily_Parent]
StringIndex=14
Group=Weather
Disabled=1
DynamicVariables=1
;============================================================
; Daily Weather Condition Translations
;============================================================

[Measure_Day1_Weather_Condition_Translated]
Measure=Calc
Formula=[Measure_Day1_Weather_Code]
RegExpSubstitute=1
Substitute=#Substitute_For_DayN_Weather_Condition_Translated#
Group=Weather
Disabled=1
DynamicVariables=1

[Measure_Day2_Weather_Condition_Translated]
Measure=Calc
Formula=[Measure_Day2_Weather_Code]
RegExpSubstitute=1
Substitute=#Substitute_For_DayN_Weather_Condition_Translated#
Group=Weather
Disabled=1
DynamicVariables=1

[Measure_Day3_Weather_Condition_Translated]
Measure=Calc
Formula=[Measure_Day3_Weather_Code]
RegExpSubstitute=1
Substitute=#Substitute_For_DayN_Weather_Condition_Translated#
Group=Weather
Disabled=1
DynamicVariables=1

[Measure_Day4_Weather_Condition_Translated]
Measure=Calc
Formula=[Measure_Day4_Weather_Code]
RegExpSubstitute=1
Substitute=#Substitute_For_DayN_Weather_Condition_Translated#
Group=Weather
Disabled=1
DynamicVariables=1

[Measure_Day5_Weather_Condition_Translated]
Measure=Calc
Formula=[Measure_Day5_Weather_Code]
RegExpSubstitute=1
Substitute=#Substitute_For_DayN_Weather_Condition_Translated#
Group=Weather
Disabled=1
DynamicVariables=1

[Measure_Day6_Weather_Condition_Translated]
Measure=Calc
Formula=[Measure_Day6_Weather_Code]
RegExpSubstitute=1
Substitute=#Substitute_For_DayN_Weather_Condition_Translated#
Group=Weather
Disabled=1
DynamicVariables=1

[Measure_Day7_Weather_Condition_Translated]
Measure=Calc
Formula=[Measure_Day7_Weather_Code]
RegExpSubstitute=1
Substitute=#Substitute_For_DayN_Weather_Condition_Translated#
Group=Weather
Disabled=1
DynamicVariables=1
;============================================================
; Daily Weather Icons
;============================================================

[Measure_Day1_Weather_Icon]
Measure=Calc
Formula=[Measure_Day1_Weather_Code]
RegExpSubstitute=1
Substitute=#Substitute_For_DayN_Weather_Icon#
Group=Weather
Disabled=1
DynamicVariables=1

[Measure_Day2_Weather_Icon]
Measure=Calc
Formula=[Measure_Day2_Weather_Code]
RegExpSubstitute=1
Substitute=#Substitute_For_DayN_Weather_Icon#
Group=Weather
Disabled=1
DynamicVariables=1

[Measure_Day3_Weather_Icon]
Measure=Calc
Formula=[Measure_Day3_Weather_Code]
RegExpSubstitute=1
Substitute=#Substitute_For_DayN_Weather_Icon#
Group=Weather
Disabled=1
DynamicVariables=1

[Measure_Day4_Weather_Icon]
Measure=Calc
Formula=[Measure_Day4_Weather_Code]
RegExpSubstitute=1
Substitute=#Substitute_For_DayN_Weather_Icon#
Group=Weather
Disabled=1
DynamicVariables=1

[Measure_Day5_Weather_Icon]
Measure=Calc
Formula=[Measure_Day5_Weather_Code]
RegExpSubstitute=1
Substitute=#Substitute_For_DayN_Weather_Icon#
Group=Weather
Disabled=1
DynamicVariables=1

[Measure_Day6_Weather_Icon]
Measure=Calc
Formula=[Measure_Day6_Weather_Code]
RegExpSubstitute=1
Substitute=#Substitute_For_DayN_Weather_Icon#
Group=Weather
Disabled=1
DynamicVariables=1

[Measure_Day7_Weather_Icon]
Measure=Calc
Formula=[Measure_Day7_Weather_Code]
RegExpSubstitute=1
Substitute=#Substitute_For_DayN_Weather_Icon#
Group=Weather
Disabled=1
DynamicVariables=1

;============================================================
; Next 7 Days Sunrise Times
;============================================================

[Measure_Day1_Sunrise]
Measure=WebParser
URL=[Measure_Weather_Daily_Parent]
StringIndex=29
Group=Weather
Disabled=1
DynamicVariables=1

[Measure_Day2_Sunrise]
Measure=WebParser
URL=[Measure_Weather_Daily_Parent]
StringIndex=30
Group=Weather
Disabled=1
DynamicVariables=1

[Measure_Day3_Sunrise]
Measure=WebParser
URL=[Measure_Weather_Daily_Parent]
StringIndex=31
Group=Weather
Disabled=1
DynamicVariables=1

[Measure_Day4_Sunrise]
Measure=WebParser
URL=[Measure_Weather_Daily_Parent]
StringIndex=32
Group=Weather
Disabled=1
DynamicVariables=1

[Measure_Day5_Sunrise]
Measure=WebParser
URL=[Measure_Weather_Daily_Parent]
StringIndex=33
Group=Weather
Disabled=1
DynamicVariables=1

[Measure_Day6_Sunrise]
Measure=WebParser
URL=[Measure_Weather_Daily_Parent]
StringIndex=34
Group=Weather
Disabled=1
DynamicVariables=1

[Measure_Day7_Sunrise]
Measure=WebParser
URL=[Measure_Weather_Daily_Parent]
StringIndex=35
Group=Weather
Disabled=1
DynamicVariables=1

;============================================================
; Next 7 Days Sunset Times
;============================================================

[Measure_Day1_Sunset]
Measure=WebParser
URL=[Measure_Weather_Daily_Parent]
StringIndex=36
Group=Weather
Disabled=1
DynamicVariables=1

[Measure_Day2_Sunset]
Measure=WebParser
URL=[Measure_Weather_Daily_Parent]
StringIndex=37
Group=Weather
Disabled=1
DynamicVariables=1

[Measure_Day3_Sunset]
Measure=WebParser
URL=[Measure_Weather_Daily_Parent]
StringIndex=38
Group=Weather
Disabled=1
DynamicVariables=1

[Measure_Day4_Sunset]
Measure=WebParser
URL=[Measure_Weather_Daily_Parent]
StringIndex=39
Group=Weather
Disabled=1
DynamicVariables=1

[Measure_Day5_Sunset]
Measure=WebParser
URL=[Measure_Weather_Daily_Parent]
StringIndex=40
Group=Weather
Disabled=1
DynamicVariables=1

[Measure_Day6_Sunset]
Measure=WebParser
URL=[Measure_Weather_Daily_Parent]
StringIndex=41
Group=Weather
Disabled=1
DynamicVariables=1

[Measure_Day7_Sunset]
Measure=WebParser
URL=[Measure_Weather_Daily_Parent]
StringIndex=42
Group=Weather
Disabled=1
DynamicVariables=1

;============================================================
; Formatted Sunrise Times (HH:MM format)
;============================================================

[Measure_Day1_Sunrise_Formatted]
Measure=Time
TimeStamp=[Measure_Day1_Sunrise]
TimeStampFormat=#Time_Stamp_Format_For_Sun_Cycle#
Format=%H:%M
Group=Weather
Disabled=1
DynamicVariables=1

[Measure_Day2_Sunrise_Formatted]
Measure=Time
TimeStamp=[Measure_Day2_Sunrise]
TimeStampFormat=#Time_Stamp_Format_For_Sun_Cycle#
Format=%H:%M
Group=Weather
Disabled=1
DynamicVariables=1

[Measure_Day3_Sunrise_Formatted]
Measure=Time
TimeStamp=[Measure_Day3_Sunrise]
TimeStampFormat=#Time_Stamp_Format_For_Sun_Cycle#
Format=%H:%M
Group=Weather
Disabled=1
DynamicVariables=1

[Measure_Day4_Sunrise_Formatted]
Measure=Time
TimeStamp=[Measure_Day4_Sunrise]
TimeStampFormat=#Time_Stamp_Format_For_Sun_Cycle#
Format=%H:%M
Group=Weather
Disabled=1
DynamicVariables=1

[Measure_Day5_Sunrise_Formatted]
Measure=Time
TimeStamp=[Measure_Day5_Sunrise]
TimeStampFormat=#Time_Stamp_Format_For_Sun_Cycle#
Format=%H:%M
Group=Weather
Disabled=1
DynamicVariables=1

[Measure_Day6_Sunrise_Formatted]
Measure=Time
TimeStamp=[Measure_Day6_Sunrise]
TimeStampFormat=#Time_Stamp_Format_For_Sun_Cycle#
Format=%H:%M
Group=Weather
Disabled=1
DynamicVariables=1

[Measure_Day7_Sunrise_Formatted]
Measure=Time
TimeStamp=[Measure_Day7_Sunrise]
TimeStampFormat=#Time_Stamp_Format_For_Sun_Cycle#
Format=%H:%M
Group=Weather
Disabled=1
DynamicVariables=1

;============================================================
; Formatted Sunset Times (HH:MM format)
;============================================================

[Measure_Day1_Sunset_Formatted]
Measure=Time
TimeStamp=[Measure_Day1_Sunset]
TimeStampFormat=#Time_Stamp_Format_For_Sun_Cycle#
Format=%H:%M
Group=Weather
Disabled=1
DynamicVariables=1

[Measure_Day2_Sunset_Formatted]
Measure=Time
TimeStamp=[Measure_Day2_Sunset]
TimeStampFormat=#Time_Stamp_Format_For_Sun_Cycle#
Format=%H:%M
Group=Weather
Disabled=1
DynamicVariables=1

[Measure_Day3_Sunset_Formatted]
Measure=Time
TimeStamp=[Measure_Day3_Sunset]
TimeStampFormat=#Time_Stamp_Format_For_Sun_Cycle#
Format=%H:%M
Group=Weather
Disabled=1
DynamicVariables=1

[Measure_Day4_Sunset_Formatted]
Measure=Time
TimeStamp=[Measure_Day4_Sunset]
TimeStampFormat=#Time_Stamp_Format_For_Sun_Cycle#
Format=%H:%M
Group=Weather
Disabled=1
DynamicVariables=1

[Measure_Day5_Sunset_Formatted]
Measure=Time
TimeStamp=[Measure_Day5_Sunset]
TimeStampFormat=#Time_Stamp_Format_For_Sun_Cycle#
Format=%H:%M
Group=Weather
Disabled=1
DynamicVariables=1

[Measure_Day6_Sunset_Formatted]
Measure=Time
TimeStamp=[Measure_Day6_Sunset]
TimeStampFormat=#Time_Stamp_Format_For_Sun_Cycle#
Format=%H:%M
Group=Weather
Disabled=1
DynamicVariables=1

[Measure_Day7_Sunset_Formatted]
Measure=Time
TimeStamp=[Measure_Day7_Sunset]
TimeStampFormat=#Time_Stamp_Format_For_Sun_Cycle#
Format=%H:%M
Group=Weather
Disabled=1
DynamicVariables=1

;============================================================
; 12-Hour Format Sunset Times (e.g., 5:00 PM)
;============================================================

[Measure_Day1_Sunset_12Hour]
Measure=Time
TimeStamp=[Measure_Day1_Sunset]
TimeStampFormat=#Time_Stamp_Format_For_Sun_Cycle#
Format=%#I:%M %p
Group=Weather
Disabled=1
DynamicVariables=1

[Measure_Day2_Sunset_12Hour]
Measure=Time
TimeStamp=[Measure_Day2_Sunset]
TimeStampFormat=#Time_Stamp_Format_For_Sun_Cycle#
Format=%#I:%M %p
Group=Weather
Disabled=1
DynamicVariables=1

[Measure_Day3_Sunset_12Hour]
Measure=Time
TimeStamp=[Measure_Day3_Sunset]
TimeStampFormat=#Time_Stamp_Format_For_Sun_Cycle#
Format=%#I:%M %p
Group=Weather
Disabled=1
DynamicVariables=1

[Measure_Day4_Sunset_12Hour]
Measure=Time
TimeStamp=[Measure_Day4_Sunset]
TimeStampFormat=#Time_Stamp_Format_For_Sun_Cycle#
Format=%#I:%M %p
Group=Weather
Disabled=1
DynamicVariables=1

[Measure_Day5_Sunset_12Hour]
Measure=Time
TimeStamp=[Measure_Day5_Sunset]
TimeStampFormat=#Time_Stamp_Format_For_Sun_Cycle#
Format=%#I:%M %p
Group=Weather
Disabled=1
DynamicVariables=1

[Measure_Day6_Sunset_12Hour]
Measure=Time
TimeStamp=[Measure_Day6_Sunset]
TimeStampFormat=#Time_Stamp_Format_For_Sun_Cycle#
Format=%#I:%M %p
Group=Weather
Disabled=1
DynamicVariables=1

[Measure_Day7_Sunset_12Hour]
Measure=Time
TimeStamp=[Measure_Day7_Sunset]
TimeStampFormat=#Time_Stamp_Format_For_Sun_Cycle#
Format=%#I:%M %p
Group=Weather
Disabled=1
DynamicVariables=1