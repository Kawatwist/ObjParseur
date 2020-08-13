/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_obj.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lomasse <lomasse@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/08 20:58:20 by lomasse           #+#    #+#             */
/*   Updated: 2020/08/09 19:53:57 by lomasse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../Includes/ObjReader.h"

int     init_obj(t_obj *obj)
{
	if (obj == NULL)
		return (-1);
	obj->id = 0;
	obj->sub_id = 0;
	obj->path = NULL;
	obj->face = NULL;
	obj->v = NULL;
	obj->vt = NULL;
	obj->vn = NULL;
	obj->vp = NULL;
	obj->next = NULL;
	getobj(obj);
	return (0);
}