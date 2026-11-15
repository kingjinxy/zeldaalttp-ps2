	THUMB_FUNC_START sub_080793C0
sub_080793C0: @ 0x080793C0
	push {r4,lr}
	lsl r1, r1, #24
	lsr r1, r1, #24
	ldr r4, _08079400  @ =gRam
	ldr r3, _08079404  @ =0x00000C9B
	add r2, r4, r3
	strb r0, [r2]
	ldr r2, _08079408  @ =0x00000C99
	add r0, r4, r2
	strb r1, [r0]
	sub r3, r3, #1
	add r0, r4, r3
	strb r1, [r0]
	bl sub_0812E8DC
	mov r0, #202
	lsl r0, r0, #4
	add r1, r4, r0
	ldrb r0, [r1]
	strh r0, [r1]
	ldr r2, _0807940C  @ =0x0000099B
	add r4, r4, r2
	ldrb r0, [r4]
	add r0, r0, #1
	strb r0, [r4]
	bl sub_08133438
	bl sub_080795C8
	pop {r4}
	pop {r0}
	bx r0
_08079400:
	.4byte gRam
_08079404:
	.4byte 0x00000C9B
_08079408:
	.4byte 0x00000C99
_0807940C:
	.4byte 0x0000099B
	THUMB_FUNC_END sub_080793C0

