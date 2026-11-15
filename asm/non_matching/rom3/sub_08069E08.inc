	THUMB_FUNC_START sub_08069E08
sub_08069E08: @ 0x08069E08
	ldr r0, _08069EB4  @ =gRam
	ldr r2, _08069EB8  @ =0x00001A88
	add r1, r0, r2
	ldrh r2, [r1]
	ldr r3, _08069EBC  @ =0x0000050C
	add r1, r0, r3
	strh r2, [r1]
	ldr r2, _08069EC0  @ =0x04000008
	ldr r3, _08069EC4  @ =0x00001A8A
	add r1, r0, r3
	ldrh r1, [r1]
	strh r1, [r2]
	ldr r2, _08069EC8  @ =0x00001A8C
	add r1, r0, r2
	ldrh r2, [r1]
	ldr r3, _08069ECC  @ =0x00000514
	add r1, r0, r3
	strh r2, [r1]
	ldr r2, _08069ED0  @ =0x00001A8E
	add r1, r0, r2
	ldrh r2, [r1]
	add r3, r3, #2
	add r1, r0, r3
	strh r2, [r1]
	ldr r2, _08069ED4  @ =0x00001A90
	add r1, r0, r2
	ldrh r2, [r1]
	add r3, r3, #2
	add r1, r0, r3
	strh r2, [r1]
	ldr r2, _08069ED8  @ =0x00001A92
	add r1, r0, r2
	ldrh r2, [r1]
	add r3, r3, #6
	add r1, r0, r3
	strh r2, [r1]
	ldr r2, _08069EDC  @ =0x00001A96
	add r1, r0, r2
	ldrb r2, [r1]
	ldr r3, _08069EE0  @ =0x00000998
	add r1, r0, r3
	strb r2, [r1]
	ldr r2, _08069EE4  @ =0x00001A97
	add r1, r0, r2
	ldrb r2, [r1]
	add r3, r3, #1
	add r1, r0, r3
	strb r2, [r1]
	ldr r2, _08069EE8  @ =0x00001A94
	add r1, r0, r2
	ldrh r2, [r1]
	mov r3, #162
	lsl r3, r3, #3
	add r1, r0, r3
	strh r2, [r1]
	ldr r2, _08069EEC  @ =0x00001AC2
	add r1, r0, r2
	ldrb r2, [r1]
	ldr r3, _08069EF0  @ =0x00000C99
	add r1, r0, r3
	strb r2, [r1]
	ldr r2, _08069EF4  @ =0x00001AC3
	add r1, r0, r2
	ldrb r2, [r1]
	add r3, r3, #2
	add r1, r0, r3
	strb r2, [r1]
	ldr r2, _08069EF8  @ =0x00001AC4
	add r1, r0, r2
	ldrb r2, [r1]
	sub r3, r3, #1
	add r1, r0, r3
	strb r2, [r1]
	ldr r2, _08069EFC  @ =0x00001AC5
	add r1, r0, r2
	ldrb r2, [r1]
	ldr r3, _08069F00  @ =0x000009B4
	add r1, r0, r3
	strb r2, [r1]
	ldr r2, _08069F04  @ =0x00001AC6
	add r1, r0, r2
	ldrb r1, [r1]
	add r3, r3, #1
	add r0, r0, r3
	strb r1, [r0]
	bx lr
_08069EB4:
	.4byte gRam
_08069EB8:
	.4byte 0x00001A88
_08069EBC:
	.4byte 0x0000050C
_08069EC0:
	.4byte 0x04000008
_08069EC4:
	.4byte 0x00001A8A
_08069EC8:
	.4byte 0x00001A8C
_08069ECC:
	.4byte 0x00000514
_08069ED0:
	.4byte 0x00001A8E
_08069ED4:
	.4byte 0x00001A90
_08069ED8:
	.4byte 0x00001A92
_08069EDC:
	.4byte 0x00001A96
_08069EE0:
	.4byte 0x00000998
_08069EE4:
	.4byte 0x00001A97
_08069EE8:
	.4byte 0x00001A94
_08069EEC:
	.4byte 0x00001AC2
_08069EF0:
	.4byte 0x00000C99
_08069EF4:
	.4byte 0x00001AC3
_08069EF8:
	.4byte 0x00001AC4
_08069EFC:
	.4byte 0x00001AC5
_08069F00:
	.4byte 0x000009B4
_08069F04:
	.4byte 0x00001AC6
	THUMB_FUNC_END sub_08069E08

