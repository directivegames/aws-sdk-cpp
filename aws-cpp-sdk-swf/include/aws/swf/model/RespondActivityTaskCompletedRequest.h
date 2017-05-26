﻿/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/swf/SWF_EXPORTS.h>
#include <aws/swf/SWFRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace SWF
{
namespace Model
{

  /**
   */
  class AWS_SWF_API RespondActivityTaskCompletedRequest : public SWFRequest
  {
  public:
    RespondActivityTaskCompletedRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

    /**
     * <p>The <code>taskToken</code> of the <a>ActivityTask</a>.</p> <important>
     * <code>taskToken</code> is generated by the service and should be treated as an
     * opaque value. If the task is passed to another process, its
     * <code>taskToken</code> must also be passed. This enables it to provide its
     * progress and respond with results.</important>
     */
    inline const Aws::String& GetTaskToken() const{ return m_taskToken; }

    /**
     * <p>The <code>taskToken</code> of the <a>ActivityTask</a>.</p> <important>
     * <code>taskToken</code> is generated by the service and should be treated as an
     * opaque value. If the task is passed to another process, its
     * <code>taskToken</code> must also be passed. This enables it to provide its
     * progress and respond with results.</important>
     */
    inline void SetTaskToken(const Aws::String& value) { m_taskTokenHasBeenSet = true; m_taskToken = value; }

    /**
     * <p>The <code>taskToken</code> of the <a>ActivityTask</a>.</p> <important>
     * <code>taskToken</code> is generated by the service and should be treated as an
     * opaque value. If the task is passed to another process, its
     * <code>taskToken</code> must also be passed. This enables it to provide its
     * progress and respond with results.</important>
     */
    inline void SetTaskToken(Aws::String&& value) { m_taskTokenHasBeenSet = true; m_taskToken = std::move(value); }

    /**
     * <p>The <code>taskToken</code> of the <a>ActivityTask</a>.</p> <important>
     * <code>taskToken</code> is generated by the service and should be treated as an
     * opaque value. If the task is passed to another process, its
     * <code>taskToken</code> must also be passed. This enables it to provide its
     * progress and respond with results.</important>
     */
    inline void SetTaskToken(const char* value) { m_taskTokenHasBeenSet = true; m_taskToken.assign(value); }

    /**
     * <p>The <code>taskToken</code> of the <a>ActivityTask</a>.</p> <important>
     * <code>taskToken</code> is generated by the service and should be treated as an
     * opaque value. If the task is passed to another process, its
     * <code>taskToken</code> must also be passed. This enables it to provide its
     * progress and respond with results.</important>
     */
    inline RespondActivityTaskCompletedRequest& WithTaskToken(const Aws::String& value) { SetTaskToken(value); return *this;}

    /**
     * <p>The <code>taskToken</code> of the <a>ActivityTask</a>.</p> <important>
     * <code>taskToken</code> is generated by the service and should be treated as an
     * opaque value. If the task is passed to another process, its
     * <code>taskToken</code> must also be passed. This enables it to provide its
     * progress and respond with results.</important>
     */
    inline RespondActivityTaskCompletedRequest& WithTaskToken(Aws::String&& value) { SetTaskToken(std::move(value)); return *this;}

    /**
     * <p>The <code>taskToken</code> of the <a>ActivityTask</a>.</p> <important>
     * <code>taskToken</code> is generated by the service and should be treated as an
     * opaque value. If the task is passed to another process, its
     * <code>taskToken</code> must also be passed. This enables it to provide its
     * progress and respond with results.</important>
     */
    inline RespondActivityTaskCompletedRequest& WithTaskToken(const char* value) { SetTaskToken(value); return *this;}

    /**
     * <p>The result of the activity task. It is a free form string that is
     * implementation specific.</p>
     */
    inline const Aws::String& GetResult() const{ return m_result; }

    /**
     * <p>The result of the activity task. It is a free form string that is
     * implementation specific.</p>
     */
    inline void SetResult(const Aws::String& value) { m_resultHasBeenSet = true; m_result = value; }

    /**
     * <p>The result of the activity task. It is a free form string that is
     * implementation specific.</p>
     */
    inline void SetResult(Aws::String&& value) { m_resultHasBeenSet = true; m_result = std::move(value); }

    /**
     * <p>The result of the activity task. It is a free form string that is
     * implementation specific.</p>
     */
    inline void SetResult(const char* value) { m_resultHasBeenSet = true; m_result.assign(value); }

    /**
     * <p>The result of the activity task. It is a free form string that is
     * implementation specific.</p>
     */
    inline RespondActivityTaskCompletedRequest& WithResult(const Aws::String& value) { SetResult(value); return *this;}

    /**
     * <p>The result of the activity task. It is a free form string that is
     * implementation specific.</p>
     */
    inline RespondActivityTaskCompletedRequest& WithResult(Aws::String&& value) { SetResult(std::move(value)); return *this;}

    /**
     * <p>The result of the activity task. It is a free form string that is
     * implementation specific.</p>
     */
    inline RespondActivityTaskCompletedRequest& WithResult(const char* value) { SetResult(value); return *this;}

  private:
    Aws::String m_taskToken;
    bool m_taskTokenHasBeenSet;
    Aws::String m_result;
    bool m_resultHasBeenSet;
  };

} // namespace Model
} // namespace SWF
} // namespace Aws
