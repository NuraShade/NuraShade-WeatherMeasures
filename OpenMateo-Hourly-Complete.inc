;=============================================================
;          COMPLETE Hourly Weather - Organized by Category
;          This file contains multiple parent measures for different data types
;=============================================================

;=============================================================
;          PARENT 1: Basic Surface & Atmospheric Data (65 params)
;=============================================================
[Measure_Hourly_Basic_Parent]
Measure=WebParser
URL=https://api.open-meteo.com/v1/forecast?latitude=33.6844&longitude=73.0479&hourly=temperature_2m,weather_code,wind_speed_10m,soil_temperature_0cm,relative_humidity_2m,dew_point_2m,apparent_temperature,precipitation_probability,pressure_msl,surface_pressure,wind_speed_80m,wind_speed_120m,soil_temperature_6cm,soil_temperature_18cm,soil_temperature_54cm,cloud_cover,cloud_cover_low,wind_speed_180m,precipitation,rain,showers,snowfall,snow_depth,cloud_cover_mid,cloud_cover_high,visibility,evapotranspiration,et0_fao_evapotranspiration,vapour_pressure_deficit,wind_direction_10m,wind_direction_80m,wind_direction_120m,wind_direction_180m,wind_gusts_10m,temperature_80m,temperature_120m,temperature_180m,soil_moisture_0_to_1cm,soil_moisture_1_to_3cm,soil_moisture_3_to_9cm,soil_moisture_9_to_27cm,soil_moisture_27_to_81cm,uv_index,cape,lifted_index,freezing_level_height,convective_inhibition,boundary_layer_height,uv_index_clear_sky,is_day,sunshine_duration,wet_bulb_temperature_2m,total_column_integrated_water_vapour,shortwave_radiation,direct_radiation,diffuse_radiation,shortwave_radiation_instant,direct_radiation_instant,diffuse_radiation_instant,direct_normal_irradiance_instant,global_tilted_irradiance_instant,terrestrial_radiation_instant,direct_normal_irradiance,global_tilted_irradiance,terrestrial_radiation
Download=1
RegExp=(?siU)"hourly".*?"temperature_2m":\s*\[([^\]]+)\].*?"weather_code":\s*\[([^\]]+)\].*?"wind_speed_10m":\s*\[([^\]]+)\].*?"soil_temperature_0cm":\s*\[([^\]]+)\].*?"relative_humidity_2m":\s*\[([^\]]+)\].*?"dew_point_2m":\s*\[([^\]]+)\].*?"apparent_temperature":\s*\[([^\]]+)\].*?"precipitation_probability":\s*\[([^\]]+)\].*?"pressure_msl":\s*\[([^\]]+)\].*?"surface_pressure":\s*\[([^\]]+)\].*?"wind_speed_80m":\s*\[([^\]]+)\].*?"wind_speed_120m":\s*\[([^\]]+)\].*?"soil_temperature_6cm":\s*\[([^\]]+)\].*?"soil_temperature_18cm":\s*\[([^\]]+)\].*?"soil_temperature_54cm":\s*\[([^\]]+)\].*?"cloud_cover":\s*\[([^\]]+)\].*?"cloud_cover_low":\s*\[([^\]]+)\].*?"wind_speed_180m":\s*\[([^\]]+)\].*?"precipitation":\s*\[([^\]]+)\].*?"rain":\s*\[([^\]]+)\].*?"showers":\s*\[([^\]]+)\].*?"snowfall":\s*\[([^\]]+)\].*?"snow_depth":\s*\[([^\]]+)\].*?"cloud_cover_mid":\s*\[([^\]]+)\].*?"cloud_cover_high":\s*\[([^\]]+)\].*?"visibility":\s*\[([^\]]+)\].*?"evapotranspiration":\s*\[([^\]]+)\].*?"et0_fao_evapotranspiration":\s*\[([^\]]+)\].*?"vapour_pressure_deficit":\s*\[([^\]]+)\].*?"wind_direction_10m":\s*\[([^\]]+)\].*?"wind_direction_80m":\s*\[([^\]]+)\].*?"wind_direction_120m":\s*\[([^\]]+)\].*?"wind_direction_180m":\s*\[([^\]]+)\].*?"wind_gusts_10m":\s*\[([^\]]+)\].*?"temperature_80m":\s*\[([^\]]+)\].*?"temperature_120m":\s*\[([^\]]+)\].*?"temperature_180m":\s*\[([^\]]+)\].*?"soil_moisture_0_to_1cm":\s*\[([^\]]+)\].*?"soil_moisture_1_to_3cm":\s*\[([^\]]+)\].*?"soil_moisture_3_to_9cm":\s*\[([^\]]+)\].*?"soil_moisture_9_to_27cm":\s*\[([^\]]+)\].*?"soil_moisture_27_to_81cm":\s*\[([^\]]+)\].*?"uv_index":\s*\[([^\]]+)\].*?"cape":\s*\[([^\]]+)\].*?"lifted_index":\s*\[([^\]]+)\].*?"freezing_level_height":\s*\[([^\]]+)\].*?"convective_inhibition":\s*\[([^\]]+)\].*?"boundary_layer_height":\s*\[([^\]]+)\].*?"uv_index_clear_sky":\s*\[([^\]]+)\].*?"is_day":\s*\[([^\]]+)\].*?"sunshine_duration":\s*\[([^\]]+)\].*?"wet_bulb_temperature_2m":\s*\[([^\]]+)\].*?"total_column_integrated_water_vapour":\s*\[([^\]]+)\].*?"shortwave_radiation":\s*\[([^\]]+)\].*?"direct_radiation":\s*\[([^\]]+)\].*?"diffuse_radiation":\s*\[([^\]]+)\].*?"shortwave_radiation_instant":\s*\[([^\]]+)\].*?"direct_radiation_instant":\s*\[([^\]]+)\].*?"diffuse_radiation_instant":\s*\[([^\]]+)\].*?"direct_normal_irradiance_instant":\s*\[([^\]]+)\].*?"global_tilted_irradiance_instant":\s*\[([^\]]+)\].*?"terrestrial_radiation_instant":\s*\[([^\]]+)\].*?"direct_normal_irradiance":\s*\[([^\]]+)\].*?"global_tilted_irradiance":\s*\[([^\]]+)\].*?"terrestrial_radiation":\s*\[([^\]]+)\]
Debug=2
Debug2File=Hourly_Basic

;=============================================================
;          PARENT 2: Temperature at Pressure Levels (19 params)
;=============================================================
[Measure_Hourly_Temperature_hPa_Parent]
Measure=WebParser
URL=https://api.open-meteo.com/v1/forecast?latitude=33.6844&longitude=73.0479&hourly=temperature_1000hPa,temperature_975hPa,temperature_950hPa,temperature_925hPa,temperature_900hPa,temperature_850hPa,temperature_800hPa,temperature_700hPa,temperature_600hPa,temperature_500hPa,temperature_400hPa,temperature_300hPa,temperature_250hPa,temperature_200hPa,temperature_150hPa,temperature_100hPa,temperature_70hPa,temperature_50hPa,temperature_30hPa
Download=1
RegExp=(?siU)"hourly".*?"temperature_1000hPa":\s*\[([^\]]+)\].*?"temperature_975hPa":\s*\[([^\]]+)\].*?"temperature_950hPa":\s*\[([^\]]+)\].*?"temperature_925hPa":\s*\[([^\]]+)\].*?"temperature_900hPa":\s*\[([^\]]+)\].*?"temperature_850hPa":\s*\[([^\]]+)\].*?"temperature_800hPa":\s*\[([^\]]+)\].*?"temperature_700hPa":\s*\[([^\]]+)\].*?"temperature_600hPa":\s*\[([^\]]+)\].*?"temperature_500hPa":\s*\[([^\]]+)\].*?"temperature_400hPa":\s*\[([^\]]+)\].*?"temperature_300hPa":\s*\[([^\]]+)\].*?"temperature_250hPa":\s*\[([^\]]+)\].*?"temperature_200hPa":\s*\[([^\]]+)\].*?"temperature_150hPa":\s*\[([^\]]+)\].*?"temperature_100hPa":\s*\[([^\]]+)\].*?"temperature_70hPa":\s*\[([^\]]+)\].*?"temperature_50hPa":\s*\[([^\]]+)\].*?"temperature_30hPa":\s*\[([^\]]+)\]
Debug=2
Debug2File=Hourly_Temp_hPa

;=============================================================
;          PARENT 3: Relative Humidity at Pressure Levels (19 params)
;=============================================================
[Measure_Hourly_Humidity_hPa_Parent]
Measure=WebParser
URL=https://api.open-meteo.com/v1/forecast?latitude=33.6844&longitude=73.0479&hourly=relative_humidity_1000hPa,relative_humidity_975hPa,relative_humidity_950hPa,relative_humidity_925hPa,relative_humidity_900hPa,relative_humidity_850hPa,relative_humidity_800hPa,relative_humidity_700hPa,relative_humidity_600hPa,relative_humidity_500hPa,relative_humidity_400hPa,relative_humidity_300hPa,relative_humidity_250hPa,relative_humidity_200hPa,relative_humidity_150hPa,relative_humidity_100hPa,relative_humidity_70hPa,relative_humidity_50hPa,relative_humidity_30hPa
Download=1
RegExp=(?siU)"hourly".*?"relative_humidity_1000hPa":\s*\[([^\]]+)\].*?"relative_humidity_975hPa":\s*\[([^\]]+)\].*?"relative_humidity_950hPa":\s*\[([^\]]+)\].*?"relative_humidity_925hPa":\s*\[([^\]]+)\].*?"relative_humidity_900hPa":\s*\[([^\]]+)\].*?"relative_humidity_850hPa":\s*\[([^\]]+)\].*?"relative_humidity_800hPa":\s*\[([^\]]+)\].*?"relative_humidity_700hPa":\s*\[([^\]]+)\].*?"relative_humidity_600hPa":\s*\[([^\]]+)\].*?"relative_humidity_500hPa":\s*\[([^\]]+)\].*?"relative_humidity_400hPa":\s*\[([^\]]+)\].*?"relative_humidity_300hPa":\s*\[([^\]]+)\].*?"relative_humidity_250hPa":\s*\[([^\]]+)\].*?"relative_humidity_200hPa":\s*\[([^\]]+)\].*?"relative_humidity_150hPa":\s*\[([^\]]+)\].*?"relative_humidity_100hPa":\s*\[([^\]]+)\].*?"relative_humidity_70hPa":\s*\[([^\]]+)\].*?"relative_humidity_50hPa":\s*\[([^\]]+)\].*?"relative_humidity_30hPa":\s*\[([^\]]+)\]
Debug=2
Debug2File=Hourly_Humidity_hPa

;=============================================================
;          PARENT 4: Cloud Cover at Pressure Levels (19 params)
;=============================================================
[Measure_Hourly_CloudCover_hPa_Parent]
Measure=WebParser
URL=https://api.open-meteo.com/v1/forecast?latitude=33.6844&longitude=73.0479&hourly=cloud_cover_1000hPa,cloud_cover_975hPa,cloud_cover_950hPa,cloud_cover_925hPa,cloud_cover_900hPa,cloud_cover_850hPa,cloud_cover_800hPa,cloud_cover_700hPa,cloud_cover_600hPa,cloud_cover_500hPa,cloud_cover_400hPa,cloud_cover_300hPa,cloud_cover_250hPa,cloud_cover_200hPa,cloud_cover_150hPa,cloud_cover_100hPa,cloud_cover_70hPa,cloud_cover_50hPa,cloud_cover_30hPa
Download=1
RegExp=(?siU)"hourly".*?"cloud_cover_1000hPa":\s*\[([^\]]+)\].*?"cloud_cover_975hPa":\s*\[([^\]]+)\].*?"cloud_cover_950hPa":\s*\[([^\]]+)\].*?"cloud_cover_925hPa":\s*\[([^\]]+)\].*?"cloud_cover_900hPa":\s*\[([^\]]+)\].*?"cloud_cover_850hPa":\s*\[([^\]]+)\].*?"cloud_cover_800hPa":\s*\[([^\]]+)\].*?"cloud_cover_700hPa":\s*\[([^\]]+)\].*?"cloud_cover_600hPa":\s*\[([^\]]+)\].*?"cloud_cover_500hPa":\s*\[([^\]]+)\].*?"cloud_cover_400hPa":\s*\[([^\]]+)\].*?"cloud_cover_300hPa":\s*\[([^\]]+)\].*?"cloud_cover_250hPa":\s*\[([^\]]+)\].*?"cloud_cover_200hPa":\s*\[([^\]]+)\].*?"cloud_cover_150hPa":\s*\[([^\]]+)\].*?"cloud_cover_100hPa":\s*\[([^\]]+)\].*?"cloud_cover_70hPa":\s*\[([^\]]+)\].*?"cloud_cover_50hPa":\s*\[([^\]]+)\].*?"cloud_cover_30hPa":\s*\[([^\]]+)\]
Debug=2
Debug2File=Hourly_CloudCover_hPa

;=============================================================
;          PARENT 5: Wind Speed at Pressure Levels (19 params)
;=============================================================
[Measure_Hourly_WindSpeed_hPa_Parent]
Measure=WebParser
URL=https://api.open-meteo.com/v1/forecast?latitude=33.6844&longitude=73.0479&hourly=wind_speed_1000hPa,wind_speed_975hPa,wind_speed_950hPa,wind_speed_925hPa,wind_speed_900hPa,wind_speed_850hPa,wind_speed_800hPa,wind_speed_700hPa,wind_speed_600hPa,wind_speed_500hPa,wind_speed_400hPa,wind_speed_300hPa,wind_speed_250hPa,wind_speed_200hPa,wind_speed_150hPa,wind_speed_100hPa,wind_speed_70hPa,wind_speed_50hPa,wind_speed_30hPa
Download=1
RegExp=(?siU)"hourly".*?"wind_speed_1000hPa":\s*\[([^\]]+)\].*?"wind_speed_975hPa":\s*\[([^\]]+)\].*?"wind_speed_950hPa":\s*\[([^\]]+)\].*?"wind_speed_925hPa":\s*\[([^\]]+)\].*?"wind_speed_900hPa":\s*\[([^\]]+)\].*?"wind_speed_850hPa":\s*\[([^\]]+)\].*?"wind_speed_800hPa":\s*\[([^\]]+)\].*?"wind_speed_700hPa":\s*\[([^\]]+)\].*?"wind_speed_600hPa":\s*\[([^\]]+)\].*?"wind_speed_500hPa":\s*\[([^\]]+)\].*?"wind_speed_400hPa":\s*\[([^\]]+)\].*?"wind_speed_300hPa":\s*\[([^\]]+)\].*?"wind_speed_250hPa":\s*\[([^\]]+)\].*?"wind_speed_200hPa":\s*\[([^\]]+)\].*?"wind_speed_150hPa":\s*\[([^\]]+)\].*?"wind_speed_100hPa":\s*\[([^\]]+)\].*?"wind_speed_70hPa":\s*\[([^\]]+)\].*?"wind_speed_50hPa":\s*\[([^\]]+)\].*?"wind_speed_30hPa":\s*\[([^\]]+)\]
Debug=2
Debug2File=Hourly_WindSpeed_hPa

;=============================================================
;          PARENT 6: Wind Direction at Pressure Levels (19 params)
;=============================================================
[Measure_Hourly_WindDirection_hPa_Parent]
Measure=WebParser
URL=https://api.open-meteo.com/v1/forecast?latitude=33.6844&longitude=73.0479&hourly=wind_direction_1000hPa,wind_direction_975hPa,wind_direction_950hPa,wind_direction_925hPa,wind_direction_900hPa,wind_direction_850hPa,wind_direction_800hPa,wind_direction_700hPa,wind_direction_600hPa,wind_direction_500hPa,wind_direction_400hPa,wind_direction_300hPa,wind_direction_250hPa,wind_direction_200hPa,wind_direction_150hPa,wind_direction_100hPa,wind_direction_70hPa,wind_direction_50hPa,wind_direction_30hPa
Download=1
RegExp=(?siU)"hourly".*?"wind_direction_1000hPa":\s*\[([^\]]+)\].*?"wind_direction_975hPa":\s*\[([^\]]+)\].*?"wind_direction_950hPa":\s*\[([^\]]+)\].*?"wind_direction_925hPa":\s*\[([^\]]+)\].*?"wind_direction_900hPa":\s*\[([^\]]+)\].*?"wind_direction_850hPa":\s*\[([^\]]+)\].*?"wind_direction_800hPa":\s*\[([^\]]+)\].*?"wind_direction_700hPa":\s*\[([^\]]+)\].*?"wind_direction_600hPa":\s*\[([^\]]+)\].*?"wind_direction_500hPa":\s*\[([^\]]+)\].*?"wind_direction_400hPa":\s*\[([^\]]+)\].*?"wind_direction_300hPa":\s*\[([^\]]+)\].*?"wind_direction_250hPa":\s*\[([^\]]+)\].*?"wind_direction_200hPa":\s*\[([^\]]+)\].*?"wind_direction_150hPa":\s*\[([^\]]+)\].*?"wind_direction_100hPa":\s*\[([^\]]+)\].*?"wind_direction_70hPa":\s*\[([^\]]+)\].*?"wind_direction_50hPa":\s*\[([^\]]+)\].*?"wind_direction_30hPa":\s*\[([^\]]+)\]
Debug=2
Debug2File=Hourly_WindDirection_hPa

;=============================================================
;          PARENT 7: Geopotential Height at Pressure Levels (19 params)
;=============================================================
[Measure_Hourly_Geopotential_hPa_Parent]
Measure=WebParser
URL=https://api.open-meteo.com/v1/forecast?latitude=33.6844&longitude=73.0479&hourly=geopotential_height_1000hPa,geopotential_height_975hPa,geopotential_height_950hPa,geopotential_height_925hPa,geopotential_height_900hPa,geopotential_height_850hPa,geopotential_height_800hPa,geopotential_height_700hPa,geopotential_height_600hPa,geopotential_height_500hPa,geopotential_height_400hPa,geopotential_height_300hPa,geopotential_height_250hPa,geopotential_height_200hPa,geopotential_height_150hPa,geopotential_height_100hPa,geopotential_height_70hPa,geopotential_height_50hPa,geopotential_height_30hPa
Download=1
RegExp=(?siU)"hourly".*?"geopotential_height_1000hPa":\s*\[([^\]]+)\].*?"geopotential_height_975hPa":\s*\[([^\]]+)\].*?"geopotential_height_950hPa":\s*\[([^\]]+)\].*?"geopotential_height_925hPa":\s*\[([^\]]+)\].*?"geopotential_height_900hPa":\s*\[([^\]]+)\].*?"geopotential_height_850hPa":\s*\[([^\]]+)\].*?"geopotential_height_800hPa":\s*\[([^\]]+)\].*?"geopotential_height_700hPa":\s*\[([^\]]+)\].*?"geopotential_height_600hPa":\s*\[([^\]]+)\].*?"geopotential_height_500hPa":\s*\[([^\]]+)\].*?"geopotential_height_400hPa":\s*\[([^\]]+)\].*?"geopotential_height_300hPa":\s*\[([^\]]+)\].*?"geopotential_height_250hPa":\s*\[([^\]]+)\].*?"geopotential_height_200hPa":\s*\[([^\]]+)\].*?"geopotential_height_150hPa":\s*\[([^\]]+)\].*?"geopotential_height_100hPa":\s*\[([^\]]+)\].*?"geopotential_height_70hPa":\s*\[([^\]]+)\].*?"geopotential_height_50hPa":\s*\[([^\]]+)\].*?"geopotential_height_30hPa":\s*\[([^\]]+)\]
Debug=2
Debug2File=Hourly_Geopotential_hPa
