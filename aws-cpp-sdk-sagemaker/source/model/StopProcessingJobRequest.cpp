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

#include <aws/sagemaker/model/StopProcessingJobRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SageMaker::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

StopProcessingJobRequest::StopProcessingJobRequest() : 
    m_processingJobNameHasBeenSet(false)
{
}

Aws::String StopProcessingJobRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_processingJobNameHasBeenSet)
  {
   payload.WithString("ProcessingJobName", m_processingJobName);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection StopProcessingJobRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "SageMaker.StopProcessingJob"));
  return headers;

}




