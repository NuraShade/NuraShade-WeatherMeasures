<div align="center">
  <h1>NuraShade Weather Measures</h1>
  <p>A comprehensive weather forecasting solution for Rainmeter skins</p>
  
  <p>
    <img src="https://img.shields.io/badge/Rainmeter-Skin-blue" alt="Rainmeter Skin">
    <img src="https://img.shields.io/badge/License-CC--BY--SA--3.0-green" alt="License: CC-BY-SA-3.0">
    <img src="https://img.shields.io/badge/Open--Meteo-API-orange" alt="Open-Meteo API">
  </p>
</div>

## 🌤️ Overview

NuraShade Weather Measures is a collection of Rainmeter configuration files that provide comprehensive weather forecasting capabilities using the Open-Meteo API. This package includes measures for current weather conditions, 7-day forecasts, and 7-hour hourly forecasts. Most numerical measures include both precise and rounded variants for flexible display options.

## 📁 File Structure

<table>
  <thead>
    <tr>
      <th>File</th>
      <th>Description</th>
    </tr>
  </thead>
  <tbody>
    <tr>
      <td><code>CurrentForecast.inc</code></td>
      <td>Measures for current weather conditions including temperature, feels like, weather code, weather icon, wind speed, humidity, pressure, visibility, and dew point</td>
    </tr>
    <tr>
      <td><code>7DaysForecast.inc</code></td>
      <td>Measures for 7-day weather forecast including dates, day names, min/max temperatures, weather conditions, weather icons, sunrise/sunset times in multiple formats</td>
    </tr>
    <tr>
      <td><code>7HoursForecast.inc</code></td>
      <td>Measures for 7-hour hourly weather forecast including times, temperatures, rounded temperatures, weather codes, weather conditions, weather icons, and day/night indicators</td>
    </tr>
  </tbody>
</table>

## ⚙️ Configuration

Before using these weather measures, you need to configure your location coordinates:

```ini
[Variables]
Latitude=YOUR_LATITUDE
Longitude=YOUR_LONGITUDE
; Options: celsius,fahrenheit
Temperature_Unit=celsius
; Options: kmh, mph, ms, kn (kilometers/hour, miles/hour, meters/second, knots)
Wind_Speed_Unit=kmh
```

## 🌡️ Current Forecast Features

<table>
  <thead>
    <tr>
      <th>Feature</th>
      <th>Measure</th>
      <th>Description</th>
    </tr>
  </thead>
  <tbody>
    <tr>
      <td>Temperature</td>
      <td><code>Measure_Current_Temperature</code></td>
      <td>Current air temperature</td>
    </tr>
    <tr>
      <td>Temperature Rounded</td>
      <td><code>Measure_Current_Temperature_Rounded</code></td>
      <td>Current air temperature rounded up to nearest integer</td>
    </tr>
    <tr>
      <td>Feels Like</td>
      <td><code>Measure_Feels_Like_Temperature</code></td>
      <td>Apparent temperature</td>
    </tr>
    <tr>
      <td>Feels Like Rounded</td>
      <td><code>Measure_Feels_Like_Temperature_Rounded</code></td>
      <td>Apparent temperature rounded up to nearest integer</td>
    </tr>
    <tr>
      <td>Weather Condition</td>
      <td><code>Measure_Current_Weather_Code</code></td>
      <td>Current weather code</td>
    </tr>
    <tr>
      <td>Weather Condition Translated</td>
      <td><code>Measure_Weather_Condition_Translated</code></td>
      <td>Translated weather condition description</td>
    </tr>
    <tr>
      <td>Weather Icon</td>
      <td><code>Measure_Weather_Icon</code></td>
      <td>Dynamic weather icon based on day/night cycle</td>
    </tr>
    <tr>
      <td>Wind Speed</td>
      <td><code>Measure_Wind_Speed</code></td>
      <td>Current wind speed</td>
    </tr>
    <tr>
      <td>Wind Speed Rounded</td>
      <td><code>Measure_Wind_Speed_Rounded</code></td>
      <td>Current wind speed rounded to nearest integer</td>
    </tr>
    <tr>
      <td>Humidity</td>
      <td><code>Measure_Humidity</code></td>
      <td>Relative humidity percentage</td>
    </tr>
    <tr>
      <td>Humidity Rounded</td>
      <td><code>Measure_Humidity_Rounded</code></td>
      <td>Relative humidity percentage rounded to nearest integer</td>
    </tr>
    <tr>
      <td>Pressure</td>
      <td><code>Measure_Pressure</code></td>
      <td>Surface pressure</td>
    </tr>
    <tr>
      <td>Pressure Rounded</td>
      <td><code>Measure_Pressure_Rounded</code></td>
      <td>Surface pressure rounded to nearest integer</td>
    </tr>
    <tr>
      <td>Visibility</td>
      <td><code>Measure_Current_Visibility</code></td>
      <td>Current visibility distance</td>
    </tr>
    <tr>
      <td>Visibility Rounded</td>
      <td><code>Measure_Current_Visibility_Rounded</code></td>
      <td>Current visibility distance rounded to nearest integer</td>
    </tr>
    <tr>
      <td>Dew Point</td>
      <td><code>Measure_Current_Dew_Point</code></td>
      <td>Dew point temperature</td>
    </tr>
    <tr>
      <td>Dew Point Rounded</td>
      <td><code>Measure_Current_Dew_Point_Rounded</code></td>
      <td>Dew point temperature rounded to nearest integer</td>
    </tr>
    <tr>
      <td>Is Day</td>
      <td><code>Measure_Is_Day</code></td>
      <td>Day/night indicator (1=day, 0=night)</td>
    </tr>
  </tbody>
</table>

## 📅 7-Day Forecast Features

<table>
  <thead>
    <tr>
      <th>Feature</th>
      <th>Measure Pattern</th>
      <th>Description</th>
    </tr>
  </thead>
  <tbody>
    <tr>
      <td>Date</td>
      <td><code>Measure_Day{N}_Date</code></td>
      <td>Full date for day N (1-7)</td>
    </tr>
    <tr>
      <td>Day Name</td>
      <td><code>Measure_Day{N}_Name</code></td>
      <td>Full day name (Monday, Tuesday, etc.)</td>
    </tr>
    <tr>
      <td>Abbreviated Day</td>
      <td><code>Measure_Day{N}_Name_Abbreviated</code></td>
      <td>Abbreviated day name (Mon, Tue, etc.)</td>
    </tr>
    <tr>
      <td>Max Temperature</td>
      <td><code>Measure_Day{N}_Max_Temperature</code></td>
      <td>Maximum temperature</td>
    </tr>
    <tr>
      <td>Max Temperature Rounded</td>
      <td><code>Measure_Day{N}_Max_Temperature_Rounded</code></td>
      <td>Maximum temperature rounded to nearest integer</td>
    </tr>
    <tr>
      <td>Min Temperature</td>
      <td><code>Measure_Day{N}_Min_Temperature</code></td>
      <td>Minimum temperature</td>
    </tr>
    <tr>
      <td>Min Temperature Rounded</td>
      <td><code>Measure_Day{N}_Min_Temperature_Rounded</code></td>
      <td>Minimum temperature rounded to nearest integer</td>
    </tr>
    <tr>
      <td>Weather Code</td>
      <td><code>Measure_Day{N}_Weather_Code</code></td>
      <td>Weather condition code</td>
    </tr>
    <tr>
      <td>Weather Condition</td>
      <td><code>Measure_Day{N}_Weather_Condition_Translated</code></td>
      <td>Translated weather condition description</td>
    </tr>
    <tr>
      <td>Weather Icon</td>
      <td><code>Measure_Day{N}_Weather_Icon</code></td>
      <td>Weather icon for the day</td>
    </tr>
    <tr>
      <td>Sunrise Time</td>
      <td><code>Measure_Day{N}_Sunrise</code></td>
      <td>Sunrise time</td>
    </tr>
    <tr>
      <td>Formatted Sunrise Time</td>
      <td><code>Measure_Day{N}_Sunrise_Formatted</code></td>
      <td>Sunrise time in HH:MM format</td>
    </tr>
    <tr>
      <td>Sunset Time</td>
      <td><code>Measure_Day{N}_Sunset</code></td>
      <td>Sunset time</td>
    </tr>
    <tr>
      <td>Formatted Sunset Time</td>
      <td><code>Measure_Day{N}_Sunset_Formatted</code></td>
      <td>Sunset time in HH:MM format</td>
    </tr>
    <tr>
      <td>12-Hour Sunset Time</td>
      <td><code>Measure_Day{N}_Sunset_12Hour</code></td>
      <td>Sunset time in 12-hour format with AM/PM (e.g., 5:00 PM)</td>
    </tr>
  </tbody>
</table>

## 🕐 7-Hour Forecast Features

<table>
  <thead>
    <tr>
      <th>Feature</th>
      <th>Measure Pattern</th>
      <th>Description</th>
    </tr>
  </thead>
  <tbody>
    <tr>
      <td>Time</td>
      <td><code>Measure_Hour{N}_Time</code></td>
      <td>Full timestamp for hour N (1-7)</td>
    </tr>
    <tr>
      <td>Formatted Time (24H)</td>
      <td><code>Measure_Hour{N}_Time_Formatted</code></td>
      <td>Formatted time in HH:00 format (24-hour)</td>
    </tr>
    <tr>
      <td>Formatted Time (12H)</td>
      <td><code>Measure_Hour{N}_Time_Formatted_12H</code></td>
      <td>Formatted time in HH:MM AM/PM format (12-hour)</td>
    </tr>
    <tr>
      <td>Abbreviated Time</td>
      <td><code>Measure_Hour{N}_Time_Abbreviated</code></td>
      <td>Abbreviated time format</td>
    </tr>
    <tr>
      <td>Abbreviated Formatted Time (24H)</td>
      <td><code>Measure_Hour{N}_Time_Abbreviated_Formatted</code></td>
      <td>Formatted abbreviated time (hour only) in 24-hour format</td>
    </tr>
    <tr>
      <td>Abbreviated Formatted Time (12H)</td>
      <td><code>Measure_Hour{N}_Time_Abbreviated_Formatted_12H</code></td>
      <td>Formatted abbreviated time in H AM/PM format (12-hour)</td>
    </tr>
    <tr>
      <td>Temperature</td>
      <td><code>Measure_Hour{N}_Temperature</code></td>
      <td>Temperature for the hour</td>
    </tr>
    <tr>
      <td>Temperature Rounded</td>
      <td><code>Measure_Hour{N}_Temperature_Rounded</code></td>
      <td>Temperature for the hour rounded to nearest integer</td>
    </tr>
    <tr>
      <td>Weather Code</td>
      <td><code>Measure_Hour{N}_Weather_Code</code></td>
      <td>Weather condition code</td>
    </tr>
    <tr>
      <td>Is Day</td>
      <td><code>Measure_Hour{N}_Is_Day</code></td>
      <td>Day/night indicator (1=day, 0=night)</td>
    </tr>
    <tr>
      <td>Weather Condition</td>
      <td><code>Measure_Hour{N}_Weather_Condition_Translated</code></td>
      <td>Translated weather condition description</td>
    </tr>
    <tr>
      <td>Weather Icon</td>
      <td><code>Measure_Hour{N}_Weather_Icon</code></td>
      <td>Dynamic weather icon considering day/night cycle</td>
    </tr>
  </tbody>
</table>

## 🔧 Usage Instructions

1. **Include the measures in your Rainmeter skin:**
   ```ini
   [Rainmeter]
   @include=#@#Includes\WeatherMeasures\CurrentForecast.inc
   @include2=#@#Includes\WeatherMeasures\7DaysForecast.inc
   @include3=#@#Includes\WeatherMeasures\7HoursForecast.inc
   ```

2. **Configure your location:**
   Edit the `[Variables]` section in each file to set your latitude and longitude.

3. **Customize units (optional):**
   Adjust the `Temperature_Unit` and `Wind_Speed_Unit` variables to your preference.

## 🌍 Weather Icons Mapping

The weather measures use dynamic icon mapping based on the Open-Meteo WMO weather codes:

<table>
  <thead>
    <tr>
      <th>Code</th>
      <th>Condition</th>
      <th>Day Icon</th>
      <th>Night Icon</th>
    </tr>
  </thead>
  <tbody>
    <tr>
      <td>0</td>
      <td>Clear Sky</td>
      <td>ClearDay.png</td>
      <td>ClearNight.png</td>
    </tr>
    <tr>
      <td>1</td>
      <td>Mainly Clear</td>
      <td>MainlyClearDay.png</td>
      <td>MainlyClearNight.png</td>
    </tr>
    <tr>
      <td>2</td>
      <td>Partly Cloudy</td>
      <td>PartlyCloudyDay.png</td>
      <td>PartlyCloudyNight.png</td>
    </tr>
    <tr>
      <td>3</td>
      <td>Overcast</td>
      <td colspan="2">Overcast.png</td>
    </tr>
    <tr>
      <td>45, 48</td>
      <td>Fog</td>
      <td>FoggyDay.png</td>
      <td>FoggyNight.png</td>
    </tr>
    <tr>
      <td>51, 53, 55</td>
      <td>Drizzle</td>
      <td colspan="2">Drizzle.png</td>
    </tr>
    <tr>
      <td>56, 57</td>
      <td>Freezing Drizzle</td>
      <td colspan="2">FreezingRain.png</td>
    </tr>
    <tr>
      <td>61, 63, 65</td>
      <td>Rain</td>
      <td colspan="2">Rain.png</td>
    </tr>
    <tr>
      <td>66, 67</td>
      <td>Freezing Rain</td>
      <td colspan="2">FreezingRain.png</td>
    </tr>
    <tr>
      <td>71, 73, 75, 77</td>
      <td>Snow</td>
      <td colspan="2">Snow.png</td>
    </tr>
    <tr>
      <td>80, 81, 82</td>
      <td>Rain Showers</td>
      <td colspan="2">Rain.png</td>
    </tr>
    <tr>
      <td>85, 86</td>
      <td>Snow Showers</td>
      <td colspan="2">Snow.png</td>
    </tr>
    <tr>
      <td>95, 96, 99</td>
      <td>Thunderstorm</td>
      <td colspan="2">ThunderStorm.png</td>
    </tr>
  </tbody>
</table>

## 📜 License

This project is licensed under the Creative Commons Attribution-ShareAlike 3.0 Unported License.

<div align="center">
  <a href="https://creativecommons.org/licenses/by-sa/3.0/">
    <img src="https://licensebuttons.net/l/by-sa/3.0/88x31.png" alt="CC BY-SA 3.0">
  </a>
</div>

You are free to:
- **Share** — copy and redistribute the material in any medium or format
- **Adapt** — remix, transform, and build upon the material for any purpose, even commercially

Under the following terms:
- **Attribution** — You must give appropriate credit, provide a link to the license, and indicate if changes were made.
- **ShareAlike** — If you remix, transform, or build upon the material, you must distribute your contributions under the same license as the original.

<hr>

<div align="center">
  Made with ❤️ by NuraShade
</div>