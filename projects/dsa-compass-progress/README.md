# DSA Compass — Saved Progress

This folder contains the **exact HTML/CSS/JavaScript source for the progress-saving page** deployed at:

**[Save your progress](https://dsa-compass-exact.vercel.app/progress)**

Website: [DSA Compass](https://dsa-compass-exact.vercel.app/)

The frontend was retrieved from the live Vercel deployment on November 11, 2026. This folder does **not** contain the original ChatGPT-hosted DSA Compass application, its backend, or its private account data. The public site is a reverse proxy of the original site, while `/progress` is an additional self-contained page.

## What it does

- Email/password sign-in and registration through Supabase Auth.
- Stores per-user problem IDs, solved/in-progress status, and notes in Supabase.
- Automatically saves edited notes, with device-local draft recovery.
- Allows users to reload their saved progress from another device.
- Keeps the original DSA Compass website and animations unchanged.

## Files

- [progress.html](progress.html): the exact deployed progress page (HTML, CSS, JavaScript).
- [schema.sql](schema.sql): the table definition and per-user Row Level Security policies used for saved data.

## Architecture and security

The browser calls Supabase using its **public publishable key**. No privileged database keys or service-role credentials belong in this repository.

Authentication: Supabase Auth  
Storage: PostgreSQL table `public.dsa_saved_progress`  
Access control: RLS policies restrict read, create, update, and delete to `auth.uid() = user_id`. Anonymous table access is revoked.

The schema file documents the progress table; do **not** apply it to an existing database without reviewing migrations and existing user data.

**Important:** The separate progress page does not automatically import solved problems or notes from the original hosted application's account. Save problems using the progress page's form. The full live website is not reproduced by the files in this folder.

## Deployment

On the current Vercel project, the `/progress` URL serves `progress.html`. For another static host, serve `progress.html` as a static file and configure the Supabase URL, public publishable key, and redirect URLs for your own environment. Never commit private service-role keys or account credentials.
