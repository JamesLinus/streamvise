
#ifndef _H_cit_udhcpd
#define _H_cit_udhcpd
/* 

 * Copyright (c) 2009 - 2011, Andy Bierman
 * All Rights Reserved.
 *
 * Unless required by applicable law or agreed to in writing,
 * software distributed under the License is distributed on an
 * "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY
 * KIND, either express or implied.  See the License for the
 * specific language governing permissions and limitations
 * under the License.
 *

*** Generated by yangdump 1.15-6

    module cit-udhcpd
    revision 2011-12-07

    namespace http://netconfcentral.org/ns/cit-udhcpd
    organization ConnectIT

 */

#include <xmlstring.h>

#include "dlq.h"
#include "ncxtypes.h"
#include "status.h"

#define y_cit_udhcpd_M_cit_udhcpd (const xmlChar *)"cit-udhcpd"
#define y_cit_udhcpd_R_cit_udhcpd (const xmlChar *)"2011-12-07"

#define y_cit_udhcpd_N_dns (const xmlChar *)"dns"
#define y_cit_udhcpd_N_end (const xmlChar *)"end"
#define y_cit_udhcpd_N_hostname (const xmlChar *)"hostname"
#define y_cit_udhcpd_N_interface (const xmlChar *)"interface"
#define y_cit_udhcpd_N_ip_address (const xmlChar *)"ip-address"
#define y_cit_udhcpd_N_lease (const xmlChar *)"lease"
#define y_cit_udhcpd_N_lease_time (const xmlChar *)"lease-time"
#define y_cit_udhcpd_N_mac (const xmlChar *)"mac"
#define y_cit_udhcpd_N_range (const xmlChar *)"range"
#define y_cit_udhcpd_N_router (const xmlChar *)"router"
#define y_cit_udhcpd_N_running (const xmlChar *)"running"
#define y_cit_udhcpd_N_server (const xmlChar *)"server"
#define y_cit_udhcpd_N_start (const xmlChar *)"start"
#define y_cit_udhcpd_N_static_leases (const xmlChar *)"static-leases"
#define y_cit_udhcpd_N_subnet_mask (const xmlChar *)"subnet-mask"
#define y_cit_udhcpd_N_udhcpd (const xmlChar *)"udhcpd"

/* list /udhcpd/dns/server */
typedef struct y_cit_udhcpd_T_udhcpd_dns_server_ {
    dlq_hdr_t qhdr;
    xmlChar * ip_address;
} y_cit_udhcpd_T_udhcpd_dns_server;

/* container /udhcpd/dns */
typedef struct y_cit_udhcpd_T_udhcpd_dns_ {
    dlq_hdr_t server;
} y_cit_udhcpd_T_udhcpd_dns;

/* list /udhcpd/static-leases/lease */
typedef struct y_cit_udhcpd_T_udhcpd_static_leases_lease_ {
    dlq_hdr_t qhdr;
    xmlChar *mac;
    xmlChar * ip_address;
} y_cit_udhcpd_T_udhcpd_static_leases_lease;

/* container /udhcpd/static-leases */
typedef struct y_cit_udhcpd_T_udhcpd_static_leases_ {
    dlq_hdr_t lease;
} y_cit_udhcpd_T_udhcpd_static_leases;

/* container /udhcpd/range */
typedef struct y_cit_udhcpd_T_udhcpd_range_ {
    xmlChar * start;
    xmlChar * end;
} y_cit_udhcpd_T_udhcpd_range;

/* container /udhcpd */
typedef struct y_cit_udhcpd_T_udhcpd_ {
    boolean running;
    xmlChar *interface;
    xmlChar * subnet_mask;
    xmlChar * router;
    y_cit_udhcpd_T_udhcpd_dns dns;
    xmlChar *hostname;
    uint32 lease_time;
    y_cit_udhcpd_T_udhcpd_static_leases static_leases;
    y_cit_udhcpd_T_udhcpd_range range;
} y_cit_udhcpd_T_udhcpd;

/* cit-udhcpd module init 1 */
extern status_t
    y_cit_udhcpd_init (
        const xmlChar *modname,
        const xmlChar *revision);

/* cit-udhcpd module init 2 */
extern status_t
    y_cit_udhcpd_init2 (void);

/* cit-udhcpd module cleanup */
extern void
    y_cit_udhcpd_cleanup (void);

#endif