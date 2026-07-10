static void metadata_workbench_prepass_bsl_hh_tmp(GPUSource &source, GPUFunctionDictionary *g_functions, GPUPrintFormatMap *g_formats) {
  source.add_builtin(metadata::Builtin(14282344787161568979LLU));
  source.add_builtin(metadata::Builtin(14282344787161568979LLU));
  source.add_builtin(metadata::Builtin(10639428544751590930LLU));
  source.add_builtin(metadata::Builtin(14282344787161568979LLU));
  source.add_builtin(metadata::Builtin(10639428544751590930LLU));
  source.add_dependency("draw_view_infos.hh");
  source.add_dependency("draw_curves_lib.glsl");
  source.add_dependency("draw_model.bsl.hh");
  source.add_dependency("draw_pointcloud_lib.glsl");
  source.add_dependency("draw_view.bsl.hh");
  source.add_dependency("draw_view_clipping_lib.glsl");
  source.add_dependency("gpu_shader_math_base_lib.glsl");
  source.add_dependency("workbench_common.bsl.hh");
  source.add_dependency("workbench_image.bsl.hh");
  source.add_dependency("workbench_matcap.bsl.hh");
  source.add_dependency("workbench_material.bsl.hh");
  source.add_dependency("workbench_world_light.bsl.hh");
  UNUSED_VARS(source, g_functions, g_formats);
}
