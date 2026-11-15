	THUMB_FUNC_START sub_08077ED0
sub_08077ED0: @ 0x08077ED0
	push {lr}
	ldr r1, _08077EF8  @ =gUnknown_0814FB70
	ldr r2, _08077EFC  @ =gRam
	ldr r3, _08077F00  @ =0x000009C6
	add r0, r2, r3
	ldrh r0, [r0]
	add r0, r0, r1
	ldrb r0, [r0]
	cmp r0, #0
	bne _08077F08
	ldr r1, _08077F04  @ =gUnknown_08150A78
	add r3, r3, #246
	add r0, r2, r3
	ldrh r0, [r0]
	lsl r0, r0, #2
	add r0, r0, r1
	ldr r0, [r0]
	bl _call_via_r0
	b _08077F1A
_08077EF8:
	.4byte gUnknown_0814FB70
_08077EFC:
	.4byte gRam
_08077F00:
	.4byte 0x000009C6
_08077F04:
	.4byte gUnknown_08150A78
_08077F08:
	ldr r1, _08077F20  @ =gUnknown_08150A9C
	ldr r3, _08077F24  @ =0x00000ABC
	add r0, r2, r3
	ldrh r0, [r0]
	lsl r0, r0, #2
	add r0, r0, r1
	ldr r0, [r0]
	bl _call_via_r0
_08077F1A:
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08077F20:
	.4byte gUnknown_08150A9C
_08077F24:
	.4byte 0x00000ABC
	THUMB_FUNC_END sub_08077ED0

