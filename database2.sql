-- Table: public.users

-- DROP TABLE public.users;

CREATE TABLE public.users
(
  login "char"[] NOT NULL,
  name "char" NOT NULL,
  surname "char" NOT NULL,
  patronymic "char",
  "date of birth" timestamp without time zone,
  password_id bigint NOT NULL,
  CONSTRAINT pk_login PRIMARY KEY (login),
  CONSTRAINT fk_password_id FOREIGN KEY (password_id)
      REFERENCES public."user's password" (password_id) MATCH SIMPLE
      ON UPDATE NO ACTION ON DELETE NO ACTION
)
WITH (
  OIDS=FALSE
);
ALTER TABLE public.users
  OWNER TO postgres;
