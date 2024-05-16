-- Table: public."user's password"

-- DROP TABLE public."user's password";

CREATE TABLE public."user's password"
(
  password_id integer NOT NULL DEFAULT nextval('"user''s password_password_id_seq"'::regclass),
  password "char" NOT NULL,
  CONSTRAINT pk_password_id PRIMARY KEY (password_id)
)
WITH (
  OIDS=FALSE
);
ALTER TABLE public."user's password"
  OWNER TO postgres;
