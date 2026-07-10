/*
    SPDX-FileCopyrightText: 2014-2017 Milian Wolff <mail@milianw.de>

    SPDX-License-Identifier: LGPL-2.1-or-later
*/

#ifndef HEAPTRACK_CONFIG_H
#define HEAPTRACK_CONFIG_H

#define HEAPTRACK_VERSION_STRING "1.6.80"
#define HEAPTRACK_VERSION_MAJOR 1
#define HEAPTRACK_VERSION_MINOR 6
#define HEAPTRACK_VERSION_PATCH 80
#define HEAPTRACK_VERSION ((HEAPTRACK_VERSION_MAJOR<<16)|(HEAPTRACK_VERSION_MINOR<<8)|(HEAPTRACK_VERSION_PATCH))

#define HEAPTRACK_FILE_FORMAT_VERSION 3

#define HEAPTRACK_DEBUG_BUILD 0

// cfree() does not exist in glibc 2.26+.
// See: https://bugs.kde.org/show_bug.cgi?id=383889
#define HAVE_CFREE 0
#define HAVE_VALLOC 1

#endif // HEAPTRACK_CONFIG_H
