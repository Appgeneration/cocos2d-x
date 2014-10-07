//// THIS CODE AND INFORMATION IS PROVIDED "AS IS" WITHOUT WARRANTY OF
//// ANY KIND, EITHER EXPRESSED OR IMPLIED, INCLUDING BUT NOT LIMITED TO
//// THE IMPLIED WARRANTIES OF MERCHANTABILITY AND/OR FITNESS FOR A
//// PARTICULAR PURPOSE.
////
//// Copyright (c) Microsoft Corporation. All rights reserved

// For licensing information relating to this distribution please see Third Party Notices file.

#pragma once

#include "Audio.h"

class AudioServiceLocator {
public:
	static Audio* getPrimaryAudio();
	static Audio* getSecondaryAudio();
	static void destroyPrimaryAudio();
	static void destroySecondaryAudio();
};