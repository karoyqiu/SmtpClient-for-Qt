#ifndef SMTPEXPORTS_H
#define SMTPEXPORTS_H

#if defined(SMTP_BUILD_STATIC)
#define SMTP_EXPORT
#elif defined(SMTP_BUILD)
#define SMTP_EXPORT Q_DECL_EXPORT
#else
#define SMTP_EXPORT Q_DECL_IMPORT
#endif

#endif // SMTPEXPORTS_H
