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
[Variables]
Latitude=29.704813
Longitude=72.560036
;Options: celsius,fahrenheit
Temperature_Unit=celsius
;Options: kmh, mph, ms, kn (kilometers/hour, miles/hour, meters/second, knots)
Wind_Speed_Unit=kmh
Time_Stamp_Format_For_Date_And_Day_Name=%Y-%m-%d
Time_Stamp_Format_For_Sun_Cycle=%Y-%m-%dT%H:%M
Substitute_For_DayN_Weather_Condition_Translated="^0$":"Clear Sky","^1$":"Mainly Clear","^2$":"Partly Cloudy","^3$":"Overcast","^45$":"Fog","^48$":"Depositing Rime Fog","^51$":"Light Drizzle","^53$":"Moderate Drizzle","^55$":"Dense Drizzle","^56$":"Light Freezing Drizzle","^57$":"Dense Freezing Drizzle","^61$":"Slight Rain","^63$":"Moderate Rain","^65$":"Heavy Rain","^66$":"Light Freezing Rain","^67$":"Heavy Freezing Rain","^71$":"Slight Snow Fall","^73$":"Moderate Snow Fall","^75$":"Heavy Snow Fall","^77$":"Snow Grains","^80$":"Slight Rain Showers","^81$":"Moderate Rain Showers","^82$":"Violent Rain Showers","^85$":"Slight Snow Showers","^86$":"Heavy Snow Showers","^95$":"Thunderstorm","^96$":"Thunderstorm with Slight Hail","^99$":"Thunderstorm with Heavy Hail"
Substitute_For_DayN_Weather_Icon="^0$":"ClearDay.png","^1$":"ClearDay.png","^2$":"PartlyCloudyDay.png","^3$":"Overcast.png","^45$":"FoggyDay.png","^48$":"FoggyDay.png","^51$":"Drizzle.png","^53$":"Drizzle.png","^55$":"Drizzle.png","^56$":"FreezingRain.png","^57$":"FreezingRain.png","^61$":"Rain.png","^63$":"Rain.png","^65$":"Rain.png","^66$":"FreezingRain.png","^67$":"FreezingRain.png","^71$":"Snow.png","^73$":"Snow.png","^75$":"Snow.png","^77$":"Snow.png","^80$":"Rain.png","^81$":"Rain.png","^82$":"Rain.png","^85$":"Snow.png","^86$":"Snow.png","^95$":"ThunderStorm.png","^96$":"ThunderStorm.png","^99$":"ThunderStorm.png"
Time_Stamp_Format_For_Hour=%Y-%m-%dT%H:%M
Substitute_For_HourN_Weather_Icons="^1000$":"ClearDay.png","^0$":"ClearNight.png","^1001$":"MainlyClearDay.png","^1$":"MainlyClearNight.png","^1002$":"PartlyCloudyDay.png","^2$":"PartlyCloudyNight.png","^(100)?3$":"Overcast.png","^104[58]$":"FoggyDay.png","^4[58]$":"FoggyNight.png","^(10)?5[135]$":"Drizzle.png","^(10)?5[67]$":"FreezingRain.png","^(10)?6[135]$":"Rain.png","^(10)?6[67]$":"FreezingRain.png","^(10)?7[1357]$":"Snow.png","^(10)?8[012]$":"Rain.png","^(10)?8[56]$":"Snow.png","^(10)?9[569]$":"ThunderStorm.png"
Substitute_For_HourN_Weather_Condition_Translated="^0$":"Clear Sky","^1$":"Mainly Clear","^2$":"Partly Cloudy","^3$":"Overcast","^45$":"Fog","^48$":"Depositing Rime Fog","^51$":"Light Drizzle","^53$":"Moderate Drizzle","^55$":"Dense Drizzle","^56$":"Light Freezing Drizzle","^57$":"Dense Freezing Drizzle","^61$":"Slight Rain","^63$":"Moderate Rain","^65$":"Heavy Rain","^66$":"Light Freezing Rain","^67$":"Heavy Freezing Rain","^71$":"Slight Snow Fall","^73$":"Moderate Snow Fall","^75$":"Heavy Snow Fall","^77$":"Snow Grains","^80$":"Slight Rain Showers","^81$":"Moderate Rain Showers","^82$":"Violent Rain Showers","^85$":"Slight Snow Showers","^86$":"Heavy Snow Showers","^95$":"Thunderstorm","^96$":"Thunderstorm with Slight Hail","^99$":"Thunderstorm with Heavy Hail"
CurrentForecast_Debug_Path=CurrentForecast.json 
7DaysForecast_Debug_Path=7DaysForecast.json
7HoursForecast_Debug_Path=7HoursForecast.json
; Options  0,1,2
; 0: Does not log DEBUG messages from WebParser.
; 1: Logs DEBUG message to the log. Rainmeter must also be in Debug mode.
; 2: Saves the downloaded webpage to a file.
Weather_Debug=0
; The rate in milliseconds determining how often the webpage is 
; downloaded. This is relative to the config's main Update rate 
; and any UpdateDivider on the measure. 
; So the formula would be 
; Update X UpdateDivider X UpdateRate = "how often the measure connects to the site".
Weather_Update_Rate=600
