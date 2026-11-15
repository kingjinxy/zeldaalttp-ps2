	THUMB_FUNC_START sub_08107204
sub_08107204: @ 0x08107204
	push {r4-r6,lr}
	lsl r0, r0, #24
	lsr r6, r0, #24
	lsl r1, r1, #24
	lsr r1, r1, #24
	add r0, r1, #0
	add r1, r6, #0
	bl sub_080CA538
	add r5, r0, #0
	cmp r5, #0
	blt _0810724A
	lsl r4, r5, #24
	lsr r4, r4, #24
	add r0, r4, #0
	bl sub_080CAE50
	ldr r0, _08107250  @ =gRam
	ldr r2, _08107254  @ =0x00000F82
	add r1, r0, r2
	add r1, r5, r1
	ldr r2, _08107258  @ =gUnknown_0817BF8D
	ldr r3, _0810725C  @ =0x000015FA
	add r0, r0, r3
	ldrb r0, [r0]
	add r0, r0, r2
	ldrb r0, [r0]
	strb r0, [r1]
	add r0, r6, #0
	mov r1, #89
	bl sub_080CF140
	add r0, r4, #0
	bl sub_08107294
_0810724A:
	pop {r4-r6}
	pop {r0}
	bx r0
_08107250:
	.4byte gRam
_08107254:
	.4byte 0x00000F82
_08107258:
	.4byte gUnknown_0817BF8D
_0810725C:
	.4byte 0x000015FA
	THUMB_FUNC_END sub_08107204

