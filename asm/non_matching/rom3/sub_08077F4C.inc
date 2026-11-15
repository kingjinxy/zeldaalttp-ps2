	THUMB_FUNC_START sub_08077F4C
sub_08077F4C: @ 0x08077F4C
	push {lr}
	ldr r1, _08077F74  @ =gUnknown_0814FB70
	ldr r2, _08077F78  @ =gRam
	ldr r3, _08077F7C  @ =0x000009C6
	add r0, r2, r3
	ldrh r0, [r0]
	add r0, r0, r1
	ldrb r0, [r0]
	cmp r0, #0
	bne _08077F84
	ldr r1, _08077F80  @ =gUnknown_08150AC0
	add r3, r3, #246
	add r0, r2, r3
	ldrh r0, [r0]
	lsl r0, r0, #2
	add r0, r0, r1
	ldr r0, [r0]
	bl _call_via_r0
	b _08077F96
_08077F74:
	.4byte gUnknown_0814FB70
_08077F78:
	.4byte gRam
_08077F7C:
	.4byte 0x000009C6
_08077F80:
	.4byte gUnknown_08150AC0
_08077F84:
	ldr r1, _08077F9C  @ =gUnknown_08150AE4
	ldr r3, _08077FA0  @ =0x00000ABC
	add r0, r2, r3
	ldrh r0, [r0]
	lsl r0, r0, #2
	add r0, r0, r1
	ldr r0, [r0]
	bl _call_via_r0
_08077F96:
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08077F9C:
	.4byte gUnknown_08150AE4
_08077FA0:
	.4byte 0x00000ABC
	THUMB_FUNC_END sub_08077F4C

