static void metadata_eevee_geom_mesh_bsl_hh_tmp(GPUSource &source, GPUFunctionDictionary *g_functions, GPUPrintFormatMap *g_formats) {
  source.add_builtin(metadata::Builtin(14282344787161568979LLU));
  source.add_builtin(metadata::Builtin(18151572126051718857LLU));
  source.add_builtin(metadata::Builtin(6414359333558685774LLU));
  source.add_builtin(metadata::Builtin(10639428544751590930LLU));
  source.add_dependency("eevee_geom_infos.hh");
  source.add_dependency("eevee_nodetree_infos.hh");
  source.add_dependency("draw_model.bsl.hh");
  source.add_dependency("eevee_attributes_mesh_lib.glsl");
  source.add_dependency("eevee_nodetree_vert_lib.glsl");
  source.add_dependency("eevee_pipeline.bsl.hh");
  source.add_dependency("eevee_reverse_z_lib.bsl.hh");
  source.add_dependency("eevee_surf_common.bsl.hh");
  source.add_dependency("eevee_velocity.bsl.hh");
  UNUSED_VARS(source, g_functions, g_formats);
}
