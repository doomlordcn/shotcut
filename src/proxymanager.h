/*
 * Copyright (c) 2020 Meltytech, LLC
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef PROXYMANAGER_H
#define PROXYMANAGER_H

#include <QDir>
#include <QString>
#include <QPoint>

namespace Mlt {
    class Producer;
}

class ProxyManager
{
private:
    ProxyManager() {};

public:
    enum ScanMode {
        Automatic,
        Progressive,
        InterlacedTopFieldFirst,
        InterlacedBottomFieldFirst
    };

    static QDir dir();
    static QString resource(Mlt::Producer& producer);
    static void generateVideoProxy(Mlt::Producer& producer, bool fullRange, ScanMode scanMode = Automatic, const QPoint& aspectRatio = QPoint());
};

#endif // PROXYMANAGER_H
