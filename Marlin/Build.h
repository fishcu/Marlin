#pragma once

//Step 1 uncomment 1 model - these enable every setting for this model not just the board.
#define GTA10       // A10 Variant
//#define GTA20       // A20 Variant
//#define MECREATOR2  // Mecreator2
//#define I3PROW      // I3prow & I3proa *testing*
//#define GTA30       // A30 *experimental* vertabreakers_experiments/A30_E180/howto.txt explains how to setup & sdcard enabled required & demo on my youtube
//#define GTE180      // E180 *experimental* vertabreakers_experiments/A30_E180/howto.txt explains how to setup & sdcard enabled required & demo on my youtube

//Step 2 uncomment probe or fmp if you have one, if you have a 5V probe enable VMSM. Bltouch V3+ options can be found in configuration_adv.h in the bltouch section should you need them.
#define Probe    // Enable 3dtouch/bltouch probe support else without probe or fmp use manual probing with nozzle & paper if disabled.
//#define FMP      // Enable Fixed Mounted Probe else without probe or fmp use manual probing with nozzle & paper if disabled.
//#define DUOPROBE // Probe 2x keep the 2ed result, only works with probe enabled AVGPROBE & DUOPROBE cant be combined.
//#define AVGPROBE // Probe 3x take the average, only works with probe enabled AVGPROBE & DUOPROBE cant be combined.
//#define VMSM     // Enable Bltouch Voltage mode selection menu (DANGER: Applying 5V to a probe that isnt 5V will break it). 

//Step 3 drivers section select 1
#define TMC2208    // Enable TMC2208 standard inverted on all drivers
//#define A4988      // Enable A4988 on all drivers (1$ junk stock drivers)
//#define TMC2208I   // Enable TMC2208 not standard uninverted all drivers
//#define TMC2130    // Enable TMC2130 on all drivers
//#define DRV8825    // Enable DRV8825 on all drivers
//#define LV8729     // Enable LV8729 on all drivers
//#define TMC2209    // Enable TMC2209 on all drivers

//Step 4 extruder motor direction 1 must be selected, if extruder runs the wrong way switch to the other
#define EFALSE  // Extruder direction False inverted (Stock geared mix variants) 
//#define ETRUE // Extruder direction True not inverted (Stock ungeared feeders)

//Step 5 steps selection pick 1
#define UNGEARED //ungeared like found on a10/a20/a30
//#define GEARED   //geared extruder like found stock on mix variants
//#define BMG      //bmg extruder
//#define DEFAULT_AXIS_STEPS_PER_UNIT   { 80, 80, 400, 0 } // define manually
 
//Step 6 uncomment only the features you intend to use
#define SDCARD     // Enable SDcard support - Costs over 1000 Bytes dynamic memory
//#define PLR        // Enable Power loss resume - Costs over 500 Bytes dynamic memory. 
//#define RUNOUT     // Enable Filament runout support - Some of the sensors are uninverted if triggered with filament loaded enabled RINVERT to flip the sensor.
//#define RINVERT    // Enable Filament runout inversion to Uninvert Runout sensor only used if RUNOUT enabled.

//Step 7 uncomment only 1 if you have mix/2in1 variant.
//#define CYCLOPS // Enable Cyclops, E3D 2In1 control system - Physical Motor Control (E0&E1)
//#define MIX     // Enable Mixing, Geeetech 2in1 control system - Virtual Motor Control (E1&M163-M166)

//Step 8 Final Step.
//#define I_HAVE_READ_AND_UNDERSTOOD_THE_INSTRUCTIONS

//Below this line are more advanced configurations for special situations.

//These defines need have to be enabled but there value can be edited.
#define GCODEBUFFER 4  // Size of serial buffer default 4 - octopi users may want this larger to prevent slowdown due to cpu lag.
#define GRIDSIZE 10    // Mesh grid size XY for bed leveling max 15, default 10x10=100 point mesh 
#define MPE 0          // Min Probe Edge/Mesh Inset keeps probe away from sides if you have clips you will need to set this 10+. (clips are well known to short out the bed)
#define HMAX 265       // Hotend Max Temp default 265-15=250C if you changed to all metal hotend or upgraded to Capricorn ptfe you can go higher then 250C (stock PTFE melts at 250C)
#define WATCHWINDOW 60 // Amount of seconds temp unstable before triggering thermal runaway
#define LAK 0          // Linear Advance K Value Max=2/Min=0=off
#define BUILDNUMBER "Build 379" // Correlates to the iterations of this configuration  
#define XPROBEOFFSET -38   // X probe offset 3Dtouch -38 BLtouch -40 with stock mount on A10/A20 
#define YPROBEOFFSET 0     // Y probe offset
#define ZPROBEOFFSET 0     // Z probe offset if you add your z offset here it will be hard-coded
#define PROBESPEED  300    // Probing speed in mm/m dont suggest more then 300

//--------------------------------------
//Optional stuff that is rarly used. |
//--------------------------------------

//#define WORKOFFSETS // Enable WORKSPACE OFFSETS M206 & M428
//#define ADSTSM      // Enable adaptive step smoothing may cause step inconsistency
//#define HTTS        // Enable High Temperature Thermistor Error Checking Support
//#define AFS         // Enable Adaptive fan slowing if temp drops
//#define LEDHEADER   // Enable LED control menu for use with the led header on board (Mecreator2 stock has this setup)
//#define PRINTSTATS  // Enable print statistic menu.
//#define ACTION      // Enable Action Commands that dont do much and can cause issues.
//#define BACKCOMP    // Enable Backlash Compensation
//#define FREQLIM     // Enable XY Frequency limit
//#define PIDESCALE   // Enable PID Extrusion Scaling costs over 200 bytes
//#define ATEMP       // Enable Automatic Temperature Feature
//#define EFS         // Enable Extra Fan Speed Option
//#define PDEBUG      // Enable Pins Debugging
//#define BASICHOME   // Enable Basic lcd homing XYZ 
