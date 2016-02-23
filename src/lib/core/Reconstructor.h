/* Copyright (C) 
 * 2016 - Tsing Gu
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version 2
 * of the License, or (at your option) any later version.
 * 
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.
 * 
 */
#pragma once
#include <vector>
#include "./Camera.h"
#include "./Projector.h"
namespace SLS
{
/**
 * @brief Reconstructor
 * Reconstructor takes images from cameras to
 * reconstruct objects into point cloud
 */
class Reconstructor
{
protected:
    std::vector<Camera*> cameras_;
    Projector* projector_;
    float* pointCloud_;
public:
    Reconstructor():projector_{nullptr},pointCloud_{nullptr}{};
    virtual ~Reconstructor(){};

    // Interfaces
    virtual void renconstruct()=0;
};
} // namespace SLS
