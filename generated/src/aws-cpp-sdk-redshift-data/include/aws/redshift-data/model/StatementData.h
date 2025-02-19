﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/redshift-data/RedshiftDataAPIService_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/redshift-data/model/ResultFormatString.h>
#include <aws/redshift-data/model/StatusString.h>
#include <aws/redshift-data/model/SqlParameter.h>
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
namespace RedshiftDataAPIService
{
namespace Model
{

  /**
   * <p>The SQL statement to run.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-data-2019-12-20/StatementData">AWS
   * API Reference</a></p>
   */
  class StatementData
  {
  public:
    AWS_REDSHIFTDATAAPISERVICE_API StatementData();
    AWS_REDSHIFTDATAAPISERVICE_API StatementData(Aws::Utils::Json::JsonView jsonValue);
    AWS_REDSHIFTDATAAPISERVICE_API StatementData& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_REDSHIFTDATAAPISERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The date and time (UTC) the statement was created. </p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAtHasBeenSet = true; m_createdAt = value; }
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::move(value); }
    inline StatementData& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}
    inline StatementData& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The SQL statement identifier. This value is a universally unique identifier
     * (UUID) generated by Amazon Redshift Data API. </p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }
    inline StatementData& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline StatementData& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline StatementData& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A value that indicates whether the statement is a batch query request.</p>
     */
    inline bool GetIsBatchStatement() const{ return m_isBatchStatement; }
    inline bool IsBatchStatementHasBeenSet() const { return m_isBatchStatementHasBeenSet; }
    inline void SetIsBatchStatement(bool value) { m_isBatchStatementHasBeenSet = true; m_isBatchStatement = value; }
    inline StatementData& WithIsBatchStatement(bool value) { SetIsBatchStatement(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The parameters used in a SQL statement.</p>
     */
    inline const Aws::Vector<SqlParameter>& GetQueryParameters() const{ return m_queryParameters; }
    inline bool QueryParametersHasBeenSet() const { return m_queryParametersHasBeenSet; }
    inline void SetQueryParameters(const Aws::Vector<SqlParameter>& value) { m_queryParametersHasBeenSet = true; m_queryParameters = value; }
    inline void SetQueryParameters(Aws::Vector<SqlParameter>&& value) { m_queryParametersHasBeenSet = true; m_queryParameters = std::move(value); }
    inline StatementData& WithQueryParameters(const Aws::Vector<SqlParameter>& value) { SetQueryParameters(value); return *this;}
    inline StatementData& WithQueryParameters(Aws::Vector<SqlParameter>&& value) { SetQueryParameters(std::move(value)); return *this;}
    inline StatementData& AddQueryParameters(const SqlParameter& value) { m_queryParametersHasBeenSet = true; m_queryParameters.push_back(value); return *this; }
    inline StatementData& AddQueryParameters(SqlParameter&& value) { m_queryParametersHasBeenSet = true; m_queryParameters.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The SQL statement.</p>
     */
    inline const Aws::String& GetQueryString() const{ return m_queryString; }
    inline bool QueryStringHasBeenSet() const { return m_queryStringHasBeenSet; }
    inline void SetQueryString(const Aws::String& value) { m_queryStringHasBeenSet = true; m_queryString = value; }
    inline void SetQueryString(Aws::String&& value) { m_queryStringHasBeenSet = true; m_queryString = std::move(value); }
    inline void SetQueryString(const char* value) { m_queryStringHasBeenSet = true; m_queryString.assign(value); }
    inline StatementData& WithQueryString(const Aws::String& value) { SetQueryString(value); return *this;}
    inline StatementData& WithQueryString(Aws::String&& value) { SetQueryString(std::move(value)); return *this;}
    inline StatementData& WithQueryString(const char* value) { SetQueryString(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>One or more SQL statements. Each query string in the array corresponds to one
     * of the queries in a batch query request.</p>
     */
    inline const Aws::Vector<Aws::String>& GetQueryStrings() const{ return m_queryStrings; }
    inline bool QueryStringsHasBeenSet() const { return m_queryStringsHasBeenSet; }
    inline void SetQueryStrings(const Aws::Vector<Aws::String>& value) { m_queryStringsHasBeenSet = true; m_queryStrings = value; }
    inline void SetQueryStrings(Aws::Vector<Aws::String>&& value) { m_queryStringsHasBeenSet = true; m_queryStrings = std::move(value); }
    inline StatementData& WithQueryStrings(const Aws::Vector<Aws::String>& value) { SetQueryStrings(value); return *this;}
    inline StatementData& WithQueryStrings(Aws::Vector<Aws::String>&& value) { SetQueryStrings(std::move(value)); return *this;}
    inline StatementData& AddQueryStrings(const Aws::String& value) { m_queryStringsHasBeenSet = true; m_queryStrings.push_back(value); return *this; }
    inline StatementData& AddQueryStrings(Aws::String&& value) { m_queryStringsHasBeenSet = true; m_queryStrings.push_back(std::move(value)); return *this; }
    inline StatementData& AddQueryStrings(const char* value) { m_queryStringsHasBeenSet = true; m_queryStrings.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The data format of the result of the SQL statement.</p>
     */
    inline const ResultFormatString& GetResultFormat() const{ return m_resultFormat; }
    inline bool ResultFormatHasBeenSet() const { return m_resultFormatHasBeenSet; }
    inline void SetResultFormat(const ResultFormatString& value) { m_resultFormatHasBeenSet = true; m_resultFormat = value; }
    inline void SetResultFormat(ResultFormatString&& value) { m_resultFormatHasBeenSet = true; m_resultFormat = std::move(value); }
    inline StatementData& WithResultFormat(const ResultFormatString& value) { SetResultFormat(value); return *this;}
    inline StatementData& WithResultFormat(ResultFormatString&& value) { SetResultFormat(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name or Amazon Resource Name (ARN) of the secret that enables access to
     * the database. </p>
     */
    inline const Aws::String& GetSecretArn() const{ return m_secretArn; }
    inline bool SecretArnHasBeenSet() const { return m_secretArnHasBeenSet; }
    inline void SetSecretArn(const Aws::String& value) { m_secretArnHasBeenSet = true; m_secretArn = value; }
    inline void SetSecretArn(Aws::String&& value) { m_secretArnHasBeenSet = true; m_secretArn = std::move(value); }
    inline void SetSecretArn(const char* value) { m_secretArnHasBeenSet = true; m_secretArn.assign(value); }
    inline StatementData& WithSecretArn(const Aws::String& value) { SetSecretArn(value); return *this;}
    inline StatementData& WithSecretArn(Aws::String&& value) { SetSecretArn(std::move(value)); return *this;}
    inline StatementData& WithSecretArn(const char* value) { SetSecretArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The session identifier of the query.</p>
     */
    inline const Aws::String& GetSessionId() const{ return m_sessionId; }
    inline bool SessionIdHasBeenSet() const { return m_sessionIdHasBeenSet; }
    inline void SetSessionId(const Aws::String& value) { m_sessionIdHasBeenSet = true; m_sessionId = value; }
    inline void SetSessionId(Aws::String&& value) { m_sessionIdHasBeenSet = true; m_sessionId = std::move(value); }
    inline void SetSessionId(const char* value) { m_sessionIdHasBeenSet = true; m_sessionId.assign(value); }
    inline StatementData& WithSessionId(const Aws::String& value) { SetSessionId(value); return *this;}
    inline StatementData& WithSessionId(Aws::String&& value) { SetSessionId(std::move(value)); return *this;}
    inline StatementData& WithSessionId(const char* value) { SetSessionId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the SQL statement. </p>
     */
    inline const Aws::String& GetStatementName() const{ return m_statementName; }
    inline bool StatementNameHasBeenSet() const { return m_statementNameHasBeenSet; }
    inline void SetStatementName(const Aws::String& value) { m_statementNameHasBeenSet = true; m_statementName = value; }
    inline void SetStatementName(Aws::String&& value) { m_statementNameHasBeenSet = true; m_statementName = std::move(value); }
    inline void SetStatementName(const char* value) { m_statementNameHasBeenSet = true; m_statementName.assign(value); }
    inline StatementData& WithStatementName(const Aws::String& value) { SetStatementName(value); return *this;}
    inline StatementData& WithStatementName(Aws::String&& value) { SetStatementName(std::move(value)); return *this;}
    inline StatementData& WithStatementName(const char* value) { SetStatementName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the SQL statement. An example is the that the SQL statement
     * finished. </p>
     */
    inline const StatusString& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const StatusString& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(StatusString&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline StatementData& WithStatus(const StatusString& value) { SetStatus(value); return *this;}
    inline StatementData& WithStatus(StatusString&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time (UTC) that the statement metadata was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedAt() const{ return m_updatedAt; }
    inline bool UpdatedAtHasBeenSet() const { return m_updatedAtHasBeenSet; }
    inline void SetUpdatedAt(const Aws::Utils::DateTime& value) { m_updatedAtHasBeenSet = true; m_updatedAt = value; }
    inline void SetUpdatedAt(Aws::Utils::DateTime&& value) { m_updatedAtHasBeenSet = true; m_updatedAt = std::move(value); }
    inline StatementData& WithUpdatedAt(const Aws::Utils::DateTime& value) { SetUpdatedAt(value); return *this;}
    inline StatementData& WithUpdatedAt(Aws::Utils::DateTime&& value) { SetUpdatedAt(std::move(value)); return *this;}
    ///@}
  private:

    Aws::Utils::DateTime m_createdAt;
    bool m_createdAtHasBeenSet = false;

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    bool m_isBatchStatement;
    bool m_isBatchStatementHasBeenSet = false;

    Aws::Vector<SqlParameter> m_queryParameters;
    bool m_queryParametersHasBeenSet = false;

    Aws::String m_queryString;
    bool m_queryStringHasBeenSet = false;

    Aws::Vector<Aws::String> m_queryStrings;
    bool m_queryStringsHasBeenSet = false;

    ResultFormatString m_resultFormat;
    bool m_resultFormatHasBeenSet = false;

    Aws::String m_secretArn;
    bool m_secretArnHasBeenSet = false;

    Aws::String m_sessionId;
    bool m_sessionIdHasBeenSet = false;

    Aws::String m_statementName;
    bool m_statementNameHasBeenSet = false;

    StatusString m_status;
    bool m_statusHasBeenSet = false;

    Aws::Utils::DateTime m_updatedAt;
    bool m_updatedAtHasBeenSet = false;
  };

} // namespace Model
} // namespace RedshiftDataAPIService
} // namespace Aws
