static void metadata_eevee_lightprobe_display_bsl_hh_tmp(GPUSource &source, GPUFunctionDictionary *g_functions, GPUPrintFormatMap *g_formats) {
  source.add_builtin(metadata::Builtin(10639428544751590930LLU));
  source.add_builtin(metadata::Builtin(10639428544751590930LLU));
  source.add_builtin(metadata::Builtin(10639428544751590930LLU));
  source.add_dependency("draw_view.bsl.hh");
  source.add_dependency("eevee_lightprobe_plane.bsl.hh");
  source.add_dependency("eevee_lightprobe_sphere.bsl.hh");
  source.add_dependency("eevee_lightprobe_volume.bsl.hh");
  source.add_dependency("eevee_reverse_z_lib.bsl.hh");
  source.add_dependency("gpu_shader_math_matrix_transform_lib.glsl");
  UNUSED_VARS(source, g_functions, g_formats);
}
