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

#include "ontology.h"

namespace bsml {
  const rdf::Namespace BSML::NS("bsml", "http://www.biosignalml.org/ontologies/2011/04/biosignalml#") ;

  const rdf::URI BSML::Annotation = BSML::NS.make_URI("Annotation") ;
  const rdf::URI BSML::BP_Filter = BSML::NS.make_URI("BP_Filter") ;
  const rdf::URI BSML::Device = BSML::NS.make_URI("Device") ;
  const rdf::URI BSML::Electrode = BSML::NS.make_URI("Electrode") ;
  const rdf::URI BSML::ErrorTag = BSML::NS.make_URI("ErrorTag") ;
  const rdf::URI BSML::Event = BSML::NS.make_URI("Event") ;
  const rdf::URI BSML::EventType = BSML::NS.make_URI("EventType") ;
  const rdf::URI BSML::Filter = BSML::NS.make_URI("Filter") ;
  const rdf::URI BSML::HP_Filter = BSML::NS.make_URI("HP_Filter") ;
  const rdf::URI BSML::Instant = BSML::NS.make_URI("Instant") ;
  const rdf::URI BSML::Interval = BSML::NS.make_URI("Interval") ;
  const rdf::URI BSML::LP_Filter = BSML::NS.make_URI("LP_Filter") ;
  const rdf::URI BSML::Notch_Filter = BSML::NS.make_URI("Notch_Filter") ;
  const rdf::URI BSML::Recording = BSML::NS.make_URI("Recording") ;
  const rdf::URI BSML::RecordingGraph = BSML::NS.make_URI("RecordingGraph") ;
  const rdf::URI BSML::SampleClock = BSML::NS.make_URI("SampleClock") ;
  const rdf::URI BSML::Segment = BSML::NS.make_URI("Segment") ;
  const rdf::URI BSML::SemanticTag = BSML::NS.make_URI("SemanticTag") ;
  const rdf::URI BSML::Sensor = BSML::NS.make_URI("Sensor") ;
  const rdf::URI BSML::Signal = BSML::NS.make_URI("Signal") ;
  const rdf::URI BSML::SignalType = BSML::NS.make_URI("SignalType") ;
  const rdf::URI BSML::Simulation = BSML::NS.make_URI("Simulation") ;
  const rdf::URI BSML::Source = BSML::NS.make_URI("Source") ;
  const rdf::URI BSML::TemporalEntity = BSML::NS.make_URI("TemporalEntity") ;
  const rdf::URI BSML::Transducer = BSML::NS.make_URI("Transducer") ;
  const rdf::URI BSML::UniformSignal = BSML::NS.make_URI("UniformSignal") ;
  const rdf::URI BSML::UnitOfMeasure = BSML::NS.make_URI("UnitOfMeasure") ;
  const rdf::URI BSML::dataBits = BSML::NS.make_URI("dataBits") ;
  const rdf::URI BSML::filterFrequency = BSML::NS.make_URI("filterFrequency") ;
  const rdf::URI BSML::index = BSML::NS.make_URI("index") ;
  const rdf::URI BSML::maxFrequency = BSML::NS.make_URI("maxFrequency") ;
  const rdf::URI BSML::maxValue = BSML::NS.make_URI("maxValue") ;
  const rdf::URI BSML::minFrequency = BSML::NS.make_URI("minFrequency") ;
  const rdf::URI BSML::minValue = BSML::NS.make_URI("minValue") ;
  const rdf::URI BSML::offset = BSML::NS.make_URI("offset") ;
  const rdf::URI BSML::period = BSML::NS.make_URI("period") ;
  const rdf::URI BSML::rate = BSML::NS.make_URI("rate") ;
  const rdf::URI BSML::resolution = BSML::NS.make_URI("resolution") ;
  const rdf::URI BSML::BP = BSML::NS.make_URI("BP") ;
  const rdf::URI BSML::ECG = BSML::NS.make_URI("ECG") ;
  const rdf::URI BSML::EEG = BSML::NS.make_URI("EEG") ;
  const rdf::URI BSML::ErrorTAG = BSML::NS.make_URI("ErrorTAG") ;
  const rdf::URI BSML::clock = BSML::NS.make_URI("clock") ;
  const rdf::URI BSML::dataset = BSML::NS.make_URI("dataset") ;
  const rdf::URI BSML::eventType = BSML::NS.make_URI("eventType") ;
  const rdf::URI BSML::preFilter = BSML::NS.make_URI("preFilter") ;
  const rdf::URI BSML::recording = BSML::NS.make_URI("recording") ;
  const rdf::URI BSML::sensor = BSML::NS.make_URI("sensor") ;
  const rdf::URI BSML::signalType = BSML::NS.make_URI("signalType") ;
  const rdf::URI BSML::tag = BSML::NS.make_URI("tag") ;
  const rdf::URI BSML::time = BSML::NS.make_URI("time") ;
  const rdf::URI BSML::uncertainty = BSML::NS.make_URI("uncertainty") ;
  const rdf::URI BSML::units = BSML::NS.make_URI("units") ;
  } ;