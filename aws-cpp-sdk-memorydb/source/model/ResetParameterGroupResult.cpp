﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/memorydb/model/ResetParameterGroupResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::MemoryDB::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ResetParameterGroupResult::ResetParameterGroupResult()
{
}

ResetParameterGroupResult::ResetParameterGroupResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ResetParameterGroupResult& ResetParameterGroupResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("ParameterGroup"))
  {
    m_parameterGroup = jsonValue.GetObject("ParameterGroup");

  }



  return *this;
}
