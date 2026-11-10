-- DSA Compass saved-progress data model.
-- Read and review before applying: the live Supabase project already contains this table.
CREATE TABLE IF NOT EXISTS public.dsa_saved_progress (
  user_id uuid NOT NULL REFERENCES auth.users(id) ON DELETE CASCADE,
  problem_id text NOT NULL CHECK (char_length(problem_id) BETWEEN 1 AND 240),
  status text NOT NULL DEFAULT 'in_progress' CHECK (status IN ('in_progress', 'solved')),
  notes text NOT NULL DEFAULT '' CHECK (char_length(notes) <= 30000),
  updated_at timestamptz NOT NULL DEFAULT now(),
  PRIMARY KEY (user_id, problem_id)
);

ALTER TABLE public.dsa_saved_progress ENABLE ROW LEVEL SECURITY;

REVOKE ALL ON public.dsa_saved_progress FROM anon;
GRANT SELECT, INSERT, UPDATE, DELETE ON public.dsa_saved_progress TO authenticated;

DROP POLICY IF EXISTS dsa_saved_progress_read_own ON public.dsa_saved_progress;
CREATE POLICY dsa_saved_progress_read_own
  ON public.dsa_saved_progress FOR SELECT TO authenticated
  USING ((SELECT auth.uid()) = user_id);

DROP POLICY IF EXISTS dsa_saved_progress_create_own ON public.dsa_saved_progress;
CREATE POLICY dsa_saved_progress_create_own
  ON public.dsa_saved_progress FOR INSERT TO authenticated
  WITH CHECK ((SELECT auth.uid()) = user_id);

DROP POLICY IF EXISTS dsa_saved_progress_update_own ON public.dsa_saved_progress;
CREATE POLICY dsa_saved_progress_update_own
  ON public.dsa_saved_progress FOR UPDATE TO authenticated
  USING ((SELECT auth.uid()) = user_id)
  WITH CHECK ((SELECT auth.uid()) = user_id);

DROP POLICY IF EXISTS dsa_saved_progress_delete_own ON public.dsa_saved_progress;
CREATE POLICY dsa_saved_progress_delete_own
  ON public.dsa_saved_progress FOR DELETE TO authenticated
  USING ((SELECT auth.uid()) = user_id);
