/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_obj.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lomasse <lomasse@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/12 22:09:28 by lomasse           #+#    #+#             */
/*   Updated: 2020/08/12 22:22:50 by lomasse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../Includes/ObjReader.h"

void    free_obj(t_obj *obj) // Need ptr before
{
    int i;
    ft_memdel((void **)(&obj->v));
    ft_memdel((void **)(&obj->vt));
    ft_memdel((void **)(&obj->vn));
    ft_memdel((void **)(&obj->vp));
    i = -1;
    // while (++i < obj->size_face[0])
    // {
    //     if (i < obj->face[i].size)
    //         ft_memdel((void **)(&obj->face[i].i_v));
    //     if (i < obj->size_vt[0])
    //         ft_memdel((void **)(&obj->face[i].i_vt));
    //     if (i < obj->size_vn[0])
    //         ft_memdel((void **)(&obj->face[i].i_vn));
    // }
    ft_memdel((void **)(&obj->face));
}