/* File generated by Beremiz (PlugGenerate_C method of modbus_embox Plugin instance) */

/*
 * Copyright (c) 2016 Mario de Sousa (msousa@fe.up.pt)
 *
 * This file is part of the Modbus library for Beremiz and matiec.
 *
 * This Modbus library is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU Lesser 
 * General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with this Modbus library.  If not, see <http://www.gnu.org/licenses/>.
 *
 * This code is made available on the understanding that it will not be
 * used in safety-critical situations without a full and competent review.
 */

#include "modbus.h"


typedef struct _server_node_t {
    const char *ip_adress;
    uint16_t port;
    u8		slave_id;
    modbus_mapping_t mem_area;
    modbus_t *ctx;
} server_node_t;






/* Values for instance 0 of the modbus plugin */

#define NUMBER_OF_TCPSERVER_NODES 1

#define NUMBER_OF_SERVER_NODES NUMBER_OF_TCPSERVER_NODES


/*initialization following all parameters given by user in application*/



static server_node_t server_nodes[NUMBER_OF_SERVER_NODES] = {
/*node 0.0*/
{"10.0.2.16", 502, 0, {1, 0, 0, 0, 0, 0, 0, 0}}
}
;

/*******************/
/*located variables*/
/*******************/

u16 *__IX0_0_0_0 = &server_nodes[0].mem_area.tab_bits[0];

