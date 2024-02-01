#include <iostream>
#include <fstream>
#include <filesystem>
#include <string.h>
#include <limits>
#include <ios>

namespace Files
{
    std::string circle = R"ini(//this file is for circles in mania
[General]
Name: AllModeV3
Author: cottonplant
Version: 2.7

SliderBallFlip: 0

CursorRotate: 1
CursorExpand: 1
CursorCentre: 1

SliderBallFrames: 1
HitCircleOverlayAboveNumber: 1
LayeredHitSounds: 1

SpinnerFadePlayfield: 1
# ^ depends on "version", that is usage of new skin behaviour
SpinnerNoBlink: 0

AnimationFramerate: -1

AllowSliderBallTint: 0
CursorTrailRotate: 0

CustomComboBurstSounds: 30,60,90,120,240,480
# ^ not default, but couldn't find it: (
ComboBurstRandom: 0

SliderStyle: 2
# ^
# 1 - peppysliders
# 2 - mmsliders
# 3 - toonsliders
# 4 - legacyOpenGL-only sliders

[Colours]
# Combo1: 255,0,255
# Combo2: 0,255,255
# Combo3: 255,255,0
# Combo4: 0,255,0
# Combo1: 255,255,255

MenuGlow: 60,60,60
//^ only for custom backgrounds

SliderBorder: {Light}
SliderTrackOverride: 0,0,0

SpinnerApproachCircle: {Light}

SongSelectActiveText: {Light}
SongSelectInactiveText: 255,255,255

StarBreakAdditive: 255,0,0

[Fonts]
HitCirclePrefix: default
HitCircleOverlap: -2

ScorePrefix: score
ScoreOverlap: 0

[Mania]
Keys: 2
ColumnStart: 300
HitPosition: 449
SpecialStyle: 0
UpsideDown: 0
JudgementLine: 0
ScorePosition: 370
ComboPosition: 330
LightFramePerSecond: 24
ColumnWidth: 65,65
BarlineHeight: 0
ColumnLineWidth: 0,0,0
NoteBodyStyle: 2

Colour1: 0,0,0,255
Colour2: 0,0,0,255
Colour3: 0,0,0,255
Colour4: 0,0,0,255
ColourHold: 255,255,255,255

KeyImage0: notes/k
KeyImage0D: notes/kd

KeyImage1: notes/k
KeyImage1D: notes/kd



NoteImage0: notes/nb
NoteImage0H: notes/nnb
NoteImage0L: notes/sb

NoteImage1: notes/ng
NoteImage1H: notes/nng
NoteImage1L: notes/sg


NoteImage0T: notes/tb
NoteImage1T: notes/tg


StageRight: stage/rs
StageLeft: stage/ss2
StageBottom: stage/e
StageLight: stage/e
StageHint: stage/e
Hit0: stage/e
Hit50: stage/e
Hit100: stage/e
Hit200: stage/e
Hit300: stage/e
Hit300g: stage/e
LightingN: stage/e
LightingL: stage/e

[Mania]
Keys: 3
ColumnStart: 300
HitPosition: 449
SpecialStyle: 0
UpsideDown: 0
JudgementLine: 0
ScorePosition: 370
ComboPosition: 330
LightFramePerSecond: 24
ColumnWidth: 65,65,65
BarlineHeight: 0
ColumnLineWidth: 0,0,0,0
NoteBodyStyle: 2

Colour1: 0,0,0,255
Colour2: 0,0,0,255
Colour3: 0,0,0,255
Colour4: 0,0,0,255
ColourHold: 255,255,255,255

KeyImage0: notes/k
KeyImage0D: notes/kd

KeyImage1: notes/k
KeyImage1D: notes/kd

KeyImage2: notes/k
KeyImage2D: notes/kd

NoteImage0: notes/nb
NoteImage0H: notes/nnb
NoteImage0L: notes/sb

NoteImage1: notes/ng
NoteImage1H: notes/nng
NoteImage1L: notes/sg

NoteImage2: notes/ng
NoteImage2H: notes/nng
NoteImage2L: notes/sg

NoteImage0T: notes/tb
NoteImage1T: notes/tg
NoteImage2T: notes/tg

StageRight: stage/rs
StageLeft: stage/ss2
StageBottom: stage/e
StageLight: stage/e
StageHint: stage/e
Hit0: stage/e
Hit50: stage/e
Hit100: stage/e
Hit200: stage/e
Hit300: stage/e
Hit300g: stage/e
LightingN: stage/e
LightingL: stage/e

[Mania]
Keys: 4
ColumnStart: 300
HitPosition: 449
SpecialStyle: 0
UpsideDown: 0
JudgementLine: 0
ScorePosition: 370
ComboPosition: 330
LightFramePerSecond: 24
ColumnWidth: 65,65,65,65
BarlineHeight: 0
ColumnLineWidth: 0,0,0,0,0
NoteBodyStyle: 2

Colour1: 0,0,0,255
Colour2: 0,0,0,255
Colour3: 0,0,0,255
Colour4: 0,0,0,255
ColourHold: 255,255,255,255

KeyImage0: notes/k
KeyImage0D: notes/kd

KeyImage1: notes/k
KeyImage1D: notes/kd

KeyImage2: notes/k
KeyImage2D: notes/kd

KeyImage3: notes/k
KeyImage3D: notes/kd

NoteImage0: notes/nb
NoteImage0H: notes/nnb
NoteImage0L: notes/sb

NoteImage1: notes/ng
NoteImage1H: notes/nng
NoteImage1L: notes/sg

NoteImage2: notes/ng
NoteImage2H: notes/nng
NoteImage2L: notes/sg

NoteImage3: notes/nb
NoteImage3H: notes/nnb
NoteImage3L: notes/sb

NoteImage0T: notes/tb
NoteImage1T: notes/tg
NoteImage2T: notes/tg
NoteImage3T: notes/tb

StageRight: stage/rs
StageLeft: stage/ss2
StageBottom: stage/e
StageLight: stage/e
StageHint: stage/e
Hit0: stage/e
Hit50: stage/e
Hit100: stage/e
Hit200: stage/e
Hit300: stage/e
Hit300g: stage/e
LightingN: stage/e
LightingL: stage/e

[Mania]
Keys: 5
ColumnStart: 300
HitPosition: 449
SpecialStyle: 0
UpsideDown: 0
JudgementLine: 0
ScorePosition: 370
ComboPosition: 330
LightFramePerSecond: 48
ColumnWidth: 65,65,65,65,65
BarlineHeight: 0
ColumnLineWidth: 0,0,0,0,0,0
NoteBodyStyle: 2

Colour1: 0,0,0,255
Colour2: 0,0,0,255
Colour3: 0,0,0,255
Colour4: 0,0,0,255
ColourHold: 255,255,255,255

KeyImage0: notes/k
KeyImage0D: notes/kd

KeyImage1: notes/k
KeyImage1D: notes/kd

KeyImage2: notes/k
KeyImage2D: notes/kd

KeyImage3: notes/k
KeyImage3D: notes/kd

KeyImage4: notes/k
KeyImage4D: notes/kd

NoteImage0: notes/nb
NoteImage0H: notes/nnb
NoteImage0L: notes/sb

NoteImage1: notes/ng
NoteImage1H: notes/nng
NoteImage1L: notes/sg

NoteImage2: notes/nb
NoteImage2H: notes/nnb
NoteImage2L: notes/sb

NoteImage3: notes/ng
NoteImage3H: notes/nng
NoteImage3L: notes/sg

NoteImage4: notes/nb
NoteImage4H: notes/nnb
NoteImage4L: notes/sb

NoteImage0T: notes/tb
NoteImage1T: notes/tg
NoteImage2T: notes/tb
NoteImage3T: notes/tg
NoteImage4T: notes/tb

StageRight: stage/rs
StageLeft: stage/ss2
StageBottom: stage/e
StageLight: stage/e
StageHint: stage/e
Hit0: hitbursts/miss
Hit50: hitbursts/bad
Hit100: hitbursts/good
Hit200: hitbursts/great
Hit300: hitbursts/excellent
Hit300g: hitbursts/extraordinary
LightingN: null
LightingL: null

[Mania]
Keys: 6
ColumnStart: 300
HitPosition: 449
SpecialStyle: 0
UpsideDown: 0
JudgementLine: 0
ScorePosition: 370
ComboPosition: 330
LightFramePerSecond: 48
ColumnWidth: 65,65,65,65,65,65
BarlineHeight: 0
ColumnLineWidth: 0,0,0,0,0,0,0
NoteBodyStyle: 2

Colour1: 0,0,0,255
Colour2: 0,0,0,255
Colour3: 0,0,0,255
Colour4: 0,0,0,255
ColourHold: 255,255,255,255

KeyImage0: notes/k
KeyImage0D: notes/kd

KeyImage1: notes/k
KeyImage1D: notes/kd

KeyImage2: notes/k
KeyImage2D: notes/kd

KeyImage3: notes/k
KeyImage3D: notes/kd

KeyImage4: notes/k
KeyImage4D: notes/kd

KeyImage5: notes/k
KeyImage5D: notes/kd

NoteImage0: notes/ng
NoteImage0H: notes/nng
NoteImage0L: notes/sg

NoteImage1: notes/nb
NoteImage1H: notes/nnb
NoteImage1L: notes/sb

NoteImage2: notes/ng
NoteImage2H: notes/nng
NoteImage2L: notes/sg

NoteImage3: notes/ng
NoteImage3H: notes/nng
NoteImage3L: notes/sg

NoteImage4: notes/nb
NoteImage4H: notes/nnb
NoteImage4L: notes/sb

NoteImage5: notes/ng
NoteImage5H: notes/nng
NoteImage5L: notes/sg

NoteImage0T: notes/tg
NoteImage1T: notes/tb
NoteImage2T: notes/tg
NoteImage3T: notes/tg
NoteImage4T: notes/tb
NoteImage5T: notes/tg

StageRight: stage/rs
StageLeft: stage/ss2
StageBottom: stage/e
StageLight: stage/e
StageHint: stage/e
Hit0: hitbursts/miss
Hit50: hitbursts/bad
Hit100: hitbursts/good
Hit200: hitbursts/great
Hit300: hitbursts/excellent
Hit300g: hitbursts/extraordinary
LightingN: null
LightingL: null

[Mania]
Keys: 7
ColumnStart: 300
HitPosition: 449
SpecialStyle: 0
UpsideDown: 0
JudgementLine: 0
ScorePosition: 370
ComboPosition: 330
LightFramePerSecond: 48
ColumnWidth: 65,65,65,65,65,65,65
BarlineHeight: 0
ColumnLineWidth: 0,0,0,0,0,0,0,0
NoteBodyStyle: 2

Colour1: 0,0,0,255
Colour2: 0,0,0,255
Colour3: 0,0,0,255
Colour4: 0,0,0,255
ColourHold: 255,255,255,255

KeyImage0: notes/k
KeyImage0D: notes/kd

KeyImage1: notes/k
KeyImage1D: notes/kd

KeyImage2: notes/k
KeyImage2D: notes/kd

KeyImage3: notes/k
KeyImage3D: notes/kd

KeyImage4: notes/k
KeyImage4D: notes/kd

KeyImage5: notes/k
KeyImage5D: notes/kd

KeyImage6: notes/k
KeyImage6D: notes/kd

NoteImage0: notes/nb
NoteImage0H: notes/nnb
NoteImage0L: notes/sb

NoteImage1: notes/ng
NoteImage1H: notes/nng
NoteImage1L: notes/sg

NoteImage2: notes/nb
NoteImage2H: notes/nnb
NoteImage2L: notes/sb

NoteImage3: notes/ng
NoteImage3H: notes/nng
NoteImage3L: notes/sg

NoteImage4: notes/nb
NoteImage4H: notes/nnb
NoteImage4L: notes/sb

NoteImage5: notes/ng
NoteImage5H: notes/nng
NoteImage5L: notes/sg

NoteImage6: notes/nb
NoteImage6H: notes/nnb
NoteImage6L: notes/sb

NoteImage0T: notes/tb
NoteImage1T: notes/tg
NoteImage2T: notes/tb
NoteImage3T: notes/tg
NoteImage4T: notes/tb
NoteImage5T: notes/tg
NoteImage5T: notes/tb

StageRight: stage/rs
StageLeft: stage/ss2
StageBottom: stage/e
StageLight: stage/e
StageHint: stage/e
Hit0: hitbursts/miss
Hit50: hitbursts/bad
Hit100: hitbursts/good
Hit200: hitbursts/great
Hit300: hitbursts/excellent
Hit300g: hitbursts/extraordinary
LightingN: null
LightingL: null
[Mania]
Keys: 9
UpsideDown: 0
[Mania]
Keys: 8
SpecialStyle: None
UpsideDown: 0
JudgementLine: 1

[Mania]
Keys: 8
ColumnStart: 170
HitPosition: 449
SpecialStyle: 0
UpsideDown: 0
JudgementLine: 0
ScorePosition: 370
ComboPosition: 330
LightFramePerSecond: 48
ColumnWidth: 65,65,65,65,65,65,65,65
BarlineHeight: 0
ColumnLineWidth: 0,0,0,0,0,0,0,0,0
NoteBodyStyle: 2

Colour1: 0,0,0,255
Colour2: 0,0,0,255
Colour3: 0,0,0,255
Colour4: 0,0,0,255
ColourHold: 255,255,255,255

KeyImage0: notes/k
KeyImage0D: notes/kd

KeyImage1: notes/k
KeyImage1D: notes/kd

KeyImage2: notes/k
KeyImage2D: notes/kd

KeyImage3: notes/k
KeyImage3D: notes/kd

KeyImage4: notes/k
KeyImage4D: notes/kd

KeyImage5: notes/k
KeyImage5D: notes/kd

KeyImage6: notes/k
KeyImage6D: notes/kd

KeyImage7: notes/k
KeyImage7D: notes/kd

NoteImage0: notes/ng
NoteImage0H: notes/nng
NoteImage0L: notes/sg

NoteImage1: notes/nb
NoteImage1H: notes/nnb
NoteImage1L: notes/sb

NoteImage2: notes/ng
NoteImage2H: notes/nng
NoteImage2L: notes/sg

NoteImage3: notes/nb
NoteImage3H: notes/nnb
NoteImage3L: notes/sb

NoteImage4: notes/nb
NoteImage4H: notes/nnb
NoteImage4L: notes/sb

NoteImage5: notes/ng
NoteImage5H: notes/nng
NoteImage5L: notes/sg

NoteImage6: notes/nb
NoteImage6H: notes/nnb
NoteImage6L: notes/sb

NoteImage7: notes/ng
NoteImage7H: notes/nng
NoteImage7L: notes/sg

NoteImage0T: notes/tg
NoteImage1T: notes/tb
NoteImage2T: notes/tg
NoteImage2T: notes/tb
NoteImage3T: notes/tb
NoteImage4T: notes/tg
NoteImage5T: notes/tb
NoteImage4T: notes/tg

StageRight: stage/rs
StageLeft: stage/ss2
StageBottom: stage/e
StageLight: stage/e
StageHint: stage/e
Hit0: hitbursts/miss
Hit50: hitbursts/bad
Hit100: hitbursts/good
Hit200: hitbursts/great
Hit300: hitbursts/excellent
Hit300g: hitbursts/extraordinary
LightingN: null
LightingL: null

[Mania]
Keys: 9
ColumnStart: 150
HitPosition: 449
SpecialStyle: 0
UpsideDown: 0
JudgementLine: 0
ScorePosition: 370
ComboPosition: 330
LightFramePerSecond: 48
ColumnWidth: 65,65,65,65,65,65,65,65,65
BarlineHeight: 0
ColumnLineWidth: 0,0,0,0,0,0,0,0,0,0
NoteBodyStyle: 2

Colour1: 0,0,0,255
Colour2: 0,0,0,255
Colour3: 0,0,0,255
Colour4: 0,0,0,255
ColourHold: 255,255,255,255

KeyImage0: notes/k
KeyImage0D: notes/kd

KeyImage1: notes/k
KeyImage1D: notes/kd

KeyImage2: notes/k
KeyImage2D: notes/kd

KeyImage3: notes/k
KeyImage3D: notes/kd

KeyImage4: notes/k
KeyImage4D: notes/kd

KeyImage5: notes/k
KeyImage5D: notes/kd

KeyImage6: notes/k
KeyImage6D: notes/kd

KeyImage7: notes/k
KeyImage7D: notes/kd

KeyImage8: notes/k
KeyImage8D: notes/kd

NoteImage0: notes/ng
NoteImage0H: notes/nng
NoteImage0L: notes/sg

NoteImage1: notes/nb
NoteImage1H: notes/nnb
NoteImage1L: notes/sb

NoteImage2: notes/ng
NoteImage2H: notes/nng
NoteImage2L: notes/sg

NoteImage3: notes/nb
NoteImage3H: notes/nnb
NoteImage3L: notes/sb

NoteImage4: notes/ng
NoteImage4H: notes/nng
NoteImage4L: notes/sg

NoteImage5: notes/nb
NoteImage5H: notes/nnb
NoteImage5L: notes/sb

NoteImage6: notes/ng
NoteImage6H: notes/nng
NoteImage6L: notes/sg

NoteImage7: notes/nb
NoteImage7H: notes/nnb
NoteImage7L: notes/sb

NoteImage8: notes/ng
NoteImage8H: notes/nng
NoteImage8L: notes/sg

NoteImage0T: notes/tg
NoteImage1T: notes/tb
NoteImage2T: notes/tg
NoteImage3T: notes/tb
NoteImage4T: notes/tg
NoteImage5T: notes/tb
NoteImage6T: notes/tg
NoteImage7T: notes/tb
NoteImage8T: notes/tg

StageRight: stage/rs
StageLeft: stage/ss2
StageBottom: stage/e
StageLight: stage/e
StageHint: stage/e
Hit0: hitbursts/miss
Hit50: hitbursts/bad
Hit100: hitbursts/good
Hit200: hitbursts/great
Hit300: hitbursts/excellent
Hit300g: hitbursts/extraordinary
LightingN: null
LightingL: null

)ini";
    std::string bar = R"ini(//this file is for bars in mania
[General]
Name: AllModeV3
Author: cottonplant
Version: 2.7

SliderBallFlip: 0

CursorRotate: 1
CursorExpand: 1
CursorCentre: 1

SliderBallFrames: 1
HitCircleOverlayAboveNumber: 1
LayeredHitSounds: 1

SpinnerFadePlayfield: 1
//^ depends on "version", that is usage of new skin behaviour
SpinnerNoBlink: 0

AnimationFramerate: -1

AllowSliderBallTint: 0
CursorTrailRotate: 0

CustomComboBurstSounds: 30,60,90,120,240,480
//^not default, but couldnt find it: (
ComboBurstRandom: 0

SliderStyle: 2
//^
// 1 - peppysliders
// 2 - mmsliders
// 3 - toonsliders
// 4 - legacyOpenGL-only sliders

[Colours]
//Combo1: 255,0,255
//Combo2: 0,255,255
//Combo3: 255,255,0
//Combo4: 0,255,0
//Combo1: 255,255,255

MenuGlow: 60,60,60
//^ only for custom backgrounds

SliderBorder: {Light}
SliderTrackOverride: 0,0,0

SpinnerApproachCircle: {Light}

SongSelectActiveText: {Light}
SongSelectInactiveText: 255,255,255

StarBreakAdditive: 255,0,0

[Fonts]
HitCirclePrefix: default
HitCircleOverlap: -2

ScorePrefix: score
ScoreOverlap: 0

[Mania]
Keys: 2
ColumnStart: 300
HitPosition: 432
SpecialStyle: 0
UpsideDown: 0
JudgementLine: 0
ScorePosition: 370
ComboPosition: 330
LightFramePerSecond: 24
ColumnWidth: 65,65
BarlineHeight: 0
ColumnLineWidth: 0,0,0
NoteBodyStyle: 2

Colour1: 0,0,0,255
Colour2: 0,0,0,255
Colour3: 0,0,0,255
Colour4: 0,0,0,255
ColourHold: 255,255,255,255

KeyImage0: notes (bar)/k
KeyImage0D: notes (bar)/kd

KeyImage1: notes (bar)/k
KeyImage1D: notes (bar)/kd



NoteImage0: notes (bar)/nb
NoteImage0H: notes (bar)/nnb
NoteImage0L: notes (bar)/sb

NoteImage1: notes (bar)/ng
NoteImage1H: notes (bar)/nng
NoteImage1L: notes (bar)/sg


NoteImage0T: notes (bar)/tb
NoteImage1T: notes (bar)/tg


StageRight: stage/rs
StageLeft: stage/ss2
StageBottom: stage/e
StageLight: stage/e
StageHint: stage/e
Hit0: stage/e
Hit50: stage/e
Hit100: stage/e
Hit200: stage/e
Hit300: stage/e
Hit300g: stage/e
LightingN: stage/e
LightingL: stage/e

[Mania]
Keys: 3
ColumnStart: 300
HitPosition: 432
SpecialStyle: 0
UpsideDown: 0
JudgementLine: 0
ScorePosition: 370
ComboPosition: 330
LightFramePerSecond: 24
ColumnWidth: 65,65,65
BarlineHeight: 0
ColumnLineWidth: 0,0,0,0
NoteBodyStyle: 2

Colour1: 0,0,0,255
Colour2: 0,0,0,255
Colour3: 0,0,0,255
Colour4: 0,0,0,255
ColourHold: 255,255,255,255

KeyImage0: notes (bar)/k
KeyImage0D: notes (bar)/kd

KeyImage1: notes (bar)/k
KeyImage1D: notes (bar)/kd

KeyImage2: notes (bar)/k
KeyImage2D: notes (bar)/kd

NoteImage0: notes (bar)/nb
NoteImage0H: notes (bar)/nnb
NoteImage0L: notes (bar)/sb

NoteImage1: notes (bar)/ng
NoteImage1H: notes (bar)/nng
NoteImage1L: notes (bar)/sg

NoteImage2: notes (bar)/ng
NoteImage2H: notes (bar)/nng
NoteImage2L: notes (bar)/sg

NoteImage0T: notes (bar)/tb
NoteImage1T: notes (bar)/tg
NoteImage2T: notes (bar)/tg

StageRight: stage/rs
StageLeft: stage/ss2
StageBottom: stage/e
StageLight: stage/e
StageHint: stage/e
Hit0: stage/e
Hit50: stage/e
Hit100: stage/e
Hit200: stage/e
Hit300: stage/e
Hit300g: stage/e
LightingN: stage/e
LightingL: stage/e

[Mania]
Keys: 4
ColumnStart: 300
HitPosition: 432
SpecialStyle: 0
UpsideDown: 0
JudgementLine: 0
ScorePosition: 370
ComboPosition: 330
LightFramePerSecond: 24
ColumnWidth: 65,65,65,65
BarlineHeight: 0
ColumnLineWidth: 0,0,0,0,0
NoteBodyStyle: 2

Colour1: 0,0,0,255
Colour2: 0,0,0,255
Colour3: 0,0,0,255
Colour4: 0,0,0,255
ColourHold: 255,255,255,255

KeyImage0: notes (bar)/k
KeyImage0D: notes (bar)/kd

KeyImage1: notes (bar)/k
KeyImage1D: notes (bar)/kd

KeyImage2: notes (bar)/k
KeyImage2D: notes (bar)/kd

KeyImage3: notes (bar)/k
KeyImage3D: notes (bar)/kd

NoteImage0: notes (bar)/nb
NoteImage0H: notes (bar)/nnb
NoteImage0L: notes (bar)/sb

NoteImage1: notes (bar)/ng
NoteImage1H: notes (bar)/nng
NoteImage1L: notes (bar)/sg

NoteImage2: notes (bar)/ng
NoteImage2H: notes (bar)/nng
NoteImage2L: notes (bar)/sg

NoteImage3: notes (bar)/nb
NoteImage3H: notes (bar)/nnb
NoteImage3L: notes (bar)/sb

NoteImage0T: notes (bar)/tb
NoteImage1T: notes (bar)/tg
NoteImage2T: notes (bar)/tg
NoteImage3T: notes (bar)/tb

StageRight: stage/rs
StageLeft: stage/ss2
StageBottom: stage/e
StageLight: stage/e
StageHint: stage/e
Hit0: stage/e
Hit50: stage/e
Hit100: stage/e
Hit200: stage/e
Hit300: stage/e
Hit300g: stage/e
LightingN: stage/e
LightingL: stage/e

[Mania]
Keys: 5
ColumnStart: 300
HitPosition: 432
SpecialStyle: 0
UpsideDown: 0
JudgementLine: 0
ScorePosition: 370
ComboPosition: 330
LightFramePerSecond: 48
ColumnWidth: 65,65,65,65,65
BarlineHeight: 0
ColumnLineWidth: 0,0,0,0,0,0
NoteBodyStyle: 2

Colour1: 0,0,0,255
Colour2: 0,0,0,255
Colour3: 0,0,0,255
Colour4: 0,0,0,255
ColourHold: 255,255,255,255

KeyImage0: notes (bar)/k
KeyImage0D: notes (bar)/kd

KeyImage1: notes (bar)/k
KeyImage1D: notes (bar)/kd

KeyImage2: notes (bar)/k
KeyImage2D: notes (bar)/kd

KeyImage3: notes (bar)/k
KeyImage3D: notes (bar)/kd

KeyImage4: notes (bar)/k
KeyImage4D: notes (bar)/kd

NoteImage0: notes (bar)/nb
NoteImage0H: notes (bar)/nnb
NoteImage0L: notes (bar)/sb

NoteImage1: notes (bar)/ng
NoteImage1H: notes (bar)/nng
NoteImage1L: notes (bar)/sg

NoteImage2: notes (bar)/nb
NoteImage2H: notes (bar)/nnb
NoteImage2L: notes (bar)/sb

NoteImage3: notes (bar)/ng
NoteImage3H: notes (bar)/nng
NoteImage3L: notes (bar)/sg

NoteImage4: notes (bar)/nb
NoteImage4H: notes (bar)/nnb
NoteImage4L: notes (bar)/sb

NoteImage0T: notes (bar)/tb
NoteImage1T: notes (bar)/tg
NoteImage2T: notes (bar)/tb
NoteImage3T: notes (bar)/tg
NoteImage4T: notes (bar)/tb

StageRight: stage/rs
StageLeft: stage/ss2
StageBottom: stage/e
StageLight: stage/e
StageHint: stage/e
Hit0: hitbursts/miss
Hit50: hitbursts/bad
Hit100: hitbursts/good
Hit200: hitbursts/great
Hit300: hitbursts/excellent
Hit300g: hitbursts/extraordinary
LightingN: null
LightingL: null

[Mania]
Keys: 6
ColumnStart: 300
HitPosition: 432
SpecialStyle: 0
UpsideDown: 0
JudgementLine: 0
ScorePosition: 370
ComboPosition: 330
LightFramePerSecond: 48
ColumnWidth: 65,65,65,65,65,65
BarlineHeight: 0
ColumnLineWidth: 0,0,0,0,0,0,0
NoteBodyStyle: 2

Colour1: 0,0,0,255
Colour2: 0,0,0,255
Colour3: 0,0,0,255
Colour4: 0,0,0,255
ColourHold: 255,255,255,255

KeyImage0: notes (bar)/k
KeyImage0D: notes (bar)/kd

KeyImage1: notes (bar)/k
KeyImage1D: notes (bar)/kd

KeyImage2: notes (bar)/k
KeyImage2D: notes (bar)/kd

KeyImage3: notes (bar)/k
KeyImage3D: notes (bar)/kd

KeyImage4: notes (bar)/k
KeyImage4D: notes (bar)/kd

KeyImage5: notes (bar)/k
KeyImage5D: notes (bar)/kd

NoteImage0: notes (bar)/ng
NoteImage0H: notes (bar)/nng
NoteImage0L: notes (bar)/sg

NoteImage1: notes (bar)/nb
NoteImage1H: notes (bar)/nnb
NoteImage1L: notes (bar)/sb

NoteImage2: notes (bar)/ng
NoteImage2H: notes (bar)/nng
NoteImage2L: notes (bar)/sg

NoteImage3: notes (bar)/ng
NoteImage3H: notes (bar)/nng
NoteImage3L: notes (bar)/sg

NoteImage4: notes (bar)/nb
NoteImage4H: notes (bar)/nnb
NoteImage4L: notes (bar)/sb

NoteImage5: notes (bar)/ng
NoteImage5H: notes (bar)/nng
NoteImage5L: notes (bar)/sg

NoteImage0T: notes (bar)/tg
NoteImage1T: notes (bar)/tb
NoteImage2T: notes (bar)/tg
NoteImage3T: notes (bar)/tg
NoteImage4T: notes (bar)/tb
NoteImage5T: notes (bar)/tg

StageRight: stage/rs
StageLeft: stage/ss2
StageBottom: stage/e
StageLight: stage/e
StageHint: stage/e
Hit0: hitbursts/miss
Hit50: hitbursts/bad
Hit100: hitbursts/good
Hit200: hitbursts/great
Hit300: hitbursts/excellent
Hit300g: hitbursts/extraordinary
LightingN: null
LightingL: null

[Mania]
Keys: 7
ColumnStart: 300
HitPosition: 432
SpecialStyle: 0
UpsideDown: 0
JudgementLine: 0
ScorePosition: 370
ComboPosition: 330
LightFramePerSecond: 48
ColumnWidth: 65,65,65,65,65,65,65
BarlineHeight: 0
ColumnLineWidth: 0,0,0,0,0,0,0,0
NoteBodyStyle: 2

Colour1: 0,0,0,255
Colour2: 0,0,0,255
Colour3: 0,0,0,255
Colour4: 0,0,0,255
ColourHold: 255,255,255,255

KeyImage0: notes (bar)/k
KeyImage0D: notes (bar)/kd

KeyImage1: notes (bar)/k
KeyImage1D: notes (bar)/kd

KeyImage2: notes (bar)/k
KeyImage2D: notes (bar)/kd

KeyImage3: notes (bar)/k
KeyImage3D: notes (bar)/kd

KeyImage4: notes (bar)/k
KeyImage4D: notes (bar)/kd

KeyImage5: notes (bar)/k
KeyImage5D: notes (bar)/kd

KeyImage6: notes (bar)/k
KeyImage6D: notes (bar)/kd

NoteImage0: notes (bar)/nb
NoteImage0H: notes (bar)/nnb
NoteImage0L: notes (bar)/sb

NoteImage1: notes (bar)/ng
NoteImage1H: notes (bar)/nng
NoteImage1L: notes (bar)/sg

NoteImage2: notes (bar)/nb
NoteImage2H: notes (bar)/nnb
NoteImage2L: notes (bar)/sb

NoteImage3: notes (bar)/ng
NoteImage3H: notes (bar)/nng
NoteImage3L: notes (bar)/sg

NoteImage4: notes (bar)/nb
NoteImage4H: notes (bar)/nnb
NoteImage4L: notes (bar)/sb

NoteImage5: notes (bar)/ng
NoteImage5H: notes (bar)/nng
NoteImage5L: notes (bar)/sg

NoteImage6: notes (bar)/nb
NoteImage6H: notes (bar)/nnb
NoteImage6L: notes (bar)/sb

NoteImage0T: notes (bar)/tb
NoteImage1T: notes (bar)/tg
NoteImage2T: notes (bar)/tb
NoteImage3T: notes (bar)/tg
NoteImage4T: notes (bar)/tb
NoteImage5T: notes (bar)/tg
NoteImage5T: notes (bar)/tb

StageRight: stage/rs
StageLeft: stage/ss2
StageBottom: stage/e
StageLight: stage/e
StageHint: stage/e
Hit0: hitbursts/miss
Hit50: hitbursts/bad
Hit100: hitbursts/good
Hit200: hitbursts/great
Hit300: hitbursts/excellent
Hit300g: hitbursts/extraordinary
LightingN: null
LightingL: null
[Mania]
Keys: 9
UpsideDown: 0
[Mania]
Keys: 8
SpecialStyle: None
UpsideDown: 0
JudgementLine: 1

[Mania]
Keys: 8
ColumnStart: 170
HitPosition: 432
SpecialStyle: 0
UpsideDown: 0
JudgementLine: 0
ScorePosition: 370
ComboPosition: 330
LightFramePerSecond: 48
ColumnWidth: 65,65,65,65,65,65,65,65
BarlineHeight: 0
ColumnLineWidth: 0,0,0,0,0,0,0,0,0
NoteBodyStyle: 2

Colour1: 0,0,0,255
Colour2: 0,0,0,255
Colour3: 0,0,0,255
Colour4: 0,0,0,255
ColourHold: 255,255,255,255

KeyImage0: notes (bar)/k
KeyImage0D: notes (bar)/kd

KeyImage1: notes (bar)/k
KeyImage1D: notes (bar)/kd

KeyImage2: notes (bar)/k
KeyImage2D: notes (bar)/kd

KeyImage3: notes (bar)/k
KeyImage3D: notes (bar)/kd

KeyImage4: notes (bar)/k
KeyImage4D: notes (bar)/kd

KeyImage5: notes (bar)/k
KeyImage5D: notes (bar)/kd

KeyImage6: notes (bar)/k
KeyImage6D: notes (bar)/kd

KeyImage7: notes (bar)/k
KeyImage7D: notes (bar)/kd

NoteImage0: notes (bar)/ng
NoteImage0H: notes (bar)/nng
NoteImage0L: notes (bar)/sg

NoteImage1: notes (bar)/nb
NoteImage1H: notes (bar)/nnb
NoteImage1L: notes (bar)/sb

NoteImage2: notes (bar)/ng
NoteImage2H: notes (bar)/nng
NoteImage2L: notes (bar)/sg

NoteImage3: notes (bar)/nb
NoteImage3H: notes (bar)/nnb
NoteImage3L: notes (bar)/sb

NoteImage4: notes (bar)/nb
NoteImage4H: notes (bar)/nnb
NoteImage4L: notes (bar)/sb

NoteImage5: notes (bar)/ng
NoteImage5H: notes (bar)/nng
NoteImage5L: notes (bar)/sg

NoteImage6: notes (bar)/nb
NoteImage6H: notes (bar)/nnb
NoteImage6L: notes (bar)/sb

NoteImage7: notes (bar)/ng
NoteImage7H: notes (bar)/nng
NoteImage7L: notes (bar)/sg

NoteImage0T: notes (bar)/tg
NoteImage1T: notes (bar)/tb
NoteImage2T: notes (bar)/tg
NoteImage2T: notes (bar)/tb
NoteImage3T: notes (bar)/tb
NoteImage4T: notes (bar)/tg
NoteImage5T: notes (bar)/tb
NoteImage4T: notes (bar)/tg

StageRight: stage/rs
StageLeft: stage/ss2
StageBottom: stage/e
StageLight: stage/e
StageHint: stage/e
Hit0: hitbursts/miss
Hit50: hitbursts/bad
Hit100: hitbursts/good
Hit200: hitbursts/great
Hit300: hitbursts/excellent
Hit300g: hitbursts/extraordinary
LightingN: null
LightingL: null

[Mania]
Keys: 9
ColumnStart: 150
HitPosition: 432
SpecialStyle: 0
UpsideDown: 0
JudgementLine: 0
ScorePosition: 370
ComboPosition: 330
LightFramePerSecond: 48
ColumnWidth: 65,65,65,65,65,65,65,65,65
BarlineHeight: 0
ColumnLineWidth: 0,0,0,0,0,0,0,0,0,0
NoteBodyStyle: 2

Colour1: 0,0,0,255
Colour2: 0,0,0,255
Colour3: 0,0,0,255
Colour4: 0,0,0,255
ColourHold: 255,255,255,255

KeyImage0: notes (bar)/k
KeyImage0D: notes (bar)/kd

KeyImage1: notes (bar)/k
KeyImage1D: notes (bar)/kd

KeyImage2: notes (bar)/k
KeyImage2D: notes (bar)/kd

KeyImage3: notes (bar)/k
KeyImage3D: notes (bar)/kd

KeyImage4: notes (bar)/k
KeyImage4D: notes (bar)/kd

KeyImage5: notes (bar)/k
KeyImage5D: notes (bar)/kd

KeyImage6: notes (bar)/k
KeyImage6D: notes (bar)/kd

KeyImage7: notes (bar)/k
KeyImage7D: notes (bar)/kd

KeyImage8: notes (bar)/k
KeyImage8D: notes (bar)/kd

NoteImage0: notes (bar)/ng
NoteImage0H: notes (bar)/nng
NoteImage0L: notes (bar)/sg

NoteImage1: notes (bar)/nb
NoteImage1H: notes (bar)/nnb
NoteImage1L: notes (bar)/sb

NoteImage2: notes (bar)/ng
NoteImage2H: notes (bar)/nng
NoteImage2L: notes (bar)/sg

NoteImage3: notes (bar)/nb
NoteImage3H: notes (bar)/nnb
NoteImage3L: notes (bar)/sb

NoteImage4: notes (bar)/ng
NoteImage4H: notes (bar)/nng
NoteImage4L: notes (bar)/sg

NoteImage5: notes (bar)/nb
NoteImage5H: notes (bar)/nnb
NoteImage5L: notes (bar)/sb

NoteImage6: notes (bar)/ng
NoteImage6H: notes (bar)/nng
NoteImage6L: notes (bar)/sg

NoteImage7: notes (bar)/nb
NoteImage7H: notes (bar)/nnb
NoteImage7L: notes (bar)/sb

NoteImage8: notes (bar)/ng
NoteImage8H: notes (bar)/nng
NoteImage8L: notes (bar)/sg

NoteImage0T: notes (bar)/tg
NoteImage1T: notes (bar)/tb
NoteImage2T: notes (bar)/tg
NoteImage3T: notes (bar)/tb
NoteImage4T: notes (bar)/tg
NoteImage5T: notes (bar)/tb
NoteImage6T: notes (bar)/tg
NoteImage7T: notes (bar)/tb
NoteImage8T: notes (bar)/tg

StageRight: stage/rs
StageLeft: stage/ss2
StageBottom: stage/e
StageLight: stage/e
StageHint: stage/e
Hit0: hitbursts/miss
Hit50: hitbursts/bad
Hit100: hitbursts/good
Hit200: hitbursts/great
Hit300: hitbursts/excellent
Hit300g: hitbursts/extraordinary
LightingN: null
LightingL: null

)ini";
    std::string arrow = R"ini(//this file is for arrows in mania
[General]
Name: AllModeV3
Author: cottonplant
Version: 2.7

SliderBallFlip: 0

CursorRotate: 1
CursorExpand: 1
CursorCentre: 1

SliderBallFrames: 1
HitCircleOverlayAboveNumber: 1
LayeredHitSounds: 1

SpinnerFadePlayfield: 1
//^ depends on "version", that is usage of new skin behaviour
SpinnerNoBlink: 0

AnimationFramerate: -1

AllowSliderBallTint: 0
CursorTrailRotate: 0

CustomComboBurstSounds: 30,60,90,120,240,480
//^not default, but couldnt find it: (
ComboBurstRandom: 0

SliderStyle: 2
//^
// 1 - peppysliders
// 2 - mmsliders
// 3 - toonsliders
// 4 - legacyOpenGL-only sliders

[Colours]
//Combo1: 255,0,255
//Combo2: 0,255,255
//Combo3: 255,255,0
//Combo4: 0,255,0
//Combo1: 255,255,255

MenuGlow: 60,60,60
//^ only for custom backgrounds

SliderBorder: {Light}
SliderTrackOverride: 0,0,0

SpinnerApproachCircle: {Light}

SongSelectActiveText: {light}
SongSelectInactiveText: 255,255,255

StarBreakAdditive: 255,0,0

[Fonts]
HitCirclePrefix: default
HitCircleOverlap: -2

ScorePrefix: score
ScoreOverlap: 0

[Mania]
Keys: 4
ColumnStart: 300
HitPosition: 432
SpecialStyle: 0
UpsideDown: 0
JudgementLine: 0
ScorePosition: 370
ComboPosition: 330
LightFramePerSecond: 24
ColumnWidth: 65,65,65,65
BarlineHeight: 0
ColumnLineWidth: 0,0,0,0,0
NoteBodyStyle: 2

Colour1: 0,0,0,255
Colour2: 0,0,0,255
Colour3: 0,0,0,255
Colour4: 0,0,0,255
ColourHold: 255,255,255,255

KeyImage0: notes (arrow)/kl
KeyImage0D: notes (arrow)/kDl

KeyImage1: notes (arrow)/kl
KeyImage1D: notes (arrow)/kDl

KeyImage2: notes (arrow)/kl
KeyImage2D: notes (arrow)/kDl

KeyImage3: notes (arrow)/kl
KeyImage3D: notes (arrow)/kDl

NoteImage0: notes (arrow)/nl
NoteImage0H: notes (arrow)/nnl
NoteImage0L: notes (arrow)/sb

NoteImage1: notes (arrow)/nu
NoteImage1H: notes (arrow)/nnu
NoteImage1L: notes (arrow)/sg

NoteImage2: notes (arrow)/nd
NoteImage2H: notes (arrow)/nnd
NoteImage2L: notes (arrow)/sg

NoteImage3: notes (arrow)/nr
NoteImage3H: notes (arrow)/nnr
NoteImage3L: notes (arrow)/sb

NoteImage0T: notes (arrow)/tb
NoteImage1T: notes (arrow)/tg
NoteImage2T: notes (arrow)/tg
NoteImage3T: notes (arrow)/tb

StageRight: stage/rs
StageLeft: stage/ss2
StageBottom: stage/e
StageLight: stage/e
StageHint: stage/e
Hit0: stage/e
Hit50: stage/e
Hit100: stage/e
Hit200: stage/e
Hit300: stage/e
Hit300g: stage/e
LightingN: stage/e
LightingL: stage/e

[Mania]
Keys: 5
ColumnStart: 267
HitPosition: 432
SpecialStyle: 0
UpsideDown: 0
JudgementLine: 0
ScorePosition: 370
ComboPosition: 330
LightFramePerSecond: 24
ColumnWidth: 65,65,65,65,65
BarlineHeight: 0
ColumnLineWidth: 0,0,0,0,0,0
NoteBodyStyle: 2

Colour1: 0,0,0,255
Colour2: 0,0,0,255
Colour3: 0,0,0,255
Colour4: 0,0,0,255
ColourHold: 255,255,255,255

KeyImage0: notes (arrow)/kl
KeyImage0D: notes (arrow)/kDl

KeyImage1: notes (arrow)/kl
KeyImage1D: notes (arrow)/kDl

KeyImage2: notes (arrow)/kl
KeyImage2D: notes (arrow)/kDl

KeyImage3: notes (arrow)/kl
KeyImage3D: notes (arrow)/kDl

KeyImage4: notes (arrow)/kl
KeyImage4D: notes (arrow)/kDl

NoteImage0: notes (arrow)/nl
NoteImage0H: notes (arrow)/nnl
NoteImage0L: notes (arrow)/sb

NoteImage1: notes (arrow)/nul
NoteImage1H: notes (arrow)/nnul
NoteImage1L: notes (arrow)/sb

NoteImage2: notes (arrow)/nu
NoteImage2H: notes (arrow)/nnu
NoteImage2L: notes (arrow)/sg

NoteImage3: notes (arrow)/nur
NoteImage3H: notes (arrow)/nnur
NoteImage3L: notes (arrow)/sg

NoteImage4: notes (arrow)/nr
NoteImage4H: notes (arrow)/nnr
NoteImage4L: notes (arrow)/sb

NoteImage0T: notes (arrow)/tb
NoteImage1T: notes (arrow)/tb
NoteImage2T: notes (arrow)/tg
NoteImage3T: notes (arrow)/tg
NoteImage4T: notes (arrow)/tb

StageRight: stage/rs
StageLeft: stage/ss2
StageBottom: stage/e
StageLight: stage/e
StageHint: stage/e
Hit0: stage/e
Hit50: stage/e
Hit100: stage/e
Hit200: stage/e
Hit300: stage/e
Hit300g: stage/e
LightingN: stage/e
LightingL: stage/e

[Mania]
Keys: 6
ColumnStart: 235
HitPosition: 432
SpecialStyle: 0
UpsideDown: 0
JudgementLine: 0
ScorePosition: 370
ComboPosition: 330
LightFramePerSecond: 24
ColumnWidth: 65,65,65,65,65,65
BarlineHeight: 0
ColumnLineWidth: 0,0,0,0,0,0,0
NoteBodyStyle: 2

Colour1: 0,0,0,255
Colour2: 0,0,0,255
Colour3: 0,0,0,255
Colour4: 0,0,0,255
ColourHold: 255,255,255,255

KeyImage0: notes (arrow)/kl
KeyImage0D: notes (arrow)/kDl

KeyImage1: notes (arrow)/kl
KeyImage1D: notes (arrow)/kDl

KeyImage2: notes (arrow)/kl
KeyImage2D: notes (arrow)/kDl

KeyImage3: notes (arrow)/kl
KeyImage3D: notes (arrow)/kDl

KeyImage4: notes (arrow)/kl
KeyImage4D: notes (arrow)/kDl

KeyImage5: notes (arrow)/kl
KeyImage5D: notes (arrow)/kDl

NoteImage0: notes (arrow)/nl
NoteImage0H: notes (arrow)/nnl
NoteImage0L: notes (arrow)/sb

NoteImage1: notes (arrow)/nu
NoteImage1H: notes (arrow)/nnu
NoteImage1L: notes (arrow)/sg

NoteImage2: notes (arrow)/nr
NoteImage2H: notes (arrow)/nnr
NoteImage2L: notes (arrow)/sb

NoteImage3: notes (arrow)/nl
NoteImage3H: notes (arrow)/nnl
NoteImage3L: notes (arrow)/sb

NoteImage4: notes (arrow)/nd
NoteImage4H: notes (arrow)/nnd
NoteImage4L: notes (arrow)/sg

NoteImage5: notes (arrow)/nr
NoteImage5H: notes (arrow)/nnr
NoteImage5L: notes (arrow)/sb

NoteImage0T: notes (arrow)/tb
NoteImage1T: notes (arrow)/tg
NoteImage2T: notes (arrow)/tb
NoteImage3T: notes (arrow)/tb
NoteImage4T: notes (arrow)/tg
NoteImage5T: notes (arrow)/tb

StageRight: stage/rs
StageLeft: stage/ss2
StageBottom: stage/e
StageLight: stage/e
StageHint: stage/e
Hit0: stage/e
Hit50: stage/e
Hit100: stage/e
Hit200: stage/e
Hit300: stage/e
Hit300g: stage/e
LightingN: stage/e
LightingL: stage/e

[Mania]
Keys: 7
ColumnStart: 213
HitPosition: 432
SpecialStyle: 0
UpsideDown: 0
JudgementLine: 0
ScorePosition: 370
ComboPosition: 330
LightFramePerSecond: 24
ColumnWidth: 65,65,65,65,65,65,65
BarlineHeight: 0
ColumnLineWidth: 0,0,0,0,0,0,0,0
NoteBodyStyle: 2

Colour1: 0,0,0,255
Colour2: 0,0,0,255
Colour3: 0,0,0,255
Colour4: 0,0,0,255
ColourHold: 255,255,255,255

KeyImage0: notes (arrow)/kl
KeyImage0D: notes (arrow)/kDl

KeyImage1: notes (arrow)/kl
KeyImage1D: notes (arrow)/kDl

KeyImage2: notes (arrow)/kl
KeyImage2D: notes (arrow)/kDl

KeyImage3: notes (arrow)/kl
KeyImage3D: notes (arrow)/kDl

KeyImage4: notes (arrow)/kl
KeyImage4D: notes (arrow)/kDl

KeyImage5: notes (arrow)/kl
KeyImage5D: notes (arrow)/kDl

KeyImage6: notes (arrow)/kl
KeyImage6D: notes (arrow)/kDl

NoteImage0: notes (arrow)/nl
NoteImage0H: notes (arrow)/nnl
NoteImage0L: notes (arrow)/sb

NoteImage1: notes (arrow)/nul
NoteImage1H: notes (arrow)/nnul
NoteImage1L: notes (arrow)/sb

NoteImage2: notes (arrow)/nu
NoteImage2H: notes (arrow)/nnu
NoteImage2L: notes (arrow)/sg

NoteImage3: notes (arrow)/nur
NoteImage3H: notes (arrow)/nnur
NoteImage3L: notes (arrow)/sg

NoteImage4: notes (arrow)/nr
NoteImage4H: notes (arrow)/nnr
NoteImage4L: notes (arrow)/sb

NoteImage5: notes (arrow)/nbr
NoteImage5H: notes (arrow)/nnbr
NoteImage5L: notes (arrow)/sb

NoteImage6: notes (arrow)/nd
NoteImage6H: notes (arrow)/nnd
NoteImage6L: notes (arrow)/sg

NoteImage0T: notes (arrow)/tb
NoteImage1T: notes (arrow)/tb
NoteImage2T: notes (arrow)/tg
NoteImage3T: notes (arrow)/tg
NoteImage4T: notes (arrow)/tb
NoteImage5T: notes (arrow)/tb
NoteImage6T: notes (arrow)/tg

StageRight: stage/rs
StageLeft: stage/ss2
StageBottom: stage/e
StageLight: stage/e
StageHint: stage/e
Hit0: stage/e
Hit50: stage/e
Hit100: stage/e
Hit200: stage/e
Hit300: stage/e
Hit300g: stage/e
LightingN: stage/e
LightingL: stage/e

[Mania]
Keys: 8
ColumnStart: 180
HitPosition: 432
SpecialStyle: 0
UpsideDown: 0
JudgementLine: 0
ScorePosition: 370
ComboPosition: 330
LightFramePerSecond: 24
ColumnWidth: 65,65,65,65,65,65,65,65
BarlineHeight: 0
ColumnLineWidth: 0,0,0,0,0,0,0,0,0
NoteBodyStyle: 2

Colour1: 0,0,0,255
Colour2: 0,0,0,255
Colour3: 0,0,0,255
Colour4: 0,0,0,255
ColourHold: 255,255,255,255

KeyImage0: notes (arrow)/kl
KeyImage0D: notes (arrow)/kDl

KeyImage1: notes (arrow)/kl
KeyImage1D: notes (arrow)/kDl

KeyImage2: notes (arrow)/kl
KeyImage2D: notes (arrow)/kDl

KeyImage3: notes (arrow)/kl
KeyImage3D: notes (arrow)/kDl

KeyImage4: notes (arrow)/kl
KeyImage4D: notes (arrow)/kDl

KeyImage5: notes (arrow)/kl
KeyImage5D: notes (arrow)/kDl

KeyImage6: notes (arrow)/kl
KeyImage6D: notes (arrow)/kDl

KeyImage7: notes (arrow)/kl
KeyImage7D: notes (arrow)/kDl

NoteImage0: notes (arrow)/nl
NoteImage0H: notes (arrow)/nnl
NoteImage0L: notes (arrow)/sb

NoteImage1: notes (arrow)/nul
NoteImage1H: notes (arrow)/nnul
NoteImage1L: notes (arrow)/sb

NoteImage2: notes (arrow)/nu
NoteImage2H: notes (arrow)/nnu
NoteImage2L: notes (arrow)/sg

NoteImage3: notes (arrow)/nur
NoteImage3H: notes (arrow)/nnur
NoteImage3L: notes (arrow)/sg

NoteImage4: notes (arrow)/nr
NoteImage4H: notes (arrow)/nnr
NoteImage4L: notes (arrow)/sb

NoteImage5: notes (arrow)/nbr
NoteImage5H: notes (arrow)/nnbr
NoteImage5L: notes (arrow)/sb

NoteImage6: notes (arrow)/nd
NoteImage6H: notes (arrow)/nnd
NoteImage6L: notes (arrow)/sg

NoteImage7: notes (arrow)/nbl
NoteImage7H: notes (arrow)/nnbl
NoteImage7L: notes (arrow)/sg

NoteImage0T: notes (arrow)/tb
NoteImage1T: notes (arrow)/tb
NoteImage2T: notes (arrow)/tg
NoteImage3T: notes (arrow)/tg
NoteImage4T: notes (arrow)/tb
NoteImage5T: notes (arrow)/tb
NoteImage6T: notes (arrow)/tg
NoteImage7T: notes (arrow)/tg

StageRight: stage/rs
StageLeft: stage/ss2
StageBottom: stage/e
StageLight: stage/e
StageHint: stage/e
Hit0: stage/e
Hit50: stage/e
Hit100: stage/e
Hit200: stage/e
Hit300: stage/e
Hit300g: stage/e
LightingN: stage/e
LightingL: stage/e

)ini";
}

struct color
{
    int r;
    int g;
    int b;
    
    std::string toString()
    {
        return std::__cxx11::to_string(r) + ", " + std::__cxx11::to_string(g) + ", " + std::__cxx11::to_string(b); 
    }
};


namespace Color
{
    inline char Dark[8] = "#8d41bb";
    inline char Light[8] = "#8d72b9";
    inline char Heighlight[8] = "#fbe1ec";
    
    color HexToColor(const char* hex)
    {
        int i = 0;
        color c;
        if(hex[0] == '#') ++i;
        char byte[3] = {hex[i], hex[i + 1], '\0'};
        int out = std::__cxx11::stoi(byte, 0, 16);
        c.r = out;
        i += 2;
        
        char byte1[3] = {hex[i], hex[i + 1], '\0'};
        out = std::__cxx11::stoi(byte1, 0, 16);
        c.g = out;
        i += 2;
        
        char byte2[3] = {hex[i], hex[i + 1], '\0'};
        out = std::__cxx11::stoi(byte2, 0, 16);
        c.b = out;
        
        return c;
    }

}


namespace Files
{
    void ReplaceFirst(std::string& s, std::string const& toReplace, std::string const& replaceWith)
    {
        std::size_t pos = s.find(toReplace);
        if (pos == std::string::npos) return;
        s.replace(pos, toReplace.length(), replaceWith);
    }
    
    void findAndReplaceAll( std::string& data,  
                        const std::string& match,  
                        const std::string& replace) 
    { 
       // Get the first occurrence 
       size_t pos = data.find(match); 
     
       // Repeat till end is reached 
       while( pos != std::string::npos) 
        { 
            data.replace(pos, match.size(), replace); 
          
           // Get the next occurrence from the current position 
            pos = data.find(match, pos+replace.size()); 
        } 
    } 
    
    void ReplaceColorsInFile(std::string filedir, std::string colD, std::string colL, std::string colH)
    {
        int countDark = 0;
        int countLight = 0;
        int countHeighlight = 0;
        
        std::string line;
        std::string fullfile;
        

        std::ifstream MyReadFile(filedir);
        if(MyReadFile.is_open())
        {
            
            while(MyReadFile.good())
            {
                fullfile += MyReadFile.get();
            }
            
            findAndReplaceAll(fullfile, Color::Dark, colD);
            findAndReplaceAll(fullfile, Color::Light, colL);
            findAndReplaceAll(fullfile, Color::Heighlight, colH);

            MyReadFile.close(); 
            if(fullfile.length() > 1)
            {
                fullfile.pop_back();
                std::ofstream MyFile(filedir);
                
                if(MyFile.is_open())
                {
                    MyFile << fullfile;
                }
                else
                {
                    std::cout << "Could not save file: " << filedir << std::endl;
                }
            }
        }
        else
        {
            std::cout << "Could not open file: " << filedir << std::endl;
        }
    }
    
}


int main(int const args, char const*const* argv)
{
    color dark = Color::HexToColor(Color::Dark);
    color light = Color::HexToColor(Color::Light);
    color heighlight = Color::HexToColor(Color::Heighlight);
    
    std::string newDark;
    std::string newLight;
    std::string newHeighlight;
    while(1)
    {
        std::cout << "Type the hex that you want for the dark color.(make sure to back up files in case of a typo)\ncurrent: " << Color::Dark << "\n" << std::endl;
        std::cin >> newDark;
        
        if(std::cin.fail())
        {
            std::cin.clear();
            std::cout << "\nInvalid input, please try again.\n" << std::endl;
        }
        else break;
    }
    
    while(1)
    {
        std::cout << "Type the hex that you want for the light color.\ncurrent: " << Color::Light << "\n" << std::endl;
        std::cin >> newLight;
        
        if(std::cin.fail())
        {
            std::cin.clear();
            std::cout << "\nInvalid input, please try again.\n" << std::endl;
        }
        else break;
    }
    
    while(1)
    {
        std::cout << "Type the hex that you want for the heighlight color.\ncurrent: " << Color::Heighlight << "\n" << std::endl;
        std::cin >> newHeighlight;
        
        if(std::cin.fail())
        {
            std::cin.clear();
            std::cout << "\nInvalid input, please try again.\n" << std::endl;
        }
        else break;
    }
    
    
    for (const auto& dirEntry : std::filesystem::__cxx11::recursive_directory_iterator("./svg/"))
    {
        std::string path = dirEntry.path().string();
        int len = path.length();
        if(path[len - 1] == 'g' && path[len - 2] == 'v' && path[len - 3] == 's' && path[len - 4] == '.')
        {
            std::cout << dirEntry << std::endl;
            Files::ReplaceColorsInFile(path, newDark, newLight, newHeighlight);
        }
    }
    
    
    int type = 0;
    while(1)
    {
        std::cout << "Type the index of the mania skin you prefer:\n 1. circles\n 2. bars\n 3. arrows\n" << std::endl;
        std::cin >> type;
        
        if(type <= 0 || type > 3 || std::cin.fail())
        {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::cout << "\nInvalid input, please try again.\n" << std::endl;
        }
        else break;
    }
    
    Files::ReplaceFirst(Files::circle, "{Light}", light.toString());
    Files::ReplaceFirst(Files::circle, "{Light}", light.toString());
    Files::ReplaceFirst(Files::circle, "{Light}", light.toString());
    
    Files::ReplaceFirst(Files::bar, "{Light}", light.toString());
    Files::ReplaceFirst(Files::bar, "{Light}", light.toString());
    Files::ReplaceFirst(Files::bar, "{Light}", light.toString());
    
    Files::ReplaceFirst(Files::arrow, "{Light}", light.toString());
    Files::ReplaceFirst(Files::arrow, "{Light}", light.toString());
    Files::ReplaceFirst(Files::arrow, "{Light}", light.toString());
    
    std::string cirname = "skin_circle.ini";
    std::string barname = "skin_bar.ini";
    std::string arrname = "skin_arrow.ini";
    
    if(type == 1) cirname = "skin.ini";
    if(type == 2) barname = "skin.ini";
    if(type == 3) arrname = "skin.ini";
    
    
    std::ofstream MyFile("./" + cirname);
    MyFile << Files::circle;
    MyFile.close();
    
    std::ofstream MyFile1("./" + barname);
    MyFile1 << Files::bar;
    MyFile1.close();
    
    std::ofstream MyFile2("./" + arrname);
    MyFile2 << Files::arrow;
    MyFile2.close();
    
    return 0;
}
