/*************************************************************************
 * Copyright (c) 2014 eProsima. All rights reserved.
 *
 * This copy of eProsima RTPS is licensed to you under the terms described in the
 * EPROSIMARTPS_LIBRARY_LICENSE file included in this distribution.
 *
 *************************************************************************/

/**
 * @file ReaderQos.cpp
 *
 *  Created on: May 22, 2014
 *      Author: Gonzalo Rodriguez Canosa
 *      email:  gonzalorodriguez@eprosima.com
 *              grcanosa@gmail.com  	
 */

#include "eprosimartps/qos/ReaderQos.h"

namespace eprosima {
namespace dds {


void ReaderQos::setQos(ReaderQos& qos, bool first_time)
{
	if(m_durability.kind != qos.m_durability.kind)
	{
		m_durability = qos.m_durability;
		m_durability.hasChanged = true;
	}
	if(m_deadline.period.to64time() != qos.m_deadline.period.to64time())
	{
		m_deadline = qos.m_deadline;
		m_deadline.hasChanged = true;
	}
	if(m_latencyBudget.duration.to64time() != qos.m_latencyBudget.duration.to64time())
	{
		m_latencyBudget = qos.m_latencyBudget;
		m_latencyBudget.hasChanged = true;
	}
	if(m_liveliness.lease_duration.to64time() != qos.m_liveliness.lease_duration.to64time() ||
			m_liveliness.kind != qos.m_liveliness.kind)
	{
		m_liveliness = qos.m_liveliness;
		m_liveliness.hasChanged = true;
	}
	if(m_reliability.kind != qos.m_reliability.kind && first_time)
	{
		m_reliability = qos.m_reliability;
		m_reliability.hasChanged = true;
	}
	if(m_ownership.kind != qos.m_ownership.kind)
	{
		m_ownership = qos.m_ownership;
		m_ownership.hasChanged = true;
	}
	if(m_destinationOrder.kind != qos.m_destinationOrder.kind)
	{
		m_destinationOrder = qos.m_destinationOrder;
		m_destinationOrder.hasChanged = true;
	}
	if(m_userData.data != qos.m_userData.data )
		{
		m_userData = qos.m_userData;
		m_userData.hasChanged = true;
		}
	if(m_timeBasedFilter.minimum_separation.to64time() != qos.m_timeBasedFilter.minimum_separation.to64time() )
	{
		m_timeBasedFilter = qos.m_timeBasedFilter;
		m_timeBasedFilter.hasChanged = true;
	}
	if(m_presentation.access_scope != qos.m_presentation.access_scope ||
			m_presentation.coherent_access != qos.m_presentation.coherent_access ||
			m_presentation.ordered_access != qos.m_presentation.ordered_access)
	{
		m_presentation = qos.m_presentation;
		m_presentation.hasChanged = true;
	}
	if(m_partition.name != qos.m_partition.name )
	{
		m_partition = qos.m_partition;
		m_partition.hasChanged = true;
	}
	if(m_topicData.value != qos.m_topicData.value )
	{
		m_topicData = qos.m_topicData;
		m_topicData.hasChanged = true;
	}
	if(m_groupData.value != qos.m_groupData.value )
	{
		m_groupData = qos.m_groupData;
		m_groupData.hasChanged = true;
	}
	if(m_durabilityService.history_kind != qos.m_durabilityService.history_kind ||
			m_durabilityService.history_depth != qos.m_durabilityService.history_depth ||
			m_durabilityService.max_instances != qos.m_durabilityService.max_instances ||
			m_durabilityService.max_samples != qos.m_durabilityService.max_samples||
			m_durabilityService.max_samples_per_instance != qos.m_durabilityService.max_samples_per_instance ||
			m_durabilityService.service_cleanup_delay.to64time() != qos.m_durabilityService.service_cleanup_delay.to64time()
	)
	{
		m_durabilityService = qos.m_durabilityService;
		m_durabilityService.hasChanged = true;
	}
	if(m_lifespan.duration.to64time() != qos.m_lifespan.duration.to64time() )
	{
		m_lifespan = qos.m_lifespan;
		m_lifespan.hasChanged = true;
	}
}

} /* namespace dds */
} /* namespace eprosima */
