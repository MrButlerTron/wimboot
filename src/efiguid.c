/*
 * Copyright (C) 2014 Michael Brown <mbrown@fensystems.co.uk>.
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License as
 * published by the Free Software Foundation; either version 2 of the
 * License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA
 * 02110-1301, USA.
 */

/**
 * @file
 *
 * EFI GUIDs
 *
 */

#include "wimboot.h"
#include "efi.h"
#include "efi/Protocol/LoadedImage.h"
#include "efi/Protocol/SimpleFileSystem.h"

/** Loaded image protocol GUID */
EFI_GUID efi_loaded_image_protocol_guid
	= EFI_LOADED_IMAGE_PROTOCOL_GUID;

/** Simple file system protocol GUID */
EFI_GUID efi_simple_file_system_protocol_guid
	= EFI_SIMPLE_FILE_SYSTEM_PROTOCOL_GUID;
