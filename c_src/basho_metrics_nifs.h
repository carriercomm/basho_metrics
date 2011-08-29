// -------------------------------------------------------------------
//
// 
//
// Copyright (c) 2011 Basho Technologies, Inc. All Rights Reserved.
//
// This file is provided to you under the Apache License,
// Version 2.0 (the "License"); you may not use this file
// except in compliance with the License.  You may obtain
// a copy of the License at
//
//   http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing,
// software distributed under the License is distributed on an
// "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY
// KIND, either express or implied.  See the License for the
// specific language governing permissions and limitations
// under the License.
//
// -------------------------------------------------------------------
#ifndef INCL_ELEVELDB_H
#define INCL_ELEVELDB_H

extern "C" {

#include "erl_nif_compat.h"

ERL_NIF_TERM histogram_update(ErlNifEnv*, int, const ERL_NIF_TERM[]);
ERL_NIF_TERM histogram_new(ErlNifEnv*, int, const ERL_NIF_TERM[]);
ERL_NIF_TERM histogram_stats(ErlNifEnv*, int, const ERL_NIF_TERM[]);
ERL_NIF_TERM histogram_clear(ErlNifEnv*, int, const ERL_NIF_TERM[]);

ERL_NIF_TERM counter_new(ErlNifEnv*, int, const ERL_NIF_TERM[]);
ERL_NIF_TERM counter_increment(ErlNifEnv*, int, const ERL_NIF_TERM[]);
ERL_NIF_TERM counter_value(ErlNifEnv*, int, const ERL_NIF_TERM[]);

ERL_NIF_TERM meter_new(ErlNifEnv*, int, const ERL_NIF_TERM[]);
ERL_NIF_TERM meter_update(ErlNifEnv*, int, const ERL_NIF_TERM[]);
ERL_NIF_TERM meter_tick(ErlNifEnv*,int, const ERL_NIF_TERM[]);
ERL_NIF_TERM meter_stats(ErlNifEnv*, int, const ERL_NIF_TERM[]);

} // extern "C"

#endif // include guard