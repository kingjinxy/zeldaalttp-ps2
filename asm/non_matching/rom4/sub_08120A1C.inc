	THUMB_FUNC_START sub_08120A1C
sub_08120A1C: @ 0x08120A1C
	push {r4-r6,lr}
	lsl r0, r0, #24
	lsr r6, r0, #24
	ldr r0, _08120AA0  @ =gRam
	ldr r1, _08120AA4  @ =0x00000E1F
	add r0, r0, r1
	add r0, r6, r0
	ldrb r4, [r0]
_08120A2C:
	ldr r0, _08120AA8  @ =gUnknown_02006880
	add r1, r4, r0
	ldrb r0, [r1]
	sub r0, r0, #1
	strb r0, [r1]
	lsl r0, r0, #24
	cmp r0, #0
	bge _08120A56
	mov r0, #3
	strb r0, [r1]
	ldr r0, _08120AAC  @ =gUnknown_02006890
	add r1, r4, r0
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	lsl r0, r0, #24
	lsr r0, r0, #24
	cmp r0, #12
	bls _08120A56
	mov r0, #13
	strb r0, [r1]
_08120A56:
	add r0, r4, #0
	bl sub_08120D24
	sub r0, r4, #1
	lsl r0, r0, #24
	lsr r4, r0, #24
	cmp r0, #0
	bge _08120A2C
	mov r4, #9
	ldr r1, _08120AAC  @ =gUnknown_02006890
_08120A6A:
	add r0, r4, r1
	ldrb r0, [r0]
	cmp r0, #13
	bne _08120A9A
	sub r0, r4, #1
	lsl r0, r0, #24
	lsr r4, r0, #24
	cmp r0, #0
	bge _08120A6A
	ldr r4, _08120AA0  @ =gRam
	ldr r1, _08120AB0  @ =0x00001732
	add r0, r4, r1
	mov r5, #0
	strb r5, [r0]
	ldr r1, _08120AB4  @ =gUnknown_020069B4
	mov r0, #2
	strb r0, [r1]
	add r0, r6, #0
	bl sub_0811F980
	ldr r0, _08120AA4  @ =0x00000E1F
	add r4, r4, r0
	add r4, r6, r4
	strb r5, [r4]
_08120A9A:
	pop {r4-r6}
	pop {r0}
	bx r0
_08120AA0:
	.4byte gRam
_08120AA4:
	.4byte 0x00000E1F
_08120AA8:
	.4byte gUnknown_02006880
_08120AAC:
	.4byte gUnknown_02006890
_08120AB0:
	.4byte 0x00001732
_08120AB4:
	.4byte gUnknown_020069B4
	THUMB_FUNC_END sub_08120A1C

