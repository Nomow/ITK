/*=========================================================================

  Program:   Insight Segmentation & Registration Toolkit
  Module:    wrap_itkMattesMutualInformationImageToImageMetric.cxx
  Language:  C++
  Date:      $Date$
  Version:   $Revision$

  Copyright (c) 2002 Insight Consortium. All rights reserved.
  See ITKCopyright.txt or http://www.itk.org/HTML/Copyright.htm for details.

     This software is distributed WITHOUT ANY WARRANTY; without even 
     the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR 
     PURPOSE.  See the above copyright notices for more information.

=========================================================================*/
#include "itkImage.h"
#include "itkMattesMutualInformationImageToImageMetric.h"

#ifdef CABLE_CONFIGURATION
#include "itkCSwigMacros.h"
#include "itkCSwigImages.h"

namespace _cable_
{
  const char* const group = ITK_WRAP_GROUP(itkMattesMutualInformationImageToImageMetric);
  namespace wrappers
  {
    ITK_WRAP_OBJECT2(MattesMutualInformationImageToImageMetric, image::F2, image::F2,
                     MattesMutualInformationImageToImageMetricF2F2);
    ITK_WRAP_OBJECT2(MattesMutualInformationImageToImageMetric, image::F3, image::F3,
                     MattesMutualInformationImageToImageMetricF3F3);
    ITK_WRAP_OBJECT2(MattesMutualInformationImageToImageMetric, image::US2, image::US2,
                     MattesMutualInformationImageToImageMetricUS2US2);
    ITK_WRAP_OBJECT2(MattesMutualInformationImageToImageMetric, image::US3, image::US3,
                     MattesMutualInformationImageToImageMetricUS3US3);
  }
}

#endif
