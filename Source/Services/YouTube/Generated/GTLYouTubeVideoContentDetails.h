/* Copyright (c) 2013 Google Inc.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

//
//  GTLYouTubeVideoContentDetails.h
//

// ----------------------------------------------------------------------------
// NOTE: This file is generated from Google APIs Discovery Service.
// Service:
//   YouTube Data API (youtube/v3)
// Description:
//   Programmatic access to YouTube features.
// Documentation:
//   https://developers.google.com/youtube/v3
// Classes:
//   GTLYouTubeVideoContentDetails (0 custom class methods, 2 custom properties)

#if GTL_BUILT_AS_FRAMEWORK
  #import "GTL/GTLObject.h"
#else
  #import "GTLObject.h"
#endif

@class GTLYouTubeVideoContentDetailsRegionRestriction;

// ----------------------------------------------------------------------------
//
//   GTLYouTubeVideoContentDetails
//

@interface GTLYouTubeVideoContentDetails : GTLObject

// The length of the video. The tag value is an ISO 8601 duration in the format
// PT#M#S, in which the letters PT indicate that the value specifies a period of
// time, and the letters M and S refer to length in minutes and seconds,
// respectively. The # characters preceding the M and S letters are both
// integers that specify the number of minutes (or seconds) of the video. For
// example, a value of PT15M51S indicates that the video is 15 minutes and 51
// seconds long.
@property (copy) NSString *duration;

// The regionRestriction object contains information about the countries where a
// video is (or is not) viewable. The object will contain either the
// contentDetails.regionRestriction.allowed property or the
// contentDetails.regionRestriction.blocked property.
@property (retain) GTLYouTubeVideoContentDetailsRegionRestriction *regionRestriction;

@end
