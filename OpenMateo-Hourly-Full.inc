;=============================================================
;          COMPLETE Hourly Weather Forecast from OpenMateo
;          WARNING: This includes 179+ parameters - very large!
;=============================================================

[Measure_OpenMateo_Hourly_Full_Parent]
Measure=WebParser
URL=https://api.open-meteo.com/v1/forecast?latitude=33.6844&longitude=73.0479&hourly=temperature_2m,weather_code,wind_speed_10m,soil_temperature_0cm,relative_humidity_2m,dew_point_2m,apparent_temperature,precipitation_probability,pressure_msl,surface_pressure,wind_speed_80m,wind_speed_120m,soil_temperature_6cm,soil_temperature_18cm,soil_temperature_54cm,cloud_cover,cloud_cover_low,wind_speed_180m,precipitation,rain,showers,snowfall,snow_depth,cloud_cover_mid,cloud_cover_high,visibility,evapotranspiration,et0_fao_evapotranspiration,vapour_pressure_deficit,wind_direction_10m,wind_direction_80m,wind_direction_120m,wind_direction_180m,wind_gusts_10m,temperature_80m,temperature_120m,temperature_180m,soil_moisture_0_to_1cm,soil_moisture_1_to_3cm,soil_moisture_3_to_9cm,soil_moisture_9_to_27cm,soil_moisture_27_to_81cm,uv_index,cape,lifted_index,freezing_level_height,convective_inhibition,boundary_layer_height,uv_index_clear_sky,is_day,sunshine_duration,wet_bulb_temperature_2m,total_column_integrated_water_vapour,shortwave_radiation,direct_radiation,diffuse_radiation,shortwave_radiation_instant,direct_radiation_instant,diffuse_radiation_instant,direct_normal_irradiance_instant,global_tilted_irradiance_instant,terrestrial_radiation_instant,direct_normal_irradiance,global_tilted_irradiance,terrestrial_radiation,temperature_1000hPa,temperature_975hPa,temperature_950hPa,temperature_925hPa,temperature_900hPa,temperature_850hPa,temperature_800hPa,temperature_700hPa,temperature_600hPa,temperature_500hPa,temperature_400hPa,temperature_300hPa,temperature_250hPa,temperature_200hPa,temperature_150hPa,temperature_100hPa,temperature_70hPa,temperature_50hPa,temperature_30hPa,relative_humidity_1000hPa,relative_humidity_975hPa,relative_humidity_950hPa,relative_humidity_925hPa,relative_humidity_900hPa,relative_humidity_850hPa,relative_humidity_800hPa,relative_humidity_700hPa,relative_humidity_600hPa,relative_humidity_500hPa,relative_humidity_400hPa,relative_humidity_300hPa,relative_humidity_250hPa,relative_humidity_200hPa,relative_humidity_150hPa,relative_humidity_100hPa,relative_humidity_70hPa,relative_humidity_50hPa,relative_humidity_30hPa,cloud_cover_1000hPa,cloud_cover_975hPa,cloud_cover_950hPa,cloud_cover_925hPa,cloud_cover_900hPa,cloud_cover_850hPa,cloud_cover_800hPa,cloud_cover_700hPa,cloud_cover_600hPa,cloud_cover_500hPa,cloud_cover_400hPa,cloud_cover_300hPa,cloud_cover_250hPa,cloud_cover_200hPa,cloud_cover_150hPa,cloud_cover_100hPa,cloud_cover_70hPa,cloud_cover_50hPa,cloud_cover_30hPa,wind_speed_1000hPa,wind_speed_975hPa,wind_speed_950hPa,wind_speed_925hPa,wind_speed_900hPa,wind_speed_850hPa,wind_speed_800hPa,wind_speed_700hPa,wind_speed_600hPa,wind_speed_500hPa,wind_speed_400hPa,wind_speed_300hPa,wind_speed_250hPa,wind_speed_200hPa,wind_speed_150hPa,wind_speed_100hPa,wind_speed_70hPa,wind_speed_50hPa,wind_speed_30hPa,wind_direction_1000hPa,wind_direction_975hPa,wind_direction_950hPa,wind_direction_925hPa,wind_direction_900hPa,wind_direction_850hPa,wind_direction_800hPa,wind_direction_700hPa,wind_direction_600hPa,wind_direction_500hPa,wind_direction_400hPa,wind_direction_300hPa,wind_direction_250hPa,wind_direction_200hPa,wind_direction_150hPa,wind_direction_100hPa,wind_direction_70hPa,wind_direction_50hPa,wind_direction_30hPa,geopotential_height_1000hPa,geopotential_height_975hPa,geopotential_height_950hPa,geopotential_height_925hPa,geopotential_height_900hPa,geopotential_height_850hPa,geopotential_height_800hPa,geopotential_height_700hPa,geopotential_height_600hPa,geopotential_height_500hPa,geopotential_height_400hPa,geopotential_height_300hPa,geopotential_height_250hPa,geopotential_height_200hPa,geopotential_height_150hPa,geopotential_height_100hPa,geopotential_height_70hPa,geopotential_height_50hPa,geopotential_height_30hPa
Download=1
RegExp=(?siU)"hourly".*?"temperature_2m":\s*\[([^\]]+)\].*?"weather_code":\s*\[([^\]]+)\].*?"wind_speed_10m":\s*\[([^\]]+)\].*?"soil_temperature_0cm":\s*\[([^\]]+)\].*?"relative_humidity_2m":\s*\[([^\]]+)\].*?"dew_point_2m":\s*\[([^\]]+)\].*?"apparent_temperature":\s*\[([^\]]+)\].*?"precipitation_probability":\s*\[([^\]]+)\].*?"pressure_msl":\s*\[([^\]]+)\].*?"surface_pressure":\s*\[([^\]]+)\].*?"wind_speed_80m":\s*\[([^\]]+)\].*?"wind_speed_120m":\s*\[([^\]]+)\].*?"soil_temperature_6cm":\s*\[([^\]]+)\].*?"soil_temperature_18cm":\s*\[([^\]]+)\].*?"soil_temperature_54cm":\s*\[([^\]]+)\].*?"cloud_cover":\s*\[([^\]]+)\].*?"cloud_cover_low":\s*\[([^\]]+)\].*?"wind_speed_180m":\s*\[([^\]]+)\].*?"precipitation":\s*\[([^\]]+)\].*?"rain":\s*\[([^\]]+)\].*?"showers":\s*\[([^\]]+)\].*?"snowfall":\s*\[([^\]]+)\].*?"snow_depth":\s*\[([^\]]+)\].*?"cloud_cover_mid":\s*\[([^\]]+)\].*?"cloud_cover_high":\s*\[([^\]]+)\].*?"visibility":\s*\[([^\]]+)\].*?"evapotranspiration":\s*\[([^\]]+)\].*?"et0_fao_evapotranspiration":\s*\[([^\]]+)\].*?"vapour_pressure_deficit":\s*\[([^\]]+)\].*?"wind_direction_10m":\s*\[([^\]]+)\].*?"wind_direction_80m":\s*\[([^\]]+)\].*?"wind_direction_120m":\s*\[([^\]]+)\].*?"wind_direction_180m":\s*\[([^\]]+)\].*?"wind_gusts_10m":\s*\[([^\]]+)\].*?"temperature_80m":\s*\[([^\]]+)\].*?"temperature_120m":\s*\[([^\]]+)\].*?"temperature_180m":\s*\[([^\]]+)\].*?"soil_moisture_0_to_1cm":\s*\[([^\]]+)\].*?"soil_moisture_1_to_3cm":\s*\[([^\]]+)\].*?"soil_moisture_3_to_9cm":\s*\[([^\]]+)\].*?"soil_moisture_9_to_27cm":\s*\[([^\]]+)\].*?"soil_moisture_27_to_81cm":\s*\[([^\]]+)\].*?"uv_index":\s*\[([^\]]+)\].*?"cape":\s*\[([^\]]+)\].*?"lifted_index":\s*\[([^\]]+)\].*?"freezing_level_height":\s*\[([^\]]+)\].*?"convective_inhibition":\s*\[([^\]]+)\].*?"boundary_layer_height":\s*\[([^\]]+)\].*?"uv_index_clear_sky":\s*\[([^\]]+)\].*?"is_day":\s*\[([^\]]+)\].*?"sunshine_duration":\s*\[([^\]]+)\].*?"wet_bulb_temperature_2m":\s*\[([^\]]+)\].*?"total_column_integrated_water_vapour":\s*\[([^\]]+)\].*?"shortwave_radiation":\s*\[([^\]]+)\].*?"direct_radiation":\s*\[([^\]]+)\].*?"diffuse_radiation":\s*\[([^\]]+)\].*?"shortwave_radiation_instant":\s*\[([^\]]+)\].*?"direct_radiation_instant":\s*\[([^\]]+)\].*?"diffuse_radiation_instant":\s*\[([^\]]+)\].*?"direct_normal_irradiance_instant":\s*\[([^\]]+)\].*?"global_tilted_irradiance_instant":\s*\[([^\]]+)\].*?"terrestrial_radiation_instant":\s*\[([^\]]+)\].*?"direct_normal_irradiance":\s*\[([^\]]+)\].*?"global_tilted_irradiance":\s*\[([^\]]+)\].*?"terrestrial_radiation":\s*\[([^\]]+)\]
Debug=2
Debug2File=Hourly_Full

;=============================================================
;          Basic Surface Measurements (1-18)
;=============================================================
[Measure_Hourly_Temperature_2m]
Measure=WebParser
URL=[Measure_OpenMateo_Hourly_Full_Parent]
StringIndex=1

[Measure_Hourly_Weather_Code]
Measure=WebParser
URL=[Measure_OpenMateo_Hourly_Full_Parent]
StringIndex=2

[Measure_Hourly_Wind_Speed_10m]
Measure=WebParser
URL=[Measure_OpenMateo_Hourly_Full_Parent]
StringIndex=3

[Measure_Hourly_Soil_Temperature_0cm]
Measure=WebParser
URL=[Measure_OpenMateo_Hourly_Full_Parent]
StringIndex=4

[Measure_Hourly_Relative_Humidity_2m]
Measure=WebParser
URL=[Measure_OpenMateo_Hourly_Full_Parent]
StringIndex=5

[Measure_Hourly_Dew_Point_2m]
Measure=WebParser
URL=[Measure_OpenMateo_Hourly_Full_Parent]
StringIndex=6

[Measure_Hourly_Apparent_Temperature]
Measure=WebParser
URL=[Measure_OpenMateo_Hourly_Full_Parent]
StringIndex=7

[Measure_Hourly_Precipitation_Probability]
Measure=WebParser
URL=[Measure_OpenMateo_Hourly_Full_Parent]
StringIndex=8

[Measure_Hourly_Pressure_MSL]
Measure=WebParser
URL=[Measure_OpenMateo_Hourly_Full_Parent]
StringIndex=9

[Measure_Hourly_Surface_Pressure]
Measure=WebParser
URL=[Measure_OpenMateo_Hourly_Full_Parent]
StringIndex=10

[Measure_Hourly_Wind_Speed_80m]
Measure=WebParser
URL=[Measure_OpenMateo_Hourly_Full_Parent]
StringIndex=11

[Measure_Hourly_Wind_Speed_120m]
Measure=WebParser
URL=[Measure_OpenMateo_Hourly_Full_Parent]
StringIndex=12

[Measure_Hourly_Soil_Temperature_6cm]
Measure=WebParser
URL=[Measure_OpenMateo_Hourly_Full_Parent]
StringIndex=13

[Measure_Hourly_Soil_Temperature_18cm]
Measure=WebParser
URL=[Measure_OpenMateo_Hourly_Full_Parent]
StringIndex=14

[Measure_Hourly_Soil_Temperature_54cm]
Measure=WebParser
URL=[Measure_OpenMateo_Hourly_Full_Parent]
StringIndex=15

[Measure_Hourly_Cloud_Cover]
Measure=WebParser
URL=[Measure_OpenMateo_Hourly_Full_Parent]
StringIndex=16

[Measure_Hourly_Cloud_Cover_Low]
Measure=WebParser
URL=[Measure_OpenMateo_Hourly_Full_Parent]
StringIndex=17

[Measure_Hourly_Wind_Speed_180m]
Measure=WebParser
URL=[Measure_OpenMateo_Hourly_Full_Parent]
StringIndex=18

;=============================================================
;          Precipitation & Cloud Data (19-26)
;=============================================================
[Measure_Hourly_Precipitation]
Measure=WebParser
URL=[Measure_OpenMateo_Hourly_Full_Parent]
StringIndex=19

[Measure_Hourly_Rain]
Measure=WebParser
URL=[Measure_OpenMateo_Hourly_Full_Parent]
StringIndex=20

[Measure_Hourly_Showers]
Measure=WebParser
URL=[Measure_OpenMateo_Hourly_Full_Parent]
StringIndex=21

[Measure_Hourly_Snowfall]
Measure=WebParser
URL=[Measure_OpenMateo_Hourly_Full_Parent]
StringIndex=22

[Measure_Hourly_Snow_Depth]
Measure=WebParser
URL=[Measure_OpenMateo_Hourly_Full_Parent]
StringIndex=23

[Measure_Hourly_Cloud_Cover_Mid]
Measure=WebParser
URL=[Measure_OpenMateo_Hourly_Full_Parent]
StringIndex=24

[Measure_Hourly_Cloud_Cover_High]
Measure=WebParser
URL=[Measure_OpenMateo_Hourly_Full_Parent]
StringIndex=25

[Measure_Hourly_Visibility]
Measure=WebParser
URL=[Measure_OpenMateo_Hourly_Full_Parent]
StringIndex=26

;=============================================================
;          Evaporation & Moisture (27-29)
;=============================================================
[Measure_Hourly_Evapotranspiration]
Measure=WebParser
URL=[Measure_OpenMateo_Hourly_Full_Parent]
StringIndex=27

[Measure_Hourly_ET0_FAO_Evapotranspiration]
Measure=WebParser
URL=[Measure_OpenMateo_Hourly_Full_Parent]
StringIndex=28

[Measure_Hourly_Vapour_Pressure_Deficit]
Measure=WebParser
URL=[Measure_OpenMateo_Hourly_Full_Parent]
StringIndex=29

;=============================================================
;          Wind Direction at Various Heights (30-34)
;=============================================================
[Measure_Hourly_Wind_Direction_10m]
Measure=WebParser
URL=[Measure_OpenMateo_Hourly_Full_Parent]
StringIndex=30

[Measure_Hourly_Wind_Direction_80m]
Measure=WebParser
URL=[Measure_OpenMateo_Hourly_Full_Parent]
StringIndex=31

[Measure_Hourly_Wind_Direction_120m]
Measure=WebParser
URL=[Measure_OpenMateo_Hourly_Full_Parent]
StringIndex=32

[Measure_Hourly_Wind_Direction_180m]
Measure=WebParser
URL=[Measure_OpenMateo_Hourly_Full_Parent]
StringIndex=33

[Measure_Hourly_Wind_Gusts_10m]
Measure=WebParser
URL=[Measure_OpenMateo_Hourly_Full_Parent]
StringIndex=34

;=============================================================
;          Temperature at Various Heights (35-37)
;=============================================================
[Measure_Hourly_Temperature_80m]
Measure=WebParser
URL=[Measure_OpenMateo_Hourly_Full_Parent]
StringIndex=35

[Measure_Hourly_Temperature_120m]
Measure=WebParser
URL=[Measure_OpenMateo_Hourly_Full_Parent]
StringIndex=36

[Measure_Hourly_Temperature_180m]
Measure=WebParser
URL=[Measure_OpenMateo_Hourly_Full_Parent]
StringIndex=37

;=============================================================
;          Soil Moisture at Various Depths (38-42)
;=============================================================
[Measure_Hourly_Soil_Moisture_0_to_1cm]
Measure=WebParser
URL=[Measure_OpenMateo_Hourly_Full_Parent]
StringIndex=38

[Measure_Hourly_Soil_Moisture_1_to_3cm]
Measure=WebParser
URL=[Measure_OpenMateo_Hourly_Full_Parent]
StringIndex=39

[Measure_Hourly_Soil_Moisture_3_to_9cm]
Measure=WebParser
URL=[Measure_OpenMateo_Hourly_Full_Parent]
StringIndex=40

[Measure_Hourly_Soil_Moisture_9_to_27cm]
Measure=WebParser
URL=[Measure_OpenMateo_Hourly_Full_Parent]
StringIndex=41

[Measure_Hourly_Soil_Moisture_27_to_81cm]
Measure=WebParser
URL=[Measure_OpenMateo_Hourly_Full_Parent]
StringIndex=42

;=============================================================
;          Atmospheric Stability & UV (43-50)
;=============================================================
[Measure_Hourly_UV_Index]
Measure=WebParser
URL=[Measure_OpenMateo_Hourly_Full_Parent]
StringIndex=43

[Measure_Hourly_CAPE]
Measure=WebParser
URL=[Measure_OpenMateo_Hourly_Full_Parent]
StringIndex=44

[Measure_Hourly_Lifted_Index]
Measure=WebParser
URL=[Measure_OpenMateo_Hourly_Full_Parent]
StringIndex=45

[Measure_Hourly_Freezing_Level_Height]
Measure=WebParser
URL=[Measure_OpenMateo_Hourly_Full_Parent]
StringIndex=46

[Measure_Hourly_Convective_Inhibition]
Measure=WebParser
URL=[Measure_OpenMateo_Hourly_Full_Parent]
StringIndex=47

[Measure_Hourly_Boundary_Layer_Height]
Measure=WebParser
URL=[Measure_OpenMateo_Hourly_Full_Parent]
StringIndex=48

[Measure_Hourly_UV_Index_Clear_Sky]
Measure=WebParser
URL=[Measure_OpenMateo_Hourly_Full_Parent]
StringIndex=49

[Measure_Hourly_Is_Day]
Measure=WebParser
URL=[Measure_OpenMateo_Hourly_Full_Parent]
StringIndex=50

;=============================================================
;          Solar & Atmospheric Water (51-54)
;=============================================================
[Measure_Hourly_Sunshine_Duration]
Measure=WebParser
URL=[Measure_OpenMateo_Hourly_Full_Parent]
StringIndex=51

[Measure_Hourly_Wet_Bulb_Temperature_2m]
Measure=WebParser
URL=[Measure_OpenMateo_Hourly_Full_Parent]
StringIndex=52

[Measure_Hourly_Total_Column_Integrated_Water_Vapour]
Measure=WebParser
URL=[Measure_OpenMateo_Hourly_Full_Parent]
StringIndex=53

;=============================================================
;          Solar Radiation (54-65)
;=============================================================
[Measure_Hourly_Shortwave_Radiation]
Measure=WebParser
URL=[Measure_OpenMateo_Hourly_Full_Parent]
StringIndex=54

[Measure_Hourly_Direct_Radiation]
Measure=WebParser
URL=[Measure_OpenMateo_Hourly_Full_Parent]
StringIndex=55

[Measure_Hourly_Diffuse_Radiation]
Measure=WebParser
URL=[Measure_OpenMateo_Hourly_Full_Parent]
StringIndex=56

[Measure_Hourly_Shortwave_Radiation_Instant]
Measure=WebParser
URL=[Measure_OpenMateo_Hourly_Full_Parent]
StringIndex=57

[Measure_Hourly_Direct_Radiation_Instant]
Measure=WebParser
URL=[Measure_OpenMateo_Hourly_Full_Parent]
StringIndex=58

[Measure_Hourly_Diffuse_Radiation_Instant]
Measure=WebParser
URL=[Measure_OpenMateo_Hourly_Full_Parent]
StringIndex=59

[Measure_Hourly_Direct_Normal_Irradiance_Instant]
Measure=WebParser
URL=[Measure_OpenMateo_Hourly_Full_Parent]
StringIndex=60

[Measure_Hourly_Global_Tilted_Irradiance_Instant]
Measure=WebParser
URL=[Measure_OpenMateo_Hourly_Full_Parent]
StringIndex=61

[Measure_Hourly_Terrestrial_Radiation_Instant]
Measure=WebParser
URL=[Measure_OpenMateo_Hourly_Full_Parent]
StringIndex=62

[Measure_Hourly_Direct_Normal_Irradiance]
Measure=WebParser
URL=[Measure_OpenMateo_Hourly_Full_Parent]
StringIndex=63

[Measure_Hourly_Global_Tilted_Irradiance]
Measure=WebParser
URL=[Measure_OpenMateo_Hourly_Full_Parent]
StringIndex=64

[Measure_Hourly_Terrestrial_Radiation]
Measure=WebParser
URL=[Measure_OpenMateo_Hourly_Full_Parent]
StringIndex=65

;=============================================================
;          Temperature at Pressure Levels (66-84)
;          Note: Continues in RegExp but not captured yet
;=============================================================
; NOTE: The regex above only captures up to terrestrial_radiation (65 parameters)
; To capture ALL 179 parameters including pressure levels, the RegExp would need
; to be extended significantly. This would make it extremely long and complex.
;
; RECOMMENDATION: Create separate parent measures for different data categories:
; 1. Surface & Basic Atmospheric (current implementation)
; 2. Temperature at Pressure Levels (1000hPa - 30hPa)
; 3. Relative Humidity at Pressure Levels
; 4. Cloud Cover at Pressure Levels
; 5. Wind Speed at Pressure Levels
; 6. Wind Direction at Pressure Levels
; 7. Geopotential Height at Pressure Levels
;
; This approach is more maintainable and won't hit Rainmeter's string length limits.
