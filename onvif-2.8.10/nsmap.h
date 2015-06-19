
#include "soapH.h"
SOAP_NMAC struct Namespace namespaces[] =
{
	{"SOAP-ENV", "http://www.w3.org/2003/05/soap-envelope", "http://schemas.xmlsoap.org/soap/envelope/", NULL},
	{"SOAP-ENC", "http://www.w3.org/2003/05/soap-encoding", "http://schemas.xmlsoap.org/soap/encoding/", NULL},
	{"xsi", "http://www.w3.org/2001/XMLSchema-instance", "http://www.w3.org/*/XMLSchema-instance", NULL},
	{"xsd", "http://www.w3.org/2001/XMLSchema", "http://www.w3.org/*/XMLSchema", NULL},
	{"wsa", "http://schemas.xmlsoap.org/ws/2004/08/addressing", NULL, NULL},
	{"wsdd", "http://schemas.xmlsoap.org/ws/2005/04/discovery", NULL, NULL},
	{"wsa5", "http://www.w3.org/2005/08/addressing", "http://schemas.xmlsoap.org/ws/2004/08/addressing", NULL},
	{"c14n", "http://www.w3.org/2001/10/xml-exc-c14n#", NULL, NULL},
	{"wsu", "http://docs.oasis-open.org/wss/2004/01/oasis-200401-wss-wssecurity-utility-1.0.xsd", NULL, NULL},
	{"xenc", "http://www.w3.org/2001/04/xmlenc#", NULL, NULL},
	{"wsc", "http://schemas.xmlsoap.org/ws/2005/02/sc", NULL, NULL},
	{"ds", "http://www.w3.org/2000/09/xmldsig#", NULL, NULL},
	{"wsse", "http://docs.oasis-open.org/wss/2004/01/oasis-200401-wss-wssecurity-secext-1.0.xsd", "http://docs.oasis-open.org/wss/oasis-wss-wssecurity-secext-1.1.xsd", NULL},
	{"xmime", "http://tempuri.org/xmime.xsd", NULL, NULL},
	{"xop", "http://www.w3.org/2004/08/xop/include", NULL, NULL},
	{"wsrfbf", "http://docs.oasis-open.org/wsrf/bf-2", NULL, NULL},
	{"tt", "http://www.onvif.org/ver10/schema", NULL, NULL},
	{"wstop", "http://docs.oasis-open.org/wsn/t-1", NULL, NULL},
	{"wsrfr", "http://docs.oasis-open.org/wsrf/r-2", NULL, NULL},
    //{"ns1", "http://www.onvif.org/ver10/events/wsdl/PullPointSubscriptionBinding", NULL, NULL},
    //{"ns10", "http://www.onvif.org/ver10/network/wsdl/DiscoveryLookupBinding", NULL, NULL},
	{"ns11", "http://www.onvif.org/ver20/analytics/wsdl/RuleEngineBinding", NULL, NULL},
	{"ns12", "http://www.onvif.org/ver20/analytics/wsdl/AnalyticsEngineBinding", NULL, NULL},
	{"tan", "http://www.onvif.org/ver20/analytics/wsdl", NULL, NULL},
	{"ns2", "http://www.onvif.org/ver10/events/wsdl/EventBinding", NULL, NULL},
	{"tev", "http://www.onvif.org/ver10/events/wsdl", NULL, NULL},
	{"ns3", "http://www.onvif.org/ver10/events/wsdl/SubscriptionManagerBinding", NULL, NULL},
	{"ns4", "http://www.onvif.org/ver10/events/wsdl/NotificationProducerBinding", NULL, NULL},
	{"ns5", "http://www.onvif.org/ver10/events/wsdl/NotificationConsumerBinding", NULL, NULL},
    //{"ns6", "http://www.onvif.org/ver10/events/wsdl/PullPointBinding", NULL, NULL},
    //{"ns7", "http://www.onvif.org/ver10/events/wsdl/CreatePullPointBinding", NULL, NULL},
    //{"ns8", "http://www.onvif.org/ver10/events/wsdl/PausableSubscriptionManagerBinding", NULL, NULL},
    //{"wsnt", "http://docs.oasis-open.org/wsn/b-2", NULL, NULL},
	{"ns9", "http://www.onvif.org/ver10/network/wsdl/RemoteDiscoveryBinding", NULL, NULL},
    {"dn", "http://www.onvif.org/ver10/network/wsdl", NULL, NULL},
    {"tds", "http://www.onvif.org/ver10/device/wsdl", NULL, NULL},
    {"timg", "http://www.onvif.org/ver20/imaging/wsdl", NULL, NULL},
    {"tmd", "http://www.onvif.org/ver10/deviceIO/wsdl", NULL, NULL},
    {"tptz", "http://www.onvif.org/ver20/ptz/wsdl", NULL, NULL},
    {"trt", "http://www.onvif.org/ver10/media/wsdl", NULL, NULL},
	{NULL, NULL, NULL, NULL}
};



SOAP_NMAC struct Namespace discoverynamespaces[] =
{
    {"SOAP-ENV", "http://www.w3.org/2003/05/soap-envelope", "http://schemas.xmlsoap.org/soap/envelope/", NULL},
    {"SOAP-ENC", "http://www.w3.org/2003/05/soap-encoding", "http://schemas.xmlsoap.org/soap/encoding/", NULL},
    {"xsi", "http://www.w3.org/2001/XMLSchema-instance", "http://www.w3.org/*/XMLSchema-instance", NULL},
    {"xsd", "http://www.w3.org/2001/XMLSchema", "http://www.w3.org/*/XMLSchema", NULL},
    {"wsa", "http://schemas.xmlsoap.org/ws/2004/08/addressing", NULL, NULL},
    {"wsdd", "http://schemas.xmlsoap.org/ws/2005/04/discovery", NULL, NULL},
    {"wsa5", "http://www.w3.org/2005/08/addressing", "http://schemas.xmlsoap.org/ws/2004/08/addressing", NULL},
    {"tds", "http://www.onvif.org/ver10/device/wsdl", NULL, NULL},
    {"dn", "http://www.onvif.org/ver10/network/wsdl", NULL, NULL},
    {NULL, NULL, NULL, NULL}
};
