// Copyright (C) 2014 Sacha Refshauge

// This program is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, version 3.0.

// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License 3.0 for more details.

// A copy of the GPL 3.0 should have been included with the program.
// If not, see http://www.gnu.org/licenses/

// Official GIT repository and contact information can be found at
// http://github.com/xsacha/Sachesi

#include "apps.h"

#define SET_QML2(type, name, caps) \
    type Apps::name() const { \
        return _ ## name; \
    } \
    void Apps::caps(const type &var) { \
        if (var != _ ## name) { \
            _ ## name = var; \
            emit name ## Changed(); \
        } \
    }

Apps::Apps(QObject *parent)
    : QObject(parent)
    , _name(""), _url(""), _friendlyName(""), _packageId("")
    , _code(0), _size(0)
    , _isMarked(false), _isAvailable(true), _isInstalled(false)
    , _type("")
    , _installedVersion(""), _version(""), _versionId("")
    , _checksum("")
{ }

Apps::Apps(const Apps* app, QObject *parent)
    : QObject(parent)
    , _name(app->name()), _url(app->url()), _friendlyName(app->friendlyName()), _packageId(app->packageId())
    , _code(app->code()), _size(app->size())
    , _isMarked(app->isMarked()), _isAvailable(app->isAvailable()), _isInstalled(app->isInstalled())
    , _type(app->type())
    , _installedVersion(app->installedVersion()), _version(app->version()), _versionId(app->versionId())
    , _checksum(app->checksum())
{ }

SET_QML2(QString, name, setName)
SET_QML2(QString, url, setUrl)
SET_QML2(QString, friendlyName, setFriendlyName)
SET_QML2(QString, packageId, setPackageId)
SET_QML2(int, code, setCode)
SET_QML2(int, size, setSize)
SET_QML2(bool, isMarked, setIsMarked)
SET_QML2(bool, isAvailable, setIsAvailable)
SET_QML2(bool, isInstalled, setIsInstalled)
SET_QML2(QString, type, setType)
SET_QML2(QString, installedVersion, setInstalledVersion)
SET_QML2(QString, version, setVersion)
SET_QML2(QString, versionId, setVersionId)
SET_QML2(QString, checksum, setChecksum)
