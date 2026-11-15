	THUMB_FUNC_START sub_080ABB30
sub_080ABB30: @ 0x080ABB30
	push {r4-r7,lr}
	mov r7, r10
	mov r6, r9
	mov r5, r8
	push {r5-r7}
	sub sp, sp, #8
	lsl r0, r0, #24
	lsr r6, r0, #24
	ldr r2, _080ABBFC  @ =gRam
	ldr r0, _080ABC00  @ =0x00001732
	add r4, r2, r0
	mov r0, #2
	strb r0, [r4]
	ldr r1, _080ABC04  @ =0x00000E3D
	add r0, r2, r1
	add r0, r6, r0
	ldrb r1, [r0]
	lsl r0, r1, #1
	ldr r5, _080ABC08  @ =0x00000964
	add r3, r2, r5
	strb r0, [r3]
	lsl r1, r1, #2
	add r0, r0, r1
	lsl r0, r0, #24
	lsr r0, r0, #24
	str r0, [sp, #4]
	add r5, r2, #0
	mov r8, r3
	ldr r7, _080ABC0C  @ =0x00000968
	add r3, r5, r7
	ldr r0, _080ABC10  @ =gUnknown_0816E07C
	mov r10, r0
	ldr r1, _080ABC14  @ =0x00000DC5
	add r0, r5, r1
	add r0, r0, r6
	mov r9, r0
_080ABB78:
	ldr r2, [sp, #4]
	lsr r1, r2, #1
	lsl r1, r1, #1
	mov r7, r10
	add r2, r1, r7
	mov r7, #182
	lsl r7, r7, #5
	add r0, r5, r7
	ldrh r0, [r0]
	ldrh r2, [r2]
	add r0, r0, r2
	mov r2, r8
	strh r0, [r2]
	ldr r0, _080ABC18  @ =gUnknown_0816E094
	add r1, r1, r0
	add r7, r7, #4
	add r0, r5, r7
	ldrh r0, [r0]
	ldrh r1, [r1]
	add r0, r0, r1
	strh r0, [r3]
	ldrb r0, [r2]
	mov r1, r9
	strb r0, [r1]
	ldr r2, _080ABC1C  @ =0x00000DD9
	add r1, r5, r2
	add r1, r6, r1
	ldr r7, _080ABC20  @ =0x00000965
	add r0, r5, r7
	ldrb r0, [r0]
	strb r0, [r1]
	ldr r1, _080ABC24  @ =0x00000DCF
	add r0, r5, r1
	add r0, r6, r0
	ldrb r1, [r3]
	strb r1, [r0]
	add r2, r2, #10
	add r1, r5, r2
	add r1, r6, r1
	add r7, r7, #4
	add r0, r5, r7
	ldrb r0, [r0]
	strb r0, [r1]
	add r0, r6, #0
	mov r1, #0
	str r3, [sp]
	bl sub_080BFA64
	lsl r0, r0, #24
	lsr r0, r0, #24
	ldr r3, [sp]
	cmp r0, #1
	beq _080ABC28
	ldr r0, [sp, #4]
	add r0, r0, #2
	lsl r0, r0, #24
	lsr r0, r0, #24
	str r0, [sp, #4]
	ldrb r0, [r4]
	sub r0, r0, #1
	strb r0, [r4]
	lsl r0, r0, #24
	cmp r0, #0
	bge _080ABB78
	mov r0, #0
	b _080ABC2A
_080ABBFC:
	.4byte gRam
_080ABC00:
	.4byte 0x00001732
_080ABC04:
	.4byte 0x00000E3D
_080ABC08:
	.4byte 0x00000964
_080ABC0C:
	.4byte 0x00000968
_080ABC10:
	.4byte gUnknown_0816E07C
_080ABC14:
	.4byte 0x00000DC5
_080ABC18:
	.4byte gUnknown_0816E094
_080ABC1C:
	.4byte 0x00000DD9
_080ABC20:
	.4byte 0x00000965
_080ABC24:
	.4byte 0x00000DCF
_080ABC28:
	mov r0, #1
_080ABC2A:
	add sp, sp, #8
	pop {r3-r5}
	mov r8, r3
	mov r9, r4
	mov r10, r5
	pop {r4-r7}
	pop {r1}
	bx r1
	THUMB_FUNC_END sub_080ABB30

	.byte 0x00
	.byte 0x00
