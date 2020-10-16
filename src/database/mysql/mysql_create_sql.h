/*MT*
    
    MediaTomb - http://www.mediatomb.cc/
    
    mysql_create_sql.h - this file is part of MediaTomb.
    
    Copyright (C) 2005 Gena Batyan <bgeradz@mediatomb.cc>,
                       Sergey 'Jin' Bostandzhyan <jin@mediatomb.cc>
    
    Copyright (C) 2006-2010 Gena Batyan <bgeradz@mediatomb.cc>,
                            Sergey 'Jin' Bostandzhyan <jin@mediatomb.cc>,
                            Leonhard Wimmer <leo@mediatomb.cc>
    
    MediaTomb is free software; you can redistribute it and/or modify
    it under the terms of the GNU General Public License version 2
    as published by the Free Software Foundation.
    
    MediaTomb is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.
    
    You should have received a copy of the GNU General Public License
    version 2 along with MediaTomb; if not, write to the Free Software
    Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA 02110-1301, USA.
    
    $Id$
*/

/// \file mysql_create_sql.h

#ifdef HAVE_MYSQL

#ifndef __MYSQL_CREATE_SQL_H__
#define __MYSQL_CREATE_SQL_H__
#define MS_CREATE_SQL_INFLATED_SIZE 4216
#define MS_CREATE_SQL_DEFLATED_SIZE 1090

/* begin binary data: */
const unsigned char mysql_create_sql[] = /* 1090 */
    { 0x78, 0x9C, 0xC5, 0x57, 0x51, 0x6F, 0x9B, 0x48, 0x10, 0x7E, 0xCF, 0xAF, 0xD8, 0x7B, 0x02, 0x57, 0xDC, 0x05, 0xA2, 0x44, 0xEA, 0xA9, 0x8A, 0x14, 0x0E, 0x6F, 0x5B, 0xAB, 0x04, 0x52, 0xC0, 0x77, 0xEA, 0xBD, 0x2C, 0x6B, 0x58, 0xC7, 0x5C, 0x30, 0x58, 0xB0, 0x58, 0xF5, 0xBF, 0xBF, 0x59, 0x30, 0x06, 0xCC, 0xDA, 0xB5, 0xA5, 0x53, 0xEF, 0x25, 0xC1, 0xC3, 0xB7, 0xDF, 0x7E, 0xCC, 0xCC, 0xCE, 0xCE, 0xDC, 0xBE, 0xFB, 0xE5, 0x5E, 0x37, 0x74, 0x03, 0xF9, 0x38, 0x40, 0x4F, 0xAE, 0x3D, 0x25, 0xD6, 0x67, 0xD3, 0x33, 0xAD, 0x00, 0x7B, 0x04, 0x4C, 0xC4, 0xB2, 0x67, 0xD8, 0x09, 0x1E, 0x9F, 0x9E, 0x64, 0x66, 0xF4, 0xEE, 0xF6, 0xC3, 0xCD, 0xED, 0x0F, 0x18, 0x3C, 0xEC, 0xCF, 0xED, 0xC0, 0x1F, 0x51, 0xEC, 0xED, 0xA7, 0x38, 0x5C, 0xDB, 0x36, 0x83, 0x99, 0xEB, 0xC0, 0x93, 0xE3, 0x60, 0x4B, 0x3C, 0x0A, 0x0A, 0x89, 0x79, 0xCC, 0xE0, 0x98, 0xCF, 0xD8, 0x47, 0x15, 0x5F, 0xBE, 0xEF, 0xDE, 0xE9, 0xC6, 0x7D, 0xC7, 0x3E, 0x77, 0x66, 0x5F, 0xE7, 0x18, 0x84, 0x62, 0xEB, 0x8B, 0x50, 0x36, 0xF8, 0xAD, 0xA1, 0xE1, 0x6B, 0xFD, 0x04, 0xC9, 0x47, 0xD7, 0xC3, 0xB3, 0x4F, 0x0E, 0xF9, 0x82, 0xBF, 0x75, 0x4C, 0x63, 0xA3, 0x86, 0x24, 0x40, 0xFD, 0xC4, 0x67, 0xFB, 0x5F, 0x6D, 0xF2, 0xEC, 0x4E, 0x31, 0x30, 0xB5, 0x8F, 0x1A, 0x3A, 0x18, 0x15, 0xC7, 0x25, 0xE6, 0x3C, 0x70, 0xC9, 0x9F, 0xA6, 0x0D, 0xFA, 0xC0, 0x0B, 0x7F, 0x63, 0xCF, 0x55, 0x7A, 0x5C, 0xC6, 0x11, 0x97, 0xE3, 0x06, 0xD8, 0xDF, 0x93, 0xD5, 0xCF, 0x0D, 0x5B, 0x63, 0x6E, 0x44, 0x58, 0x1E, 0x36, 0x03, 0x8C, 0x02, 0xF3, 0x0F, 0x1B, 0xA3, 0x70, 0xCD, 0x49, 0x14, 0x97, 0x24, 0x5F, 0xFC, 0xC3, 0x22, 0x1E, 0x22, 0xF5, 0x06, 0xA1, 0x30, 0x89, 0x43, 0x94, 0x64, 0x5C, 0x35, 0x8C, 0x09, 0x82, 0x95, 0xC8, 0x99, 0xDB, 0x36, 0xA2, 0x15, 0xCF, 0x49, 0x92, 0x45, 0x05, 0x5B, 0xB3, 0x8C, 0x6B, 0x02, 0x57, 0xB0, 0x25, 0xE9, 0x63, 0x63, 0xB6, 0xA4, 0x55, 0xCA, 0x6B, 0x7C, 0x0D, 0xD8, 0xD0, 0x02, 0xB0, 0x44, 0xCA, 0xD7, 0x82, 0x15, 0x5D, 0xA9, 0xB1, 0x8D, 0x02, 0xC2, 0x77, 0x1B, 0x16, 0x22, 0x9E, 0x64, 0x3B, 0xB1, 0xE2, 0x7E, 0x82, 0xAA, 0xAC, 0x4C, 0x5E, 0x33, 0x16, 0x1F, 0x56, 0xD6, 0xE8, 0x6A, 0x93, 0x6D, 0x48, 0x94, 0xD2, 0xB2, 0x0C, 0xD1, 0x96, 0x16, 0xD1, 0x8A, 0x16, 0xEA, 0x7B, 0x5D, 0x22, 0x21, 0x8E, 0x08, 0x4F, 0x78, 0xCA, 0x3A, 0xD8, 0xDD, 0xC3, 0x83, 0x04, 0x97, 0xE6, 0x11, 0xE5, 0x49, 0x9E, 0x85, 0x68, 0x91, 0xE6, 0x8B, 0x81, 0x89, 0xAC, 0x68, 0xB9, 0xEA, 0xBE, 0xE0, 0x20, 0x68, 0xC4, 0xB1, 0x66, 0x9C, 0xC6, 0x94, 0xD3, 0x1E, 0x07, 0xAD, 0xBE, 0x1F, 0x59, 0x0A, 0x56, 0xE6, 0x55, 0x11, 0xB1, 0xB2, 0x67, 0xAB, 0x36, 0x00, 0x62, 0x97, 0xF9, 0x69, 0x9D, 0xAC, 0xD9, 0xDE, 0x4B, 0xED, 0x17, 0xDD, 0xCB, 0x3E, 0x7C, 0x99, 0xD2, 0xD7, 0x52, 0xA2, 0x7A, 0x4C, 0x6C, 0x34, 0xC4, 0xBC, 0xA0, 0xD1, 0x1B, 0xC9, 0xAA, 0xF5, 0x82, 0x15, 0x67, 0x62, 0x5A, 0xB2, 0x62, 0x9B, 0x44, 0x8D, 0xD8, 0xB3, 0x2E, 0x7D, 0xF1, 0x66, 0xCF, 0xA6, 0xF7, 0x0D, 0xC1, 0x29, 0x40, 0x48, 0x15, 0x49, 0x35, 0x11, 0x66, 0xF1, 0x33, 0xEC, 0x52, 0x8E, 0xB4, 0x49, 0xA4, 0xB6, 0xE9, 0x24, 0x45, 0xF5, 0x32, 0x49, 0xED, 0xA5, 0x95, 0x36, 0x48, 0x1B, 0xAD, 0x8B, 0xB6, 0x94, 0x64, 0x90, 0x62, 0xEA, 0x60, 0x69, 0x87, 0x3F, 0x44, 0xBD, 0xD9, 0x45, 0x00, 0x87, 0x89, 0xA0, 0xF5, 0xF6, 0x97, 0x6E, 0x33, 0x74, 0xA4, 0x3A, 0x74, 0xAC, 0x74, 0x45, 0xDF, 0xA7, 0x6A, 0xDF, 0xC3, 0x35, 0x1A, 0x2A, 0x9F, 0x1F, 0x78, 0xE6, 0x0C, 0xEA, 0xEF, 0xF0, 0xB8, 0x92, 0x64, 0xB1, 0x7C, 0x23, 0x46, 0xD8, 0x16, 0x9C, 0x9A, 0xB7, 0xF3, 0x23, 0xF2, 0xF0, 0x47, 0xEC, 0x61, 0xC7, 0x82, 0xDA, 0x38, 0x3A, 0xE7, 0x75, 0x3C, 0x10, 0x14, 0xD3, 0x29, 0xB6, 0x31, 0x94, 0x03, 0xCB, 0xF4, 0x2D, 0x73, 0x8A, 0x85, 0x65, 0xFE, 0x32, 0x35, 0x3B, 0xCB, 0x05, 0x0A, 0xEE, 0x8E, 0x15, 0xF4, 0x1C, 0xF4, 0xDF, 0x88, 0xB8, 0x99, 0x20, 0xEC, 0x7C, 0x9A, 0x39, 0xF8, 0xF1, 0x79, 0x37, 0xF3, 0xCD, 0x67, 0x24, 0xAE, 0x16, 0x28, 0x7C, 0x8F, 0xA2, 0xE6, 0x7F, 0xB8, 0x99, 0x39, 0x3E, 0xF6, 0x02, 0x04, 0xFA, 0xDC, 0xD1, 0x26, 0x75, 0xE9, 0xF4, 0x91, 0xFA, 0xAB, 0xA1, 0xD5, 0x99, 0x09, 0xFF, 0xF5, 0xE6, 0xE9, 0xFC, 0x9F, 0x3D, 0xE8, 0xF7, 0xCE, 0x34, 0xB9, 0x6C, 0x23, 0xFD, 0xB0, 0x8F, 0xA1, 0x29, 0xCD, 0xCB, 0xDF, 0xA2, 0x3C, 0xE3, 0x34, 0xC9, 0x58, 0xA1, 0x68, 0x8A, 0x97, 0xE7, 0x5C, 0xB9, 0x72, 0xDF, 0xBD, 0x37, 0x8E, 0xB7, 0x14, 0xA5, 0x5F, 0xF8, 0xF0, 0x11, 0x8A, 0x03, 0xFA, 0xEB, 0x33, 0xF8, 0x79, 0xFF, 0xD3, 0x50, 0x2E, 0xD3, 0x6A, 0xB4, 0x7B, 0xCA, 0xA5, 0xBE, 0x58, 0x68, 0x9A, 0x14, 0x60, 0xCD, 0x8B, 0xDD, 0xB5, 0x92, 0xA5, 0xD7, 0x0C, 0x8D, 0x78, 0xB2, 0x85, 0xCC, 0xE6, 0x6C, 0x7D, 0xE6, 0xAE, 0x69, 0x2A, 0x67, 0xD4, 0x94, 0xE3, 0x41, 0x8D, 0x19, 0x20, 0x4A, 0x0E, 0x45, 0xF3, 0x0C, 0xE0, 0x44, 0x01, 0x92, 0x24, 0x73, 0x4F, 0xD6, 0x89, 0x33, 0xF5, 0xD3, 0x52, 0x79, 0xE4, 0x36, 0x70, 0x0E, 0x2B, 0x32, 0x9A, 0x42, 0x91, 0xE0, 0x70, 0x2D, 0xBE, 0xEE, 0xFD, 0xF6, 0xC6, 0x76, 0xC3, 0x0B, 0x60, 0xE0, 0x9A, 0x2D, 0x4D, 0xAB, 0x2B, 0x5C, 0x23, 0xC8, 0x26, 0x57, 0x9E, 0xB1, 0xB1, 0xAE, 0x36, 0xA9, 0x94, 0x78, 0x41, 0xB6, 0xAC, 0x28, 0x21, 0x7C, 0x90, 0x43, 0x0F, 0x8A, 0x2C, 0x19, 0x44, 0x37, 0x51, 0x46, 0x34, 0xBB, 0xB2, 0xE3, 0x00, 0x77, 0x9F, 0xEF, 0x38, 0x04, 0x27, 0x49, 0xD9, 0x96, 0xA5, 0x21, 0x62, 0x50, 0x72, 0x55, 0x65, 0x41, 0xCB, 0x24, 0x02, 0x1D, 0xCB, 0x2A, 0x4D, 0x95, 0xE3, 0x0C, 0x12, 0xE8, 0x75, 0x1E, 0xB3, 0x16, 0xCC, 0xE1, 0x72, 0x8D, 0x01, 0x9C, 0x64, 0x39, 0x4F, 0x96, 0xBB, 0x63, 0x3C, 0x1C, 0x85, 0x0A, 0xBE, 0x6B, 0x7B, 0x49, 0x87, 0xB2, 0x4A, 0xE2, 0x98, 0x65, 0x17, 0x00, 0x6B, 0x47, 0x42, 0xC0, 0x2E, 0xE9, 0x30, 0xA0, 0xE1, 0xE1, 0x42, 0x70, 0xB2, 0x4C, 0x18, 0xB8, 0x61, 0x91, 0xBC, 0x8A, 0x35, 0x77, 0xFA, 0xB9, 0x35, 0x1B, 0x11, 0x8A, 0x92, 0xD7, 0x77, 0xD9, 0x39, 0x31, 0xA3, 0x4E, 0x43, 0xD2, 0x12, 0x6D, 0x28, 0x5F, 0x41, 0x00, 0xFA, 0xBD, 0x0B, 0xCF, 0xAB, 0x68, 0x25, 0xC4, 0x5C, 0xC6, 0xDD, 0x34, 0x1B, 0xFD, 0xFC, 0x0B, 0x9B, 0x5B, 0xAF, 0x3D, 0x9E, 0x4D, 0x2F, 0xDE, 0xBC, 0xE9, 0x25, 0x0A, 0x69, 0x43, 0xAF, 0xB6, 0x49, 0x20, 0x3B, 0xCC, 0x07, 0xB4, 0xFC, 0x14, 0xB7, 0x2B, 0xFF, 0x9F, 0x93, 0xDC, 0xB5, 0x87, 0x57, 0xE5, 0x7C, 0x53, 0x95, 0x4E, 0x95, 0xC9, 0x4D, 0x91, 0x43, 0x80, 0xF9, 0x8E, 0x64, 0x74, 0x7D, 0xEE, 0xC4, 0x77, 0xC0, 0x7D, 0x6D, 0xE0, 0xEC, 0x3B, 0x3F, 0x59, 0x13, 0x8E, 0x62, 0xD2, 0x04, 0x63, 0x2F, 0x9F, 0x1C, 0x04, 0xA9, 0x07, 0x6D, 0xB2, 0x58, 0x74, 0xF8, 0x78, 0xF9, 0x36, 0x2E, 0xA8, 0xED, 0xCA, 0x9F, 0x12, 0x8B, 0xC1, 0xE0, 0xD5, 0xCD, 0x5C, 0xFD, 0x09, 0x6C, 0x3C, 0xF4, 0xC9, 0xE6, 0x3D, 0xF9, 0x1C, 0x38, 0x5E, 0x7B, 0x34, 0x70, 0x8E, 0x66, 0xD0, 0xF1, 0x38, 0x28, 0x1F, 0xC3, 0x4F, 0x0D, 0xE8, 0x3F, 0x5A, 0x7F, 0x18, 0xC2, 0x4F, 0xCE, 0xE7, 0x12, 0x06, 0xE9, 0x08, 0x7E, 0x6A, 0x38, 0x1F, 0x0F, 0xA1, 0xBD, 0xF9, 0x73, 0x30, 0x8E, 0xD6, 0xC8, 0x7F, 0x01, 0x8E, 0xC3, 0xF9, 0x67 };
/* end binary data. size = 1090 bytes */

#endif // __MYSQL_CREATE_SQL_H__

#endif // HAVE_MYSQL