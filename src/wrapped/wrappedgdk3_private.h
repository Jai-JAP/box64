#if !(defined(GO) && defined(GOM) && defined(GO2) && defined(DATA))
#error meh!
#endif

//GOM(gdk_add_client_message_filter, vFpBp)
//GO(gdk_add_option_entries_libgtk_only, 
//GO(gdk_app_launch_context_get_type, 
//GO(gdk_app_launch_context_new, 
//GO(gdk_app_launch_context_set_desktop, 
//GO(gdk_app_launch_context_set_display, 
//GO(gdk_app_launch_context_set_icon, 
//GO(gdk_app_launch_context_set_icon_name, 
//GO(gdk_app_launch_context_set_screen, 
//GO(gdk_app_launch_context_set_timestamp, 
GO(gdk_atom_intern, pFpi)
GO(gdk_atom_intern_static_string, pFp)
GO(gdk_atom_name, pFp)
GO(gdk_axis_use_get_type, iFv)
GO(gdk_beep, vFv)
GO(gdk_bitmap_create_from_data, pFppii)
GO(gdk_byte_order_get_type, iFv)
GO(gdk_cairo_create, pFp)
GO(gdk_cairo_draw_from_gl, vFppiiiiiii)
GO(gdk_cairo_get_clip_rectangle, iFpp)
GO(gdk_cairo_get_drawing_context, pFp)
GO(gdk_cairo_rectangle, vFpp)
GO(gdk_cairo_region, vFpp)
GO(gdk_cairo_region_create_from_surface, pFp)
GO(gdk_cairo_reset_clip, vFpp)
GO(gdk_cairo_set_source_color, vFpp)
GO(gdk_cairo_set_source_pixbuf, vFppdd)
GO(gdk_cairo_set_source_pixmap, vFppdd)
GO(gdk_cairo_set_source_rgba, vFpp)
GO(gdk_cairo_set_source_window, vFppdd)
GO(gdk_cairo_surface_create_from_pixbuf, pFpip)
//GO(gdk_cap_style_get_type, 
//GO(gdk_char_height, 
//GO(gdk_char_measure, 
//GO(gdk_char_width, 
//GO(gdk_char_width_wc, 
GO(gdk_color_alloc, iFpp)
GO(gdk_color_black, iFpp)
GO(gdk_color_change, iFpp)
GO(gdk_color_copy, pFp)
GO(gdk_color_equal, iFpp)
GO(gdk_color_free, vFp)
GO(gdk_color_get_type, iFv)
GO(gdk_color_hash, uFp)
GO(gdk_colormap_alloc_color, iFppii)
GO(gdk_colormap_alloc_colors, iFppiiip)
GO(gdk_colormap_change, vFpi)
GO(gdk_colormap_free_colors, vFppi)
GO(gdk_colormap_get_screen, pFp)
GO(gdk_colormap_get_system, pFv)
GO(gdk_colormap_get_system_size, iFv)
GO(gdk_colormap_get_type, iFv)
GO(gdk_colormap_get_visual, pFp)
GO(gdk_colormap_new, pFpi)
GO(gdk_colormap_query_color, vFpLp)
GO(gdk_colormap_ref, pFp)
GO(gdk_colormap_unref, vFp)
GO(gdk_color_parse, iFpp)
GO(gdk_colors_alloc, iFpipipi)
GO(gdk_colors_free, vFppiL)
GO(gdk_colors_store, vFppi)
GO(gdk_color_to_string, pFp)
GO(gdk_color_white, iFpp)
GO(gdk_crossing_mode_get_type, iFv)
GO(gdk_cursor_get_cursor_type, iFp)
GO(gdk_cursor_get_display, pFp)
GO(gdk_cursor_get_image, pFp)
GO(gdk_cursor_get_type, iFv)
GO(gdk_cursor_new, pFi)
GO(gdk_cursor_new_for_display, pFpi)
GO(gdk_cursor_new_from_name, pFpp)
GO(gdk_cursor_new_from_pixbuf, pFppii)
GO(gdk_cursor_new_from_pixmap, pFppppii)
GO(gdk_cursor_ref, pFp)
GO(gdk_cursor_type_get_type, iFv)
GO(gdk_cursor_unref, vFp)
GO(gdk_device_free_history, vFpi)
GO(gdk_device_get_axis, iFppip)
GO(gdk_device_get_axis_use, iFpu)
GO(gdk_device_get_core_pointer, pFv)
GO(gdk_device_get_has_cursor, iFp)
GO(gdk_device_get_history, iFppuupp)
GO(gdk_device_get_key, vFpupp)
GO(gdk_device_get_mode, iFp)
GO(gdk_device_get_name, pFp)
GO(gdk_device_get_n_axes, iFp)
GO(gdk_device_get_n_keys, iFp)
GO(gdk_device_get_source, iFp)
GO(gdk_device_get_state, vFpppp)
GO(gdk_device_get_type, iFv)
GO(gdk_device_set_axis_use, vFpui)
GO(gdk_device_set_key, vFpuui)
GO(gdk_device_set_mode, iFpi)
GO(gdk_device_set_source, vFpi)
GO(gdk_devices_list, pFv)
//GOM(gdk_display_add_client_message_filter, vFEpppp)
GO(gdk_display_beep, vFp)
GO(gdk_display_close, vFp)
GO(gdk_display_flush, vFp)
GO(gdk_display_get_core_pointer, pFp)
GO(gdk_display_get_default, pFv)
GO(gdk_display_get_default_cursor_size, uFp)
GO(gdk_display_get_default_group, pFp)
GO(gdk_display_get_default_screen, pFp)
GO(gdk_display_get_default_seat, pFp)
GO(gdk_display_get_event, pFp)
GO(gdk_display_get_maximal_cursor_size, vFppp)
GO(gdk_display_get_name, pFp)
GO(gdk_display_get_n_screens, iFp)
GO(gdk_display_get_pointer, vFppppp)
GO(gdk_display_get_screen, pFpi)
GO(gdk_display_get_type, iFv)
GO(gdk_display_get_window_at_pointer, pFppp)
GO(gdk_display_is_closed, iFp)
GO(gdk_display_keyboard_ungrab, vFpu)
GO(gdk_display_list_devices, pFp)
GO(gdk_display_manager_get, pFv)
GO(gdk_display_manager_get_default_display, pFp)
GO(gdk_display_manager_get_type, iFv)
GO(gdk_display_manager_list_displays, pFp)
GO(gdk_display_manager_set_default_display, vFpp)
GO(gdk_display_map_keycode, iFpuppp)
GO(gdk_display_open, pFp)
//GO(gdk_display_open_default_libgtk_only, 
GO(gdk_display_peek_event, pFp)
GO(gdk_display_pointer_is_grabbed, iFp)
GO(gdk_display_pointer_ungrab, vFpu)
GO(gdk_display_put_event, vFpp)
GO(gdk_display_request_selection_notification, iFpp)
GO(gdk_display_set_double_click_distance, vFpu)
GO(gdk_display_set_double_click_time, vFpu)
//GOM(gdk_display_set_pointer_hooks, pFEpp)     // GdkDisplayPointerHooks needs wrapping
GO(gdk_display_store_clipboard, vFppupi)
GO(gdk_display_supports_clipboard_persistence, iFp)
GO(gdk_display_supports_composite, iFp)
GO(gdk_display_supports_cursor_alpha, iFp)
GO(gdk_display_supports_cursor_color, iFp)
GO(gdk_display_supports_input_shapes, iFp)
GO(gdk_display_supports_selection_notification, iFp)
GO(gdk_display_supports_shapes, iFp)
GO(gdk_display_sync, vFp)
GO(gdk_display_warp_pointer, vFppii)
GO(gdk_drag_abort, vFpu)
GO(gdk_drag_action_get_type, iFv)
GO(gdk_drag_begin, pFpp)
GO(gdk_drag_context_get_actions, iFp)
GO(gdk_drag_context_get_dest_window, pFp)
GO(gdk_drag_context_get_protocol, iFp)
GO(gdk_drag_context_get_selected_action, iFp)
GO(gdk_drag_context_get_source_window, pFp)
GO(gdk_drag_context_get_suggested_action, iFp)
GO(gdk_drag_context_get_type, iFv)
GO(gdk_drag_context_list_targets, pFp)
GO(gdk_drag_context_new, pFv)
GO(gdk_drag_context_ref, vFp)
GO(gdk_drag_context_unref, vFp)
GO(gdk_drag_drop, vFpu)
GO(gdk_drag_drop_succeeded, iFp)
GO(gdk_drag_find_window, vFppiipp)
GO(gdk_drag_find_window_for_screen, vFpppiipp)
GO(gdk_drag_get_protocol, pFpp)
GO(gdk_drag_get_protocol_for_display, pFppp)
GO(gdk_drag_get_selection, pFp)
GO(gdk_drag_motion, iFppiiiiiu)
GO(gdk_drag_protocol_get_type, iFv)
GO(gdk_drag_status, vFpiu)
GO(gdk_drawable_copy_to_image, pFppiiiiii)
GO(gdk_drawable_get_clip_region, pFp)
GO(gdk_drawable_get_colormap, pFp)
GO(gdk_drawable_get_data, pFpp)
GO(gdk_drawable_get_depth, iFp)
GO(gdk_drawable_get_display, pFp)
GO(gdk_drawable_get_image, pFpiiii)
GO(gdk_drawable_get_screen, pFp)
GO(gdk_drawable_get_size, vFppp)
GO(gdk_drawable_get_type, iFv)
GO(gdk_drawable_get_visible_region, pFp)
GO(gdk_drawable_get_visual, pFp)
GO(gdk_drawable_ref, pFp)
GO(gdk_drawable_set_colormap, vFpp)
//GOM(gdk_drawable_set_data, vFEpppB)
GO(gdk_drawable_unref, vFp)
GO(gdk_draw_arc, vFppiiiiiii)
GO(gdk_draw_drawable, vFpppiiiiii)
GO(gdk_draw_glyphs, vFpppiip)
GO(gdk_draw_glyphs_transformed, vFppppiip)
GO(gdk_draw_gray_image, vFppiiiiipi)
GO(gdk_draw_image, vFpppiiiiii)
GO(gdk_draw_indexed_image, vFppiiiiipip)
GO(gdk_draw_layout, vFppiip)
GO(gdk_draw_layout_line, vFppiip)
GO(gdk_draw_layout_line_with_colors, vFppiippp)
GO(gdk_draw_layout_with_colors, vFppiippp)
GO(gdk_draw_line, vFppiiii)
GO(gdk_draw_lines, vFpppi)
GO(gdk_draw_pixbuf, vFpppiiiiiiiii)
GO(gdk_draw_point, vFppii)
GO(gdk_draw_points, vFpppi)
GO(gdk_draw_polygon, vFppipi)
GO(gdk_draw_rectangle, vFppiiiii)
GO(gdk_draw_rgb_32_image, vFppiiiiipi)
GO(gdk_draw_rgb_32_image_dithalign, vFppiiiiipiii)
GO(gdk_draw_rgb_image, vFppiiiiipi)
GO(gdk_draw_rgb_image_dithalign, vFppiiiiipiii)
GO(gdk_draw_segments, vFpppi)
GO(gdk_draw_string, vFpppiip)
GO(gdk_draw_text, vFpppiipi)
GO(gdk_draw_text_wc, vFpppiipi)
GO(gdk_draw_trapezoids, vFpppi)
GO(gdk_drop_finish, vFpiu)
GO(gdk_drop_reply, vFpiu)
GO(gdk_error_trap_pop, iFv)
GO(gdk_error_trap_push, vFv)
GO(gdk_event_copy, pFp)
GO(gdk_event_free, vFp)
GO(gdk_event_get, pFv)
GO(gdk_event_get_axis, iFpip)
GO(gdk_event_get_coords, iFppp)
GO(gdk_event_get_graphics_expose, pFp)
GO(gdk_event_get_modifier_state, iFp)
GO(gdk_event_get_root_coords, iFppp)
GO(gdk_event_get_screen, pFp)
GO(gdk_event_get_state, iFpp)
GO(gdk_event_get_surface, pFp)
GO(gdk_event_get_time, uFp)
GO(gdk_event_get_type, iFv)
GOM(gdk_event_handler_set, vFEppp)
GO(gdk_event_mask_get_type, iFv)
GO(gdk_event_new, pFi)
GO(gdk_event_peek, pFv)
GO(gdk_event_put, vFp)
GO(gdk_event_request_motions, vFp)
GO(gdk_event_send_client_message, iFpp)
GO(gdk_event_send_client_message_for_display, iFppp)
GO(gdk_event_send_clientmessage_toall, vFp)
GO(gdk_event_set_screen, vFpp)
GO(gdk_events_pending, iFv)
//GO(gdk_event_type_get_type, 
GO(gdk_exit, vFi)
//GO(gdk_extension_mode_get_type, 
//GO(gdk_fill_get_type, 
//GO(gdk_fill_rule_get_type, 
//GO(gdk_filter_return_get_type, 
GO(gdk_flush, vFv)
//GO(gdk_font_equal, 
//GO(gdk_font_from_description, 
//GO(gdk_font_from_description_for_display, 
//GO(gdk_font_get_display, 
GO(gdk_font_get_type, iFv)
//GO(gdk_font_id, 
//GO(gdk_font_load, 
//GO(gdk_font_load_for_display, 
//GO(gdk_font_ref, 
//GO(gdk_fontset_load, 
//GO(gdk_fontset_load_for_display, 
//GO(gdk_font_type_get_type, 
//GO(gdk_font_unref, 
GO(gdk_free_compound_text, vFp)
GO(gdk_free_text_list, vFp)
GO(gdk_function_get_type, iFv)
GO(gdk_gc_copy, vFpp)
GO(gdk_gc_get_colormap, pFp)
GO(gdk_gc_get_screen, pFp)
GO(gdk_gc_get_type, iFv)
GO(gdk_gc_get_values, vFpp)
GO(gdk_gc_new, pFp)
GO(gdk_gc_new_with_values, pFppu)
GO(gdk_gc_offset, vFpii)
GO(gdk_gc_ref, pFp)
GO(gdk_gc_set_background, vFpp)
GO(gdk_gc_set_clip_mask, vFpp)
GO(gdk_gc_set_clip_origin, vFpii)
GO(gdk_gc_set_clip_rectangle, vFpp)
GO(gdk_gc_set_clip_region, vFpp)
GO(gdk_gc_set_colormap, vFpp)
GO(gdk_gc_set_dashes, vFpipi)
GO(gdk_gc_set_exposures, vFpi)
GO(gdk_gc_set_fill, vFpi)
GO(gdk_gc_set_font, vFpp)
GO(gdk_gc_set_foreground, vFpp)
GO(gdk_gc_set_function,vFpi) 
GO(gdk_gc_set_line_attributes, vFpiiii)
GO(gdk_gc_set_rgb_bg_color, vFpp)
GO(gdk_gc_set_rgb_fg_color, vFpp)
GO(gdk_gc_set_stipple, vFpp)
GO(gdk_gc_set_subwindow, vFpi)
GO(gdk_gc_set_tile, vFpp)
GO(gdk_gc_set_ts_origin, vFpii)
GO(gdk_gc_set_values, vFppu)
GO(gdk_gc_unref, vFp)
GO(gdk_gc_values_mask_get_type, iFv)
GO(gdk_get_default_root_window, pFv)
GO(gdk_get_display, pFv)
GO(gdk_get_display_arg_name, pFv)
GO(gdk_get_program_class, pFv)
GO(gdk_get_show_events, iFv)
GO(gdk_get_use_xshm, iFv)
GO(gdk_grab_status_get_type, iFv)
GO(gdk_gravity_get_type, iFv)
GO(gdk_image_get, pFpiiii)
GO(gdk_image_get_bits_per_pixel, WFp)
GO(gdk_image_get_byte_order, iFp)
GO(gdk_image_get_bytes_per_line, WFp)
GO(gdk_image_get_bytes_per_pixel, WFp)
GO(gdk_image_get_colormap, pFp)
GO(gdk_image_get_depth, WFp)
GO(gdk_image_get_height, iFp)
GO(gdk_image_get_image_type, iFp)
GO(gdk_image_get_pixel, uFpii)
GO(gdk_image_get_pixels, pFp)
GO(gdk_image_get_type, iFv)
GO(gdk_image_get_visual, pFp)
GO(gdk_image_get_width, iFp)
GO(gdk_image_new, pFipii)
GO(gdk_image_new_bitmap, pFppii)
GO(gdk_image_put_pixel, vFpiiu)
GO(gdk_image_ref, pFp)
GO(gdk_image_set_colormap, vFpp)
GO(gdk_image_type_get_type, iFv)
GO(gdk_image_unref, vFp)
GOM(gdk_init, vFEpp)
GOM(gdk_init_check, iFEpp)
GOM(gdk_input_add, iFEiipp)
GOM(gdk_input_add_full, iFEiippp)
GO(gdk_input_condition_get_type, iFv)
GO(gdk_input_mode_get_type, iFv)
GO(gdk_input_remove, vFi)
GO(gdk_input_set_extension_events, vFpii)
GO(gdk_input_source_get_type, iFv)
GO(gdk_join_style_get_type, iFv)
GO(gdk_key_event_get_keycode, uFp)
GO(gdk_key_event_get_keyval, uFp)
GO(gdk_keyboard_grab, iFpiu)
//GO(gdk_keyboard_grab_info_libgtk_only, 
GO(gdk_keyboard_ungrab, vFu)
GO(gdk_keymap_add_virtual_modifiers, vFpp)
GO(gdk_keymap_get_caps_lock_state, iFp)
GO(gdk_keymap_get_default, pFv)
GO(gdk_keymap_get_direction, iFp)
GO(gdk_keymap_get_entries_for_keycode, iFpuppp)
GO(gdk_keymap_get_entries_for_keyval, iFpupp)
GO(gdk_keymap_get_for_display, pFp)
GO(gdk_keymap_get_type, iFv)
GO(gdk_keymap_have_bidi_layouts, iFp)
GO(gdk_keymap_lookup_key, uFpp)
GO(gdk_keymap_map_virtual_modifiers, iFpp)
GO(gdk_keymap_translate_keyboard_state, iFpuiipppp)
GO(gdk_keyval_convert_case, vFupp)
GO(gdk_keyval_from_name, uFp)
GO(gdk_keyval_is_lower, iFu)
GO(gdk_keyval_is_upper, iFu)
GO(gdk_keyval_name, pFu)
GO(gdk_keyval_to_lower, uFu)
GO(gdk_keyval_to_unicode, uFu)
GO(gdk_keyval_to_upper, uFu)
GO(gdk_line_style_get_type, iFv)
GO(gdk_list_visuals, pFv)
//GO(gdk_mbstowcs, 
GO(gdk_memory_texture_new, pFiiipL)
GO(gdk_modifier_type_get_type, iFv)
GO(gdk_net_wm_supports, iFp)
GO(gdk_notify_startup_complete, vFv)
GO(gdk_notify_startup_complete_with_id, vFp)
GO(gdk_notify_type_get_type, iFv)
GO(gdk_offscreen_window_get_embedder, pFp)
GO(gdk_offscreen_window_get_pixmap, pFp)
GO(gdk_offscreen_window_get_type, iFv)
GO(gdk_offscreen_window_set_embedder, vFpp)
GO(gdk_overlap_type_get_type, iFv)
GO(gdk_owner_change_get_type, iFv)
GO(gdk_paintable_get_intrinsic_height, iFp)
GO(gdk_paintable_get_intrinsic_width, iFp)
GO(gdk_paintable_get_type, pFv)
GO(gdk_paintable_snapshot, vFppdd)
GO(gdk_pango_attr_emboss_color_new, pFp)
GO(gdk_pango_attr_embossed_new, pFi)
GO(gdk_pango_attr_stipple_new, pFp)
GO(gdk_pango_context_get, pFv)
GO(gdk_pango_context_get_for_screen, pFp)
GO(gdk_pango_context_set_colormap, vFpp)
GO(gdk_pango_layout_get_clip_region, pFpiipi)
GO(gdk_pango_layout_line_get_clip_region, pFpiipi)
GO(gdk_pango_renderer_get_default, pFp)
GO(gdk_pango_renderer_get_type, iFv)
GO(gdk_pango_renderer_new, pFp)
GO(gdk_pango_renderer_set_drawable, vFpp)
GO(gdk_pango_renderer_set_gc, vFpp)
GO(gdk_pango_renderer_set_override_color, vFpip)
GO(gdk_pango_renderer_set_stipple, vFpip)
GO(gdk_parse_args, vFpp)
GO(gdk_pixbuf_get_from_drawable, pFpppiiiiii)
GO(gdk_pixbuf_get_from_image, pFpppiiiiii)
GO(gdk_pixbuf_render_pixmap_and_mask, vFpppi)
GO(gdk_pixbuf_render_pixmap_and_mask_for_colormap, vFppppi)
GO(gdk_pixbuf_render_threshold_alpha, vFppiiiiiii)
GO(gdk_pixbuf_render_to_drawable, vFpppiiiiiiiii)
GO(gdk_pixbuf_render_to_drawable_alpha, vFppiiiiiiiiiii)
GO(gdk_pixmap_colormap_create_from_xpm, pFppppp)
GO(gdk_pixmap_colormap_create_from_xpm_d, pFppppp)
GO(gdk_pixmap_create_from_data, pFppiiipp)
GO(gdk_pixmap_create_from_xpm, pFpppp)
GO(gdk_pixmap_create_from_xpm_d, pFpppp)
GO(gdk_pixmap_foreign_new, pFp)
GO(gdk_pixmap_foreign_new_for_display, pFpp)
GO(gdk_pixmap_foreign_new_for_screen, pFppiii)
GO(gdk_pixmap_get_size, vFppp)
GO(gdk_pixmap_get_type, iFv)
GO(gdk_pixmap_impl_x11_get_type, iFv)
GO(gdk_pixmap_lookup, pFp)
GO(gdk_pixmap_lookup_for_display, pFpp)
GO(gdk_pixmap_new, pFpiii)
GO(gdk_pointer_grab, iFpiippu)
//GO(gdk_pointer_grab_info_libgtk_only, 
GO(gdk_pointer_is_grabbed, iFv)
GO(gdk_pointer_ungrab, vFu)
//GO(gdk_pre_parse_libgtk_only, 
GO(gdk_property_change, vFpppiipi)
GO(gdk_property_delete, vFpp)
GO(gdk_property_get, iFpppLLipppp)
GO(gdk_property_state_get_type, iFv)
GO(gdk_prop_mode_get_type, iFv)
GO(gdk_query_depths, vFpp)
GO(gdk_query_visual_types, vFpp)
GO(gdk_rectangle_get_type, iFv)
GO(gdk_rectangle_intersect, iFppp)
GO(gdk_rectangle_union, vFppp)
GO(gdk_region_copy, pFp)
GO(gdk_region_destroy, vFpp)
GO(gdk_region_empty, iFp)
GO(gdk_region_equal, iFpp)
GO(gdk_region_get_clipbox, vFpp)
GO(gdk_region_get_rectangles, vFppp)
GO(gdk_region_intersect, vFpp)
GO(gdk_region_new, pFv)
GO(gdk_region_offset, vFpii)
GO(gdk_region_point_in, iFpii)
GO(gdk_region_polygon, pFpii)
GO(gdk_region_rectangle, pFp)
GO(gdk_region_rect_equal, iFpp)
GO(gdk_region_rect_in, iFpp)
GO(gdk_region_shrink, vFpii)
//GOM(gdk_region_spans_intersect_foreach, vFppiiBp)
GO(gdk_region_subtract, vFpp)
GO(gdk_region_union, vFpp)
GO(gdk_region_union_with_rect, vFpp)
GO(gdk_region_xor, vFpp)
GO(gdk_rgb_cmap_free, vFp)
GO(gdk_rgb_cmap_new, pFpi)
GO(gdk_rgb_colormap_ditherable, iFp)
GO(gdk_rgb_ditherable, iFv)
GO(gdk_rgb_dither_get_type, iFv)
GO(gdk_rgb_find_color, vFpp)
GO(gdk_rgb_gc_set_background, vFpu)
GO(gdk_rgb_gc_set_foreground, vFpu)
GO(gdk_rgb_get_colormap, pFv)
GO(gdk_rgb_get_visual, pFv)
GO(gdk_rgb_init, vFv)
GO(gdk_rgb_set_install, vFi)
GO(gdk_rgb_set_min_colors, vFi)
GO(gdk_rgb_set_verbose, vFi)
GO(gdk_rgb_xpixel_from_rgb, LFu)
GO(gdk_screen_broadcast_client_message, vFpp)
GO(gdk_screen_get_active_window, pFp)
GO(gdk_screen_get_default, pFv)
GO(gdk_screen_get_default_colormap, pFp)
GO(gdk_screen_get_display, pFp)
GO(gdk_screen_get_font_options, pFp)
GO(gdk_screen_get_height, iFp)
GO(gdk_screen_get_height_mm, iFp)
GO(gdk_screen_get_monitor_at_point, iFpii)
GO(gdk_screen_get_monitor_at_window, iFpp)
GO(gdk_screen_get_monitor_geometry, vFpip)
GO(gdk_screen_get_monitor_height_mm, iFpi)
GO(gdk_screen_get_monitor_plug_name, pFpi)
GO(gdk_screen_get_monitor_width_mm, iFpi)
GO(gdk_screen_get_n_monitors, iFp)
GO(gdk_screen_get_number, iFp)
GO(gdk_screen_get_primary_monitor, iFp)
GO(gdk_screen_get_resolution, dFp)
GO(gdk_screen_get_rgba_colormap, pFp)
GO(gdk_screen_get_rgba_visual, pFp)
GO(gdk_screen_get_rgb_colormap, pFp)
GO(gdk_screen_get_rgb_visual, pFp)
GO(gdk_screen_get_root_window, pFp)
GO(gdk_screen_get_setting, iFppp)
GO(gdk_screen_get_system_colormap, pFp)
GO(gdk_screen_get_system_visual, pFp)
GO(gdk_screen_get_toplevel_windows, pFp)
GO(gdk_screen_get_type, iFv)
GO(gdk_screen_get_width, iFp)
GO(gdk_screen_get_width_mm, iFp)
GO(gdk_screen_get_window_stack, pFp)
GO(gdk_screen_height, iFv)
GO(gdk_screen_height_mm, iFv)
GO(gdk_screen_is_composited, iFp)
GO(gdk_screen_list_visuals, pFp)
GO(gdk_screen_make_display_name, pFp)
GO(gdk_screen_set_default_colormap, vFpp)
GO(gdk_screen_set_font_options, vFpp)
GO(gdk_screen_set_resolution, vFpd)
GO(gdk_screen_width, iFv)
GO(gdk_screen_width_mm, iFv)
GO(gdk_scroll_direction_get_type, iFv)
GO(gdk_seat_get_keyboard, pFp)
GO(gdk_selection_convert, vFpppu)
GO(gdk_selection_owner_get, pFp)
GO(gdk_selection_owner_get_for_display, pFpp)
GO(gdk_selection_owner_set, iFppui)
GO(gdk_selection_owner_set_for_display, iFpppui)
GO(gdk_selection_property_get, iFpppp)
GO(gdk_selection_send_notify, vFppppu)
GO(gdk_selection_send_notify_for_display, vFpppppu)
GO(gdk_set_allowed_backends, vFp)
GO(gdk_set_double_click_time, vFu)
GO(gdk_set_locale, pFv)
//GOM(gdk_set_pointer_hooks, BFEB)
GO(gdk_set_program_class, vFp)
GO(gdk_set_show_events, vFi)
GO(gdk_set_sm_client_id, vFp)
GO(gdk_setting_action_get_type, iFv)
GO(gdk_setting_get, iFpp)
GO(gdk_set_use_xshm, vFi)
GO(gdk_spawn_command_line_on_screen, iFppp)
//GOM(gdk_spawn_on_screen, iFEppppipppp)
//GOM(gdk_spawn_on_screen_with_pipes, iFEppppippppppp)
GO(gdk_status_get_type, iFv)
//GO(gdk_string_extents, 
//GO(gdk_string_height, 
//GO(gdk_string_measure, 
GO(gdk_string_to_compound_text, iFppppp)
GO(gdk_string_to_compound_text_for_display, iFpppppp)
//GO(gdk_string_width, 
//GO(gdk_subwindow_mode_get_type, 
//GO(gdk_synthesize_window_state, 
//GO(gdk_test_render_sync, 
//GO(gdk_test_simulate_button, 
//GO(gdk_test_simulate_key, 
//GO(gdk_text_extents, 
//GO(gdk_text_extents_wc, 
//GO(gdk_text_height, 
//GO(gdk_text_measure, 
GO(gdk_text_property_to_text_list, iFpipip)
GO(gdk_text_property_to_text_list_for_display, iFppipip)
GO(gdk_text_property_to_utf8_list, iFpipip)
//GO(gdk_text_property_to_utf8_list_for_display, 
//GO(gdk_text_width, 
//GO(gdk_text_width_wc, 
GO(gdk_texture_download, vFppL)
GO(gdk_texture_get_width, uFp)
GO(gdk_texture_get_height, uFp)
//GOM(gdk_threads_add_idle, uFEpp)
//GOM(gdk_threads_add_idle_full, uFEippp)
//GOM(gdk_threads_add_timeout, uFEupp)
//GOM(gdk_threads_add_timeout_full, uFEiuppp)
//GOM(gdk_threads_add_timeout_seconds, uFEupp)
//GOM(gdk_threads_add_timeout_seconds_full, uFEiuppp)
GO(gdk_threads_enter, vFv)
GO(gdk_threads_init, vFv)
GO(gdk_threads_leave, vFv)
//GOM(gdk_threads_set_lock_functions, vFEpp)
GO(gdk_toplevel_get_type, pFv)
GO(gdk_unicode_to_keyval, uFu)
GO(gdk_utf8_to_compound_text, iFppppp)
GO(gdk_utf8_to_compound_text_for_display, iFpppppp)
GO(gdk_utf8_to_string_target, pFp)
GO(gdk_visibility_state_get_type, iFv)
GO(gdk_visual_get_best, pFv)
GO(gdk_visual_get_best_depth, iFv)
GO(gdk_visual_get_best_type, iFv)
GO(gdk_visual_get_best_with_both, pFii)
GO(gdk_visual_get_best_with_depth, pFi)
GO(gdk_visual_get_best_with_type, pFi)
GO(gdk_visual_get_bits_per_rgb, iFp)
GO(gdk_visual_get_blue_pixel_details, vFpppp)
GO(gdk_visual_get_byte_order, iFp)
GO(gdk_visual_get_colormap_size, iFp)
GO(gdk_visual_get_depth, iFp)
GO(gdk_visual_get_green_pixel_details, vFpppp)
GO(gdk_visual_get_red_pixel_details, vFpppp)
GO(gdk_visual_get_screen, pFp)
GO(gdk_visual_get_system, pFv)
GO(gdk_visual_get_type, iFv)
GO(gdk_visual_get_visual_type, iFp)
GO(gdk_visual_type_get_type, iFv)
GO(gdk_wayland_toplevel_set_transient_for_exported, iFpp)
GO(gdk_wayland_window_set_transient_for_exported, iFpp)
//GO(gdk_wcstombs, 
GOM(gdk_window_add_filter, vFEppp)
GO(gdk_window_at_pointer, pFpp)
//GO(gdk_window_attributes_type_get_type, 
GO(gdk_window_beep, vFp)
GO(gdk_window_begin_move_drag, vFpiiiu)
GO(gdk_window_begin_paint_rect, vFpp)
GO(gdk_window_begin_paint_region, vFpp)
GO(gdk_window_begin_resize_drag, vFpuiiiu)
GO(gdk_window_class_get_type, iFv)
GO(gdk_window_clear, vFp)
GO(gdk_window_clear_area, vFpiiii)
GO(gdk_window_clear_area_e, vFpiiii)
GO(gdk_window_configure_finished, vFp)
GO(gdk_window_constrain_size, vFpuiipp)
GO(gdk_window_coords_from_parent, vFpddpp)
GO(gdk_window_coords_to_parent, vFpddpp)
GO(gdk_window_create_similar_image_surface, pFpiiii)
GO(gdk_window_create_similar_surface, pFpiii)
GO(gdk_window_deiconify, vFp)
GO(gdk_window_destroy, vFp)
//GO(gdk_window_destroy_notify, 
//GO(gdk_window_edge_get_type, 
GO(gdk_window_enable_synchronized_configure, vFp)
GO(gdk_window_end_paint, vFp)
GO(gdk_window_ensure_native, iFp)
GO(gdk_window_flush, vFp)
GO(gdk_window_focus, vFpu)
GO(gdk_window_foreign_new, pFp)
GO(gdk_window_foreign_new_for_display, pFpp)
//GO(gdk_window_freeze_toplevel_updates_libgtk_only, 
GO(gdk_window_freeze_updates, vFp)
GO(gdk_window_fullscreen, vFp)
GO(gdk_window_geometry_changed, vFp)
GO(gdk_window_get_accept_focus, iFp)
GO(gdk_window_get_background_pattern, pFp)
GO(gdk_window_get_children, pFp)
GO(gdk_window_get_composited, iFp)
GO(gdk_window_get_cursor, pFp)
GO(gdk_window_get_decorations, iFpp)
GO(gdk_window_get_deskrelative_origin, iFppp)
GO(gdk_window_get_display, pFp)
GO(gdk_window_get_effective_parent, pFp)
GO(gdk_window_get_effective_toplevel, pFp)
GO(gdk_window_get_events, vFpi)
GO(gdk_window_get_focus_on_map, iFp)
GO(gdk_window_get_frame_extents, vFpp)
GO(gdk_window_get_geometry, vFpppppp)
GO(gdk_window_get_group, pFp)
GO(gdk_window_get_height, iFp)
GO(gdk_window_get_internal_paint_info, vFpppp)
GO(gdk_window_get_modal_hint, iFp)
GO(gdk_window_get_origin, iFppp)
GO(gdk_window_get_parent, pFp)
GO(gdk_window_get_pointer, pFpppp)
GO(gdk_window_get_position, vFppp)
GO(gdk_window_get_root_coords, vFpiipp)
GO(gdk_window_get_root_origin, vFppp)
GO(gdk_window_get_screen, pFp)
GO(gdk_window_get_state, iFp)
GO(gdk_window_get_toplevel, pFp)
GO(gdk_window_get_toplevels, pFp)
GO(gdk_window_get_type_hint, iFp)
GO(gdk_window_get_update_area, pFp)
GO(gdk_window_get_user_data, vFpp)
GO(gdk_window_get_visual, pFp)
GO(gdk_window_get_width, iFp)
GO(gdk_window_get_window_type, iFp)
GO(gdk_window_has_native, iFp)
GO(gdk_window_hide, vFp)
GO(gdk_window_hints_get_type, iFv)
GO(gdk_window_iconify, vFp)
GO(gdk_window_impl_get_type, iFv)
GO(gdk_window_impl_x11_get_type, iFv)
GO(gdk_window_input_shape_combine_mask, vFppii)
GO(gdk_window_input_shape_combine_region, vFppii)
//GOM(gdk_window_invalidate_maybe_recurse, vFEppBp)
GO(gdk_window_invalidate_rect, vFppi)
GO(gdk_window_invalidate_region, vFppi)
GO(gdk_window_is_destroyed, iFp)
GO(gdk_window_is_input_only, iFp)
GO(gdk_window_is_shaped, iFp)
GO(gdk_window_is_viewable, iFp)
GO(gdk_window_is_visible, iFp)
GO(gdk_window_lookup, pFp)
GO(gdk_window_lookup_for_display, pFpp)
GO(gdk_window_lower, vFp)
GO(gdk_window_maximize, vFp)
GO(gdk_window_merge_child_input_shapes, vFp)
GO(gdk_window_merge_child_shapes, vFp)
GO(gdk_window_move, vFpii)
GO(gdk_window_move_region, vFppii)
GO(gdk_window_move_resize, vFpiiii)
GO(gdk_window_new, pFppi)
GO(gdk_window_object_get_type, iFv)
GO(gdk_window_peek_children, pFp)
GO(gdk_window_process_all_updates, vFv)
GO(gdk_window_process_updates, vFpi)
GO(gdk_window_raise, vFp)
GO(gdk_window_redirect_to_drawable, vFppiiiiii)
GO(gdk_window_register_dnd, vFp)
GOM(gdk_window_remove_filter, vFEppp)
GO(gdk_window_remove_redirection, vFp)
GO(gdk_window_reparent, vFppii)
GO(gdk_window_resize, vFpii)
GO(gdk_window_restack, vFppi)
GO(gdk_window_scroll, vFpii)
GO(gdk_window_set_accept_focus, vFpi)
GO(gdk_window_set_background, vFpp)
GO(gdk_window_set_back_pixmap, vFppi)
GO(gdk_window_set_child_input_shapes, vFp)
GO(gdk_window_set_child_shapes, vFp)
GO(gdk_window_set_composited, vFpi)
GO(gdk_window_set_cursor, vFpp)
GO(gdk_window_set_debug_updates, vFi)
GO(gdk_window_set_decorations, vFpp)
GO(gdk_window_set_events, vFpp)
GO(gdk_window_set_focus_on_map, vFpi)
GO(gdk_window_set_functions, vFpu)
GO(gdk_window_set_geometry_hints, vFppi)
GO(gdk_window_set_group, vFpp)
GO(gdk_window_set_hints, vFpiiiiiii)
GO(gdk_window_set_icon, vFpppp)
GO(gdk_window_set_icon_list, vFpp)
GO(gdk_window_set_icon_name, vFpp)
GO(gdk_window_set_keep_above, vFpi)
GO(gdk_window_set_keep_below, vFpi)
GO(gdk_window_set_modal_hint, iFp)
GO(gdk_window_set_opacity, vFpi)
GO(gdk_window_set_override_redirect, vFpi)
GO(gdk_window_set_role, vFpp)
GO(gdk_window_set_skip_pager_hint, vFpi)
GO(gdk_window_set_skip_taskbar_hint, vFpi)
GO(gdk_window_set_startup_id, vFpp)
GO(gdk_window_set_static_gravities, iFpi)
GO(gdk_window_set_title, vFpp)
GO(gdk_window_set_transient_for, vFpp)
GO(gdk_window_set_type_hint, vFpi)
GO(gdk_window_set_urgency_hint, vFpi)
GO(gdk_window_set_user_data, vFpp)
GO(gdk_window_shape_combine_mask, vFppii)
GO(gdk_window_shape_combine_region, vFppii)
GO(gdk_window_show, vFp)
GO(gdk_window_show_unraised, vFp)
GO(gdk_window_state_get_type, iFv)
GO(gdk_window_stick, vFp)
//GO(gdk_window_thaw_toplevel_updates_libgtk_only, 
GO(gdk_window_thaw_updates, vFp)
GO(gdk_window_type_get_type, iFv)
GO(gdk_window_type_hint_get_type, iFv)
GO(gdk_window_unfullscreen, vFp)
GO(gdk_window_unmaximize, vFp)
GO(gdk_window_unstick, vFp)
GO(gdk_window_withdraw, vFp)
GO(gdk_wm_decoration_get_type, iFv)
GO(gdk_wm_function_get_type, iFv)
GO(gdk_x11_atom_to_xatom, pFp)
GO(gdk_x11_atom_to_xatom_for_display, pFpp)
GO(gdk_x11_colormap_foreign_new, pFpp)
GO(gdk_x11_colormap_get_xcolormap, pFp)
GO(gdk_x11_colormap_get_xdisplay, pFp)
GO(gdk_x11_cursor_get_xcursor, pFp)
GO(gdk_x11_cursor_get_xdisplay, pFp)
GO(gdk_x11_display_broadcast_startup_message, vFppppppppppppp)  //vaarg after 2 p
GO(gdk_x11_display_get_startup_notification_id, pFp)
GO(gdk_x11_display_get_type, iFv)
GO(gdk_x11_display_get_user_time, uFp)
GO(gdk_x11_display_get_xdisplay, pFp)
GO(gdk_x11_window_get_xid, LFp)
GO(gdk_x11_display_grab, vFp)
GO(gdk_x11_display_set_cursor_theme, vFppi)
//GO(gdk_x11_display_string_to_compound_text, 
//GO(gdk_x11_display_text_property_to_text_list, 
GO(gdk_x11_display_ungrab, vFp)
//GO(gdk_x11_display_utf8_to_compound_text, 
GO(gdk_x11_drawable_get_xdisplay, pFp)
GO(gdk_x11_drawable_get_xid, pFp)
GO(gdk_x11_font_get_name, pFp)
GO(gdk_x11_font_get_xdisplay, pFp)
GO(gdk_x11_font_get_xfont, pFp)
//GO(gdk_x11_free_compound_text, 
//GO(gdk_x11_free_text_list, 
GO(gdk_x11_gc_get_xdisplay, pFp)
GO(gdk_x11_gc_get_xgc, pFp)
GO(gdk_x11_get_default_root_xwindow, pFv)
GO(gdk_x11_get_default_screen, iFv)
GO(gdk_x11_get_default_xdisplay, pFv)
GO(gdk_x11_get_server_time, uFp)
GO(gdk_x11_get_xatom_by_name, pFp)
GO(gdk_x11_get_xatom_by_name_for_display, pFpp)
GO(gdk_x11_get_xatom_name, pFp)
GO(gdk_x11_get_xatom_name_for_display, pFpp)
GO(gdk_x11_grab_server, vFv)
GO(gdk_x11_image_get_xdisplay, pFp)
GO(gdk_x11_image_get_ximage, pFp)
GO(gdk_x11_lookup_xdisplay, pFp)
GO(gdk_x11_pixmap_get_drawable_impl, pFp)
GO(gdk_x11_register_standard_event_type, vFpii)
GO(gdk_x11_screen_get_monitor_output, pFpi)
GO(gdk_x11_screen_get_screen_number, iFp)
GO(gdk_x11_screen_get_window_manager_name, pFp)
GO(gdk_x11_screen_get_xscreen, pFp)
GO(gdk_x11_screen_lookup_visual, pFpp)
GO(gdk_x11_screen_supports_net_wm_hint, iFpp)
GO(gdk_x11_set_sm_client_id, vFp)
GO(gdk_x11_surface_get_xid, LFp)
GO(gdk_x11_ungrab_server, vFv)
GO(gdk_x11_visual_get_xvisual, pFp)
GO(gdk_x11_window_foreign_new_for_display, pFpp)
GO(gdk_x11_window_get_drawable_impl, pFp)
GO(gdk_x11_window_lookup_for_display, pFpp)
GO(gdk_x11_window_move_to_current_desktop, vFp)
GO(gdk_x11_window_set_user_time, vFpu)
GO(gdk_x11_xatom_to_atom, pFp)
GO(gdk_x11_xatom_to_atom_for_display, pFpp)
GO(gdkx_colormap_get, pFu)
GO(gdk_xid_table_lookup, pFp)
GO(gdk_xid_table_lookup_for_display, pFpp)
GO(gdkx_visual_get, pFp)

DATA(gdk_display, 4)        // no hack here...
DATA(gdk_threads_lock, 4)
DATA(gdk_threads_unlock, 4)

GO(dummy_set_child_property, vFppupp)       // to get vFppupp for gtkclass.c
GO(dummy_constructor, vFLup)    // to get vFlup for gtkclass.c