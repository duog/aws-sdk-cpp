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
#include <aws/servicecatalog/ServiceCatalog_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/servicecatalog/model/ResourceDetail.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace ServiceCatalog
{
namespace Model
{
  class AWS_SERVICECATALOG_API ListResourcesForTagOptionResult
  {
  public:
    ListResourcesForTagOptionResult();
    ListResourcesForTagOptionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    ListResourcesForTagOptionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Information about the resources.</p>
     */
    inline const Aws::Vector<ResourceDetail>& GetResourceDetails() const{ return m_resourceDetails; }

    /**
     * <p>Information about the resources.</p>
     */
    inline void SetResourceDetails(const Aws::Vector<ResourceDetail>& value) { m_resourceDetails = value; }

    /**
     * <p>Information about the resources.</p>
     */
    inline void SetResourceDetails(Aws::Vector<ResourceDetail>&& value) { m_resourceDetails = std::move(value); }

    /**
     * <p>Information about the resources.</p>
     */
    inline ListResourcesForTagOptionResult& WithResourceDetails(const Aws::Vector<ResourceDetail>& value) { SetResourceDetails(value); return *this;}

    /**
     * <p>Information about the resources.</p>
     */
    inline ListResourcesForTagOptionResult& WithResourceDetails(Aws::Vector<ResourceDetail>&& value) { SetResourceDetails(std::move(value)); return *this;}

    /**
     * <p>Information about the resources.</p>
     */
    inline ListResourcesForTagOptionResult& AddResourceDetails(const ResourceDetail& value) { m_resourceDetails.push_back(value); return *this; }

    /**
     * <p>Information about the resources.</p>
     */
    inline ListResourcesForTagOptionResult& AddResourceDetails(ResourceDetail&& value) { m_resourceDetails.push_back(std::move(value)); return *this; }


    /**
     * <p>The page token for the next set of results. To retrieve the first set of
     * results, use null.</p>
     */
    inline const Aws::String& GetPageToken() const{ return m_pageToken; }

    /**
     * <p>The page token for the next set of results. To retrieve the first set of
     * results, use null.</p>
     */
    inline void SetPageToken(const Aws::String& value) { m_pageToken = value; }

    /**
     * <p>The page token for the next set of results. To retrieve the first set of
     * results, use null.</p>
     */
    inline void SetPageToken(Aws::String&& value) { m_pageToken = std::move(value); }

    /**
     * <p>The page token for the next set of results. To retrieve the first set of
     * results, use null.</p>
     */
    inline void SetPageToken(const char* value) { m_pageToken.assign(value); }

    /**
     * <p>The page token for the next set of results. To retrieve the first set of
     * results, use null.</p>
     */
    inline ListResourcesForTagOptionResult& WithPageToken(const Aws::String& value) { SetPageToken(value); return *this;}

    /**
     * <p>The page token for the next set of results. To retrieve the first set of
     * results, use null.</p>
     */
    inline ListResourcesForTagOptionResult& WithPageToken(Aws::String&& value) { SetPageToken(std::move(value)); return *this;}

    /**
     * <p>The page token for the next set of results. To retrieve the first set of
     * results, use null.</p>
     */
    inline ListResourcesForTagOptionResult& WithPageToken(const char* value) { SetPageToken(value); return *this;}

  private:

    Aws::Vector<ResourceDetail> m_resourceDetails;

    Aws::String m_pageToken;
  };

} // namespace Model
} // namespace ServiceCatalog
} // namespace Aws
