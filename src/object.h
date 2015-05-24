/******************************************************************************
 *                                                                            *
 *  BioSignalML Management in C++                                             *
 *                                                                            *
 *  Copyright (c) 2010-2015  David Brooks                                     *
 *                                                                            *
 *  Licensed under the Apache License, Version 2.0 (the "License");           *
 *  you may not use this file except in compliance with the License.          *
 *  You may obtain a copy of the License at                                   *
 *                                                                            *
 *      http://www.apache.org/licenses/LICENSE-2.0                            *
 *                                                                            *
 *  Unless required by applicable law or agreed to in writing, software       *
 *  distributed under the License is distributed on an "AS IS" BASIS,         *
 *  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.  *
 *  See the License for the specific language governing permissions and       *
 *  limitations under the License.                                            *
 *                                                                            *
 ******************************************************************************/

#ifndef BSML_OBJECT_H
#define BSML_OBJECT_H

#include "biosignalml_export.h"
#include "ontology.h"

#include <typedobject/typedobject.h>

#include <string>

using namespace rdf ;


namespace bsml {

  class BIOSIGNALML_EXPORT Object : public TypedObject::TypedObject
  /*-------------------------------------------------------------*/
  {
    TYPED_OBJECT(Object, OWL::Object)

    // Generic attributes all resources have:
    PROPERTY_STRING(label, RDFS::label)
    PROPERTY_STRING(comment, RDFS::comment)
    PROPERTY_STRING(description, DCT::description)
    PROPERTY_NODE(precededBy, PRV::precededBy)
    PROPERTY_URI(creator, DCT::creator)
    PROPERTY_DATETIME(created, DCT::created)
    //, XSD.dateTime,  utils::datetime_to_isoformat, utils::isoformat_to_datetime)
    } ;

  } ;

/**
              'created':     PropertyMap(DCT.created, datatype=XSD.dateTime,
                                         to_rdf=utils.datetime_to_isoformat,
                                         from_rdf=utils.isoformat_to_datetime),
**/

#endif
