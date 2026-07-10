// Copyright (C) 2018 The Qt Company Ltd.
// SPDX-License-Identifier: LicenseRef-Qt-Commercial OR GPL-3.0-only WITH Qt-GPL-exception-1.0

#pragma once

#define IDE_VERSION_MAJOR   
#define IDE_VERSION_MINOR   
#define IDE_VERSION_RELEASE 

/* #undef IDE_REVISION */

namespace Core {
namespace Constants {

const char IDE_VERSION_LONG[] = "";
const char IDE_AUTHOR[]       = "The Qt Company Ltd. and other contributors.";
const char IDE_COPYRIGHT[]    = "Copyright (C) The Qt Company Ltd. and other contributors.";

const char IDE_DISPLAY_NAME[] = "Qt Creator";
const char IDE_ID[]           = "qtcreator";
const char IDE_CASED_ID[]     = "QtCreator";

const char IDE_VERSION_DISPLAY[] = "21.0.0-beta1";
const char IDE_VERSION_COMPAT[] = "20.0.82";
const char IDE_REVISION_STR[]    = "";
const char IDE_REVISION_URL[] = "";

// changes the path where the settings are saved to
const char IDE_SETTINGSVARIANT_STR[] = "QtProject";

// added extension for project user settings
const char IDE_PROJECT_USER_FILE_EXTENSION[] = ".user";

} // Constants
} // Core
