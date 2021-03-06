/**
 * @file parse.h
 * @author Joe Wingbermuehle
 * @date 2004-2006
 *
 * @brief Header file for the JWM configuration parser.
 *
 */

#ifndef PARSE_H
#define PARSE_H

struct Menu;

/** Parse a configuration file.
 * @param fileName The file to parse.
 */
void ParseConfig(const char *fileName);

/** Parse a dynamic menu.
 * @param command The command to generate the menu.
 * @return The menu.
 */
struct Menu *ParseDynamicMenu(const char *command);

#endif /* PARSE_H */

