/*
 * Copyright (C) 2009 Nicolas Bonnefon and other contributors
 *
 * This file is part of LogCrawler.
 *
 * LogCrawler is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * LogCrawler is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with LogCrawler.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef LOGMAINVIEW_H
#define LOGMAINVIEW_H

#include "abstractlogview.h"
#include "logdata.h"

// Class implementing the main (top) view widget.
class LogMainView : public AbstractLogView
{
  public:
    LogMainView( const LogData* newLogData, QWidget* parent = 0 );

    // Configure the view to use the passed filtered list
    // (used for couloured bullets)
    // Should be NULL or the empty LFD if no filtering is used
    void useNewFiltering( LogFilteredData* filteredData );

  protected:
    // Implements the virtual function
    bool isLineMatching( int lineNumber );

  private:
    LogFilteredData* filteredData_;
};

#endif
