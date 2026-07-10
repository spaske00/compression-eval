static void metadata_eevee_forward_lib_bsl_hh_tmp(GPUSource &source, GPUFunctionDictionary *g_functions, GPUPrintFormatMap *g_formats) {
  source.add_dependency("eevee_geom_infos.hh");
  source.add_dependency("draw_model.bsl.hh");
  source.add_dependency("eevee_colorspace_lib.bsl.hh");
  source.add_dependency("eevee_light_eval.bsl.hh");
  source.add_dependency("eevee_lightprobe.bsl.hh");
  source.add_dependency("eevee_lightprobe_plane.bsl.hh");
  source.add_dependency("eevee_nodetree_closures_lib.glsl");
  source.add_dependency("eevee_reverse_z_lib.bsl.hh");
  source.add_dependency("eevee_subsurface_lib.bsl.hh");
  source.add_dependency("gpu_shader_codegen_lib.glsl");
  UNUSED_VARS(source, g_functions, g_formats);
}
