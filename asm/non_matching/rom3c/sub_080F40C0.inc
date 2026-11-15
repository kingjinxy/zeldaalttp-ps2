	THUMB_FUNC_START sub_080F40C0
sub_080F40C0: @ 0x080F40C0
	push {r4-r6,lr}
	lsl r0, r0, #24
	lsr r0, r0, #24
	ldr r3, _080F4114  @ =gRam
	ldr r1, _080F4118  @ =0x0000096C
	add r2, r3, r1
	mov r1, #2
	strh r1, [r2]
	ldr r2, _080F411C  @ =0x00000FB2
	add r1, r3, r2
	add r1, r0, r1
	ldrb r1, [r1]
	ldr r4, _080F4120  @ =0x00000F92
	add r2, r3, r4
	add r2, r0, r2
	lsl r1, r1, #1
	ldrb r2, [r2]
	add r1, r1, r2
	lsl r1, r1, #25
	lsr r1, r1, #24
	ldr r5, _080F4124  @ =gUnknown_08179630
	add r2, r1, r5
	ldrb r4, [r2]
	ldr r6, _080F4128  @ =0x00000CDE
	add r2, r3, r6
	strh r4, [r2]
	add r2, r1, #1
	add r2, r2, r5
	ldrb r2, [r2]
	mov r4, #206
	lsl r4, r4, #4
	add r3, r3, r4
	strh r2, [r3]
	lsl r1, r1, #3
	ldr r2, _080F412C  @ =gUnknown_081795B0
	add r1, r1, r2
	bl sub_080C94D0
	pop {r4-r6}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080F4114:
	.4byte gRam
_080F4118:
	.4byte 0x0000096C
_080F411C:
	.4byte 0x00000FB2
_080F4120:
	.4byte 0x00000F92
_080F4124:
	.4byte gUnknown_08179630
_080F4128:
	.4byte 0x00000CDE
_080F412C:
	.4byte gUnknown_081795B0
	THUMB_FUNC_END sub_080F40C0

