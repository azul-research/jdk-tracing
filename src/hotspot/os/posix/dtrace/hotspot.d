/*
 * Copyright (c) 2005, 2010, Oracle and/or its affiliates. All rights reserved.
 * DO NOT ALTER OR REMOVE COPYRIGHT NOTICES OR THIS FILE HEADER.
 *
 * This code is free software; you can redistribute it and/or modify it
 * under the terms of the GNU General Public License version 2 only, as
 * published by the Free Software Foundation.
 *
 * This code is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License
 * version 2 for more details (a copy is included in the LICENSE file that
 * accompanied this code).
 *
 * You should have received a copy of the GNU General Public License version
 * 2 along with this work; if not, write to the Free Software Foundation,
 * Inc., 51 Franklin St, Fifth Floor, Boston, MA 02110-1301 USA.
 *
 * Please contact Oracle, 500 Oracle Parkway, Redwood Shores, CA 94065 USA
 * or visit www.oracle.com if you need additional information or have any
 * questions.
 *  
 */

provider hotspot {
  probe class__loaded(char* name, uintptr_t name_len, void* class_loader, uintptr_t shared);
  probe class__unloaded(char* name, uintptr_t name_len, void* class_loader, uintptr_t shared);
  probe class__initialization__required(char* name, uintptr_t name_len, void* class_loader, intptr_t thread_type);
  probe class__initialization__recursive(char* name, uintptr_t name_len, void* class_loader, intptr_t thread_type, int wait);
  probe class__initialization__concurrent(char* name, uintptr_t name_len, void* class_loader, intptr_t thread_type, int wait);
  probe class__initialization__erroneous(char* name, uintptr_t name_len, void* class_loader, intptr_t thread_type, int wait);
  probe class__initialization__super__failed(char* name, uintptr_t name_len, void* class_loader, intptr_t thread_type, int wait);
  probe class__initialization__clinit(char* name, uintptr_t name_len, void* class_loader, intptr_t thread_type, int wait);
  probe class__initialization__error(char* name, uintptr_t name_len, void* class_loader, intptr_t thread_type, int wait);
  probe class__initialization__end(char* name, uintptr_t name_len, void* class_loader, intptr_t thread_type, int wait);
  probe vm__init__begin();
  probe vm__init__end();
  probe vm__shutdown();
  probe vmops__request(char* name, uintptr_t name_len, int mode);
  probe vmops__begin(char* name, uintptr_t name_len, int mode);
  probe vmops__end(char* name, uintptr_t name_len, int mode);
  probe gc__begin(uintptr_t full);
  probe gc__end();
  probe mem__pool__gc__begin(
    char* name, uintptr_t name_len, char* pool_name, uintptr_t pool_name_len, 
    uintptr_t init_size, uintptr_t used, uintptr_t commited, uintptr_t max_size);
  probe mem__pool__gc__end(
    char* name, uintptr_t name_len, char* pool_name, uintptr_t pool_name_len, 
    uintptr_t init_size, uintptr_t used, uintptr_t commited, uintptr_t max_size);
  probe thread__start(char* name, uintptr_t name_len, uintptr_t jtid, uintptr_t tid, uintptr_t is_daemon);
  probe thread__stop(char* name, uintptr_t name_len, uintptr_t jtid, uintptr_t tid, uintptr_t is_daemon);
  probe thread__sleep__begin(int64_t millis);
  probe thread__sleep__end(int is_interrupted);
  probe thread__yield();
  probe thread__park__begin(uintptr_t thread_parker, int is_absolute, int64_t time);
  probe thread__park__end(uintptr_t thread_parker);
  probe thread__unpark(uintptr_t p);
  probe method__compile__begin(
    char* comp_name, uintptr_t comp_name_len, char* class_name, uintptr_t class_name_len,
    char* name, uintptr_t name_len, char* sig, uintptr_t sig_len); 
  probe method__compile__end(
    char* comp_name, uintptr_t comp_name_len, char* class_name, uintptr_t class_name_len,
    char* name, uintptr_t name_len, char* sig, uintptr_t sig_len, uintptr_t success); 
  probe compiled__method__load(
    char* class_name, uintptr_t class_name_len, char* name, uintptr_t name_len, char* sig, uintptr_t sig_len,
    void* insts_begin, uintptr_t insts_begin_len);
  probe compiled__method__unload(
    char* class_name, uintptr_t class_name_len, char* name, uintptr_t name_len, char* sig, uintptr_t sig_len); 
  probe monitor__contended__enter(uintptr_t jtid, uintptr_t monitor, char* bytes, uintptr_t len);
  probe monitor__contended__entered(uintptr_t jtid, uintptr_t monitor, char* bytes, uintptr_t len);
  probe monitor__contended__exit(uintptr_t jtid, uintptr_t monitor, char* bytes, uintptr_t len);
  probe monitor__wait(uintptr_t jtid, uintptr_t monitor, char* bytes, uintptr_t len, uintptr_t millis);
  probe monitor__waited(uintptr_t jtid, uintptr_t monitor, char* bytes, uintptr_t len);
  probe monitor__notify(uintptr_t jtid, uintptr_t monitor, char* bytes, uintptr_t len);
  probe monitor__notifyAll(uintptr_t jtid, uintptr_t monitor, char* bytes, uintptr_t len);

  probe object__alloc(int tid, char* name, uintptr_t name_len, uintptr_t size);
  probe method__entry(
    int tid, char* class_name, int class_name_len, char* name, int name_len, char* sig, int sig_len);
  probe method__return(
    int tid, char* class_name, int class_name_len, char* name, int name_len, char* sig, int sig_len);
};

#pragma D attributes Evolving/Evolving/Common provider hotspot provider
#pragma D attributes Private/Private/Unknown provider hotspot module
#pragma D attributes Private/Private/Unknown provider hotspot function
#pragma D attributes Evolving/Evolving/Common provider hotspot name
#pragma D attributes Evolving/Evolving/Common provider hotspot args
