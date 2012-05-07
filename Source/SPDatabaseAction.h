//
//  $Id$
//
//  SPDBActionCommons.h
//  sequel-pro
//
//  Created by David Rekowski on Apr 29, 2010
//
//  This program is free software; you can redistribute it and/or modify
//  it under the terms of the GNU General Public License as published by
//  the Free Software Foundation; either version 2 of the License, or
//  (at your option) any later version.
//
//  This program is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
//  GNU General Public License for more details.
//
//  You should have received a copy of the GNU General Public License
//  along with this program; if not, write to the Free Software
//  Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
//
//  More info at <http://code.google.com/p/sequel-pro/>

#import <SPMySQL/SPMySQL.h>

@class SPTablesList;

@interface SPDatabaseAction : NSObject 
{
	NSWindow *messageWindow;
	SPTablesList *tablesList;
	SPMySQLConnection *connection;
}

/**
 * @property connection References the SPMySQL.framework MySQL connection; it has to be set.
 */
@property (readwrite, assign) SPMySQLConnection *connection;

/**
 * @property messageWindow The NSWindow instance to send message sheets to.
 */
@property (readwrite, assign) NSWindow *messageWindow;

/**
 * @property tablesList
 */
@property (readwrite, assign) SPTablesList *tablesList;

@end