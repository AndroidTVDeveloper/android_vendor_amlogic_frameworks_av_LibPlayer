/*
 * Copyright (C) 2010 Amlogic Corporation.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */



#ifndef HLS_BANDWIDTH_MEASURE_H
#define HLS_BANDWIDTH_MEASURE_H
#include <stdlib.h>

/******************************************************************************

                  ��Ȩ���� (C), amlogic

 ******************************************************************************
  �� �� ��   : hls_m3ulivesession.h
  �� �� ��   : ����
  ��    ��   : zz
  ��������   : 2013��2��21�� ������
  ����޸�   :
  ��������   : hls_bandwidth_measure.c ��ͷ�ļ�
  �����б�   :
  �޸���ʷ   :
  1.��    ��   : 2013��2��21�� ������
    ��    ��   : xiaoqiang.zhu
    �޸�����   : �޸ĺ���������Ӧ�á�

******************************************************************************/
#ifdef __cplusplus
#if __cplusplus
extern "C" {
#endif
#endif /* __cplusplus */

void *bandwidth_measure_alloc(int measurenum, int flags);
int bandwidth_measure_add(void *band, int bytes, int delay_ns);
int bandwidth_measure_get_bandwidth(void  *band, int *fast_band, int *mid_band, int *avg_band);
void bandwidth_measure_start_read(void *band);
int bandwidth_measure_finish_read(void *band, int bytes);
int bandwidth_measure_free(void *band);

#ifdef __cplusplus
#if __cplusplus
}
#endif
#endif /* __cplusplus */


#endif
