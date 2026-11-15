	THUMB_FUNC_START sub_080E3728
sub_080E3728: @ 0x080E3728
	push {r4-r6,lr}
	lsl r0, r0, #24
	lsr r5, r0, #24
	ldr r2, _080E3798  @ =gRam
	ldr r1, _080E379C  @ =0x00001052
	add r0, r2, r1
	add r0, r5, r0
	ldrb r1, [r0]
	add r1, r1, #1
	strb r1, [r0]
	mov r3, #15
	and r3, r3, r1
	add r6, r2, #0
	cmp r3, #0
	bne _080E375C
	ldr r2, _080E37A0  @ =0x00000F62
	add r0, r6, r2
	add r1, r5, r0
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	lsl r0, r0, #24
	lsr r0, r0, #24
	cmp r0, #2
	bne _080E375C
	strb r3, [r1]
_080E375C:
	add r0, r6, #0
	ldr r2, _080E37A4  @ =0x00000FB2
	add r1, r0, r2
	add r1, r5, r1
	ldrb r4, [r1]
	ldr r1, _080E37A8  @ =0x00000FF2
	add r0, r0, r1
	add r0, r5, r0
	ldrb r0, [r0]
	cmp r0, #72
	bne _080E3778
	add r0, r4, #4
	lsl r0, r0, #24
	lsr r4, r0, #24
_080E3778:
	ldr r0, _080E37AC  @ =0x00000F92
	add r2, r6, r0
	add r2, r5, r2
	ldr r3, _080E37B0  @ =gUnknown_08176918
	sub r0, r0, #48
	add r1, r6, r0
	add r1, r5, r1
	lsl r0, r4, #2
	ldrb r1, [r1]
	add r0, r0, r1
	add r0, r0, r3
	ldrb r0, [r0]
	strb r0, [r2]
	pop {r4-r6}
	pop {r0}
	bx r0
_080E3798:
	.4byte gRam
_080E379C:
	.4byte 0x00001052
_080E37A0:
	.4byte 0x00000F62
_080E37A4:
	.4byte 0x00000FB2
_080E37A8:
	.4byte 0x00000FF2
_080E37AC:
	.4byte 0x00000F92
_080E37B0:
	.4byte gUnknown_08176918
	THUMB_FUNC_END sub_080E3728

