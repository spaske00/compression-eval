static void metadata_workbench_composite_bsl_hh_tmp(GPUSource &source, GPUFunctionDictionary *g_functions, GPUPrintFormatMap *g_formats) {
  source.add_builtin(metadata::Builtin(10639428544751590930LLU));
  source.add_dependency("draw_view_lib.glsl");
  source.add_dependency("gpu_shader_fullscreen_lib.glsl");
  source.add_dependency("workbench_cavity.bsl.hh");
  source.add_dependency("workbench_common.bsl.hh");
  source.add_dependency("workbench_curvature.bsl.hh");
  source.add_dependency("workbench_defines.hh");
  source.add_dependency("workbench_matcap.bsl.hh");
  source.add_dependency("workbench_world_light.bsl.hh");
  UNUSED_VARS(source, g_functions, g_formats);
}
