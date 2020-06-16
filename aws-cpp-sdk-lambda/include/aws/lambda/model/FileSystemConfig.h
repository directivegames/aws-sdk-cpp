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
#include <aws/lambda/Lambda_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace Lambda
{
namespace Model
{

  /**
   * <p>Details about the connection between a Lambda function and an Amazon EFS file
   * system.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-2015-03-31/FileSystemConfig">AWS
   * API Reference</a></p>
   */
  class AWS_LAMBDA_API FileSystemConfig
  {
  public:
    FileSystemConfig();
    FileSystemConfig(Aws::Utils::Json::JsonView jsonValue);
    FileSystemConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon EFS access point that provides
     * access to the file system.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon EFS access point that provides
     * access to the file system.</p>
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon EFS access point that provides
     * access to the file system.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon EFS access point that provides
     * access to the file system.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon EFS access point that provides
     * access to the file system.</p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon EFS access point that provides
     * access to the file system.</p>
     */
    inline FileSystemConfig& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon EFS access point that provides
     * access to the file system.</p>
     */
    inline FileSystemConfig& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon EFS access point that provides
     * access to the file system.</p>
     */
    inline FileSystemConfig& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>The path where the function can access the file system, starting with
     * <code>/mnt/</code>.</p>
     */
    inline const Aws::String& GetLocalMountPath() const{ return m_localMountPath; }

    /**
     * <p>The path where the function can access the file system, starting with
     * <code>/mnt/</code>.</p>
     */
    inline bool LocalMountPathHasBeenSet() const { return m_localMountPathHasBeenSet; }

    /**
     * <p>The path where the function can access the file system, starting with
     * <code>/mnt/</code>.</p>
     */
    inline void SetLocalMountPath(const Aws::String& value) { m_localMountPathHasBeenSet = true; m_localMountPath = value; }

    /**
     * <p>The path where the function can access the file system, starting with
     * <code>/mnt/</code>.</p>
     */
    inline void SetLocalMountPath(Aws::String&& value) { m_localMountPathHasBeenSet = true; m_localMountPath = std::move(value); }

    /**
     * <p>The path where the function can access the file system, starting with
     * <code>/mnt/</code>.</p>
     */
    inline void SetLocalMountPath(const char* value) { m_localMountPathHasBeenSet = true; m_localMountPath.assign(value); }

    /**
     * <p>The path where the function can access the file system, starting with
     * <code>/mnt/</code>.</p>
     */
    inline FileSystemConfig& WithLocalMountPath(const Aws::String& value) { SetLocalMountPath(value); return *this;}

    /**
     * <p>The path where the function can access the file system, starting with
     * <code>/mnt/</code>.</p>
     */
    inline FileSystemConfig& WithLocalMountPath(Aws::String&& value) { SetLocalMountPath(std::move(value)); return *this;}

    /**
     * <p>The path where the function can access the file system, starting with
     * <code>/mnt/</code>.</p>
     */
    inline FileSystemConfig& WithLocalMountPath(const char* value) { SetLocalMountPath(value); return *this;}

  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet;

    Aws::String m_localMountPath;
    bool m_localMountPathHasBeenSet;
  };

} // namespace Model
} // namespace Lambda
} // namespace Aws
