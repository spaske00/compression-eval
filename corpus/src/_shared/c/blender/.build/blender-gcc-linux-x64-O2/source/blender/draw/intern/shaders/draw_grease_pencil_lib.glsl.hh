static void metadata_draw_grease_pencil_lib_glsl_tmp(GPUSource &source, GPUFunctionDictionary *g_functions, GPUPrintFormatMap *g_formats) {
  source.add_builtin(metadata::Builtin(15153218239913697414LLU));
  source.add_builtin(metadata::Builtin(10639428544751590930LLU));
  source.add_dependency("draw_object_infos_infos.hh");
  source.add_dependency("draw_model_lib.glsl");
  source.add_dependency("draw_object_infos_lib.glsl");
  source.add_dependency("draw_view_lib.glsl");
  source.add_dependency("gpu_shader_math_constants_lib.glsl");
  source.add_dependency("gpu_shader_math_matrix_transform_lib.glsl");
  source.add_dependency("gpu_shader_math_vector_lib.glsl");
  source.add_dependency("gpu_shader_math_vector_safe_lib.glsl");
  source.add_dependency("gpu_shader_utildefines_lib.glsl");
  UNUSED_VARS(source, g_functions, g_formats);
}
