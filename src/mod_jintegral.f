c     ****************************************************************
c     *                                                              *
c     *                    f-90 module j_data                        *
c     *                                                              *
c     *                       written by : rhd                       *
c     *                                                              *
c     *              last modified : 11/19/22 rhd                    *
c     *     define the variables and data structures to support      *
c     *     j-integral and i-integral computations                   *
c     *                                                              *
c     ****************************************************************
c
c
c
      module j_data
c
c                     Note: there are allocatable variables here
c                           various of these are created during
c                           input of a domain definition and
c                           computation of the J, I integrals.
c
c                           routine didrive_release deallocates
c                           all of them.
c
c                           if you add new one here, fix
c                           didrive_release
c
c                     max sets and front nodes should be
c                     same value
c
      integer, parameter :: max_node_set=200,
     &                      max_front_nodes=1000, max_domain_rings=300,
     &                      size_j_values=8, size_i_values=8
c
c                     double precision/reals
c
       double precision ::
     & crack_plane_normal(3), crack_front_tangent(3),
     & domain_rot(3,3), domain_min_j, domain_max_j, domain_avg_j,
     & static_min, static_max, static_avg,  front_q_area, front_length,
     & front_coords(3,max_front_nodes),
     & domain_min_i(10), domain_max_i(10), domain_avg_i(10),
     & cf_tractions(3), box_tol_relat, e33_front, e_front, nu_front,
     & crack_curvature(7), front_node_displ(3,max_front_nodes)
c
c                     integers
c
      integer ::
     & num_front_nodes, front_nodes(max_front_nodes), front_order,
     & nowring, ring_list(max_domain_rings), domain_type, last_compr,
     & num_auto_rings, domain_origin,
     & ring_count, front_list_length
      integer, allocatable, dimension (:,:) :: compr_q_list
      integer, allocatable, dimension (:)   :: q_element_maps
      integer, allocatable, dimension (:)   :: count_alpha
      integer, allocatable, dimension (:)   :: extrap_counts
      integer, allocatable, dimension (:)   :: front_element_list
c
c                     reals
c
      real, allocatable, dimension(:) ::   q_values, seg_snode_e,
     &                                           seg_snode_nu
      real, allocatable, dimension(:,:) :: snode_alpha_ij
c
c                     doubles
c
       double precision, allocatable, dimension(:) :: swd_at_nodes,
     &        front_J_ratios(:), front_J_values(:)
c
       double precision, allocatable, dimension(:,:) ::
     &      strain_at_nodes, j_storage, j_from_ks, ks_from_j,
     &      displ_grad_at_nodes
       double precision,
     & allocatable, dimension(:,:,:) :: i_storage
c
c                     logicals
c
      logical ::
     & verify_front, symmetric_domain, qvals_given, rings_given,
     & print_totals, print_elem_values, q_vals_linear,
     & debug_driver, debug_elements, one_point_rule, static_j,
     & ignore_face_loads, first_domain, omit_crack_front_elems,
     & fgm_e, fgm_nu, j_geonl_formulation, j_linear_formulation,
     & output_packet_j, output_packet_i, comput_j, comput_i,
     & out_pstress, out_pstrain, cf_traction_flags(3), j_to_k,
     & process_temperatures, face_loading, tangent_vector_defined,
     & process_initial_state, temperatures_on_model,
     & compute_domain_extents
c
      logical, allocatable, dimension (:) :: block_seg_curves
c
c                     characters
c
      character(len=24) :: domain_id
c
c                     defined types
c
      type :: nodes_in_set
        integer :: node_count
        integer, allocatable, dimension(:) :: node_list
      end type
      type(nodes_in_set), save, allocatable,
     &                            dimension(:) :: domain_node_sets
      type(nodes_in_set), save, allocatable,
     &                            dimension(:) :: expanded_front_nodes
c
c                     J cutoff, adaptive step sizes, 
c                     automatic step 2 sizing variables
c
c
      logical :: J_cutoff_active, J_cutoff_restart_file, 
     &           J_cutoff_exceeded, J_ratio_adaptive_steps,
     &           J_compute_step_2_automatic, J_diff_at_2_set
      integer :: J_cutoff_num_frnt_positions, J_count_exceeded,
     &           J_cutoff_now_frnt_position,
     &           J_cutoff_step_1_num_patterns,
     &           J_cutoff_frnt_pos_max_ratio
      double precision :: J_cutoff_ratio, J_cutoff_e, J_cutoff_nu,
     &                    J_cutoff_Je_step_1(max_front_nodes),
     &                    J_cutoff_step_1_constraint_factor,
     &                    J_load_ratio_this_step, J_max_step_1,
     &                    J_cutoff_max_value, J_ratio_last_step,
     &                    J_target_diff, J_limit_ratio_increase,
     &                    J_limit_ratio_decrease,
     &                    J_auto_step_2_delta_K, Kr_target_diff,
     &                    J_max_now_step, J_diff_at_2, Kr_min_limit
      type :: step_1_patterns
        character*8 :: id
        double precision :: factor
      end type
      type(step_1_patterns), dimension(10) :: patterns_step_1
c
      end module


