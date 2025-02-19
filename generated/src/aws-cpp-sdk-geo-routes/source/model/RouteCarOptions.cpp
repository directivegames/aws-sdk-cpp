﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/geo-routes/model/RouteCarOptions.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace GeoRoutes
{
namespace Model
{

RouteCarOptions::RouteCarOptions() : 
    m_engineType(RouteEngineType::NOT_SET),
    m_engineTypeHasBeenSet(false),
    m_licensePlateHasBeenSet(false),
    m_maxSpeed(0.0),
    m_maxSpeedHasBeenSet(false),
    m_occupancy(0),
    m_occupancyHasBeenSet(false)
{
}

RouteCarOptions::RouteCarOptions(JsonView jsonValue)
  : RouteCarOptions()
{
  *this = jsonValue;
}

RouteCarOptions& RouteCarOptions::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("EngineType"))
  {
    m_engineType = RouteEngineTypeMapper::GetRouteEngineTypeForName(jsonValue.GetString("EngineType"));

    m_engineTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LicensePlate"))
  {
    m_licensePlate = jsonValue.GetObject("LicensePlate");

    m_licensePlateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MaxSpeed"))
  {
    m_maxSpeed = jsonValue.GetDouble("MaxSpeed");

    m_maxSpeedHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Occupancy"))
  {
    m_occupancy = jsonValue.GetInteger("Occupancy");

    m_occupancyHasBeenSet = true;
  }

  return *this;
}

JsonValue RouteCarOptions::Jsonize() const
{
  JsonValue payload;

  if(m_engineTypeHasBeenSet)
  {
   payload.WithString("EngineType", RouteEngineTypeMapper::GetNameForRouteEngineType(m_engineType));
  }

  if(m_licensePlateHasBeenSet)
  {
   payload.WithObject("LicensePlate", m_licensePlate.Jsonize());

  }

  if(m_maxSpeedHasBeenSet)
  {
   payload.WithDouble("MaxSpeed", m_maxSpeed);

  }

  if(m_occupancyHasBeenSet)
  {
   payload.WithInteger("Occupancy", m_occupancy);

  }

  return payload;
}

} // namespace Model
} // namespace GeoRoutes
} // namespace Aws
