	THUMB_FUNC_START sub_0810E158
sub_0810E158: @ 0x0810E158
	push {r4,lr}
	add r4, r0, #0
	lsl r4, r4, #24
	lsr r4, r4, #24
	ldr r2, _0810E198  @ =gRam
	ldr r0, _0810E19C  @ =0x0000096C
	add r1, r2, r0
	mov r0, #2
	strh r0, [r1]
	ldr r1, _0810E1A0  @ =0x00000FB2
	add r0, r2, r1
	add r0, r4, r0
	ldrb r1, [r0]
	ldr r0, _0810E1A4  @ =0x00000F92
	add r2, r2, r0
	add r2, r4, r2
	lsl r1, r1, #1
	ldrb r2, [r2]
	add r1, r1, r2
	lsl r1, r1, #4
	ldr r0, _0810E1A8  @ =gUnknown_0817CF68
	add r1, r1, r0
	add r0, r4, #0
	bl sub_080C94D0
	add r0, r4, #0
	bl sub_080C6230
	pop {r4}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0810E198:
	.4byte gRam
_0810E19C:
	.4byte 0x0000096C
_0810E1A0:
	.4byte 0x00000FB2
_0810E1A4:
	.4byte 0x00000F92
_0810E1A8:
	.4byte gUnknown_0817CF68
	THUMB_FUNC_END sub_0810E158

