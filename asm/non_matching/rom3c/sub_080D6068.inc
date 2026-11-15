	THUMB_FUNC_START sub_080D6068
sub_080D6068: @ 0x080D6068
	push {r4-r6,lr}
	sub sp, sp, #4
	lsl r0, r0, #24
	lsr r4, r0, #24
	add r6, r4, #0
	ldr r5, _080D60C8  @ =gRam
	ldr r1, _080D60CC  @ =0x00001172
	add r0, r5, r1
	add r0, r4, r0
	mov r1, #0
	strb r1, [r0]
	mov r0, sp
	add r1, r4, #0
	bl sub_080C4948
	ldr r1, _080D60D0  @ =0x00000FC2
	add r0, r5, r1
	add r2, r4, r0
	ldrb r0, [r2]
	cmp r0, #0
	bne _080D609E
	ldr r0, _080D60D4  @ =0x00000F52
	add r1, r5, r0
	add r1, r4, r1
	ldrb r0, [r1]
	sub r0, r0, #1
	strb r0, [r1]
_080D609E:
	ldrb r2, [r2]
	lsr r2, r2, #4
	ldr r0, _080D60D8  @ =0x00000F92
	add r1, r5, r0
	add r1, r6, r1
	ldr r0, _080D60DC  @ =gUnknown_0817524C
	add r0, r2, r0
	ldrb r0, [r0]
	strb r0, [r1]
	ldr r0, _080D60E0  @ =0x00000F82
	add r1, r5, r0
	add r1, r6, r1
	ldr r0, _080D60E4  @ =gUnknown_0817525C
	add r2, r2, r0
	ldrb r0, [r2]
	strb r0, [r1]
	add sp, sp, #4
	pop {r4-r6}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080D60C8:
	.4byte gRam
_080D60CC:
	.4byte 0x00001172
_080D60D0:
	.4byte 0x00000FC2
_080D60D4:
	.4byte 0x00000F52
_080D60D8:
	.4byte 0x00000F92
_080D60DC:
	.4byte gUnknown_0817524C
_080D60E0:
	.4byte 0x00000F82
_080D60E4:
	.4byte gUnknown_0817525C
	THUMB_FUNC_END sub_080D6068

