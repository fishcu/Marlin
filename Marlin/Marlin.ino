/*
==============================================================================================================================================
  Marlin Firmware
  (c) 2011-2018 MarlinFirmware
  Portions of Marlin are (c) by their respective authors.
  All code complies with GPLv2 and/or GPLv3
===============================================================================================================================================
(Warning: you take full responsability for your actions devices can be bricked trying to update)
===============================================================================================================================================
Build.h defines reconfigure marlin for the listed model & features. anything with a // is commented out = disabled, remove the // = enable.

Compile with latest Arduino IDE V1.9 beta for Windows users or V1.8.9 for Linux users.

Select atmega2650 for 8bit geeetech boards or STM32F103V variant VE Serial type for 32bit geeetech boards and check that your printer port is selected.
 
Make sure U8glib is installed in the library menu (may fail to compile without). 

For the flash process be sure to close any other program that controls the printer failure to do so can brick the printer. 

Build.h is setup default for the machine this was tested on you will need to reconfigure for your printer.

Follow the step by step setup in Build.h or watch the video https://youtu.be/ElF0QOJaOUA

Dont use corner leveling after activating UBL, Z correction is enabled at boot.

In vertabrakers_experiments/calibrations folder there are calibration test files.

Basic UBL setup commands in tools menu example - Auto:(preheat>probe(optional:)tilt>manual) Manual:(preheat>manual) or from the UBL menu / Console completing the 7-12 step process by hand.

http://marlinfw.org/docs/features/unified_bed_leveling.html

This Build consists of Build.h/Configuration.h/Configuration_adv.h & folder "vertabreakers_experiments" + 100% Marlin 2 source that you need to download and add your self.

This Marlin Fork is maintained by geeetech forum admin vert also known as vertabreaker and intended for use with geeetech printers.

Each and every build is print tested on either my a10 or a10m sometimes both before being posted.
================================================================================================================================================
Vertabreakers Discord: https://discord.gg/FSS5Tbz              -  Vertabreakers Thingiverse: https://www.thingiverse.com/Vertabreaker/about
Vertabreakers Youtube: https://www.youtube.com/c/Vertabreaker  
Affiliate links PLA: https://amzn.to/2LrrGxO TPU: https://amzn.to/2LXZAtN A20M: https://amzn.to/2M5CSA3
=================================================================================================================================================
Backstory:
In November 2018 I started researching 3dprinting must have watched something like 1000 hours of videos on YouTube wandered many guides and forums for about a month.
December I finally muster enough funds to purchase my first 3dprinter the geeetech a10 it arrived 2 days later amazon prime shipping. Box arrived undamaged opened it up spent a couple hours setting it up. 
For nearly a full month I tried all day everyday to produce a viable print used up 4 entire spools of PLA not a single viable print with stock firmware. I did what most people do I contacted geeetech they 
sent me some replacement parts ect still a no go. At this point im rather angry the product I invested in still does not work. But unlike many at this point I started digging deeper I needed to know why it
didn't work I needed to prove to my self that I could make it work. This is when I started to notice other people posting there versions of the firmware with newer marlin version. Not long after this I 
started rolling out my own version of marlin and testing things my self. Soon I found with some configuration changes I was now able to print basic things but still not very well.
Some may recall some of my very first version of marlin 1.1.8/1.1.9/1.1.x and the current version still being kept up to date marlin 2.0. for some time I had maintained well over 15 separate configurations as more 
people requested custom modded configurations. That was very slow and rather annoying I had seen th3d unified firmware and liked how it put everything in to one. With this idea I started producing a 3 part 
configuration you see today that makes it very simple to enable/disable many common models and setups for geeetech printers. I have been experimenting with getting marlin 2.0 functional on gtm32 boards you 
may have seen some of my videos show this. I hope that a little background in to the origins of verts builds helps other understand what I am doing. I make these builds for me I just figure I should share 
them with the community. If it was at all unclear marlin 2.0 source is the framework and my configuration that makes it easy to setup marlin and in some cases even supports models that are not in source 
that is the “build”.
*/
