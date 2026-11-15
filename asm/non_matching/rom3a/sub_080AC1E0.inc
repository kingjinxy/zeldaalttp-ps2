	THUMB_FUNC_START sub_080AC1E0
sub_080AC1E0: @ 0x080AC1E0
	push {r4-r6,lr}
	sub sp, sp, #4
	lsl r2, r2, #24
	lsr r2, r2, #24
	mov r0, sp
	strb r2, [r0]
	ldr r5, _080AC27C  @ =gRam
	ldr r0, _080AC280  @ =0x00001734
	add r6, r5, r0
	strb r2, [r6]
	mov r0, #1
	mov r1, #6
	mov r2, sp
	bl sub_080AB89C
	lsl r0, r0, #24
	asr r2, r0, #24
	cmp r2, #0
	bne _080AC272
	mov r1, sp
	ldr r3, _080AC284  @ =0x00000E29
	add r0, r5, r3
	ldrb r1, [r1]
	add r0, r0, r1
	strb r2, [r0]
	mov r1, sp
	ldr r2, _080AC288  @ =0x00001832
	add r0, r5, r2
	ldrb r1, [r1]
	add r0, r0, r1
	mov r1, #1
	strb r1, [r0]
	mov r0, sp
	ldrb r4, [r0]
	mov r1, sp
	ldrb r0, [r6]
	strb r0, [r1]
	mov r0, sp
	ldrb r0, [r0]
	bl sub_080ABAD4
	mov r3, #150
	lsl r3, r3, #4
	add r2, r5, r3
	ldr r1, _080AC28C  @ =gUnknown_0816E110
	mov r0, sp
	ldrb r0, [r0]
	ldr r6, _080AC290  @ =0x00000E3D
	add r3, r5, r6
	add r0, r0, r3
	ldrb r0, [r0]
	lsl r0, r0, #1
	add r0, r0, r1
	ldrh r0, [r0]
	ldrh r1, [r2]
	add r0, r0, r1
	strh r0, [r2]
	ldr r6, _080AC294  @ =0x00000964
	add r2, r5, r6
	ldr r1, _080AC298  @ =gUnknown_0816E120
	mov r0, sp
	ldrb r0, [r0]
	add r0, r0, r3
	ldrb r0, [r0]
	lsl r0, r0, #1
	add r0, r0, r1
	ldrh r0, [r0]
	ldrh r1, [r2]
	add r0, r0, r1
	strh r0, [r2]
	add r0, r4, #0
	bl sub_080ABA78
_080AC272:
	add sp, sp, #4
	pop {r4-r6}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080AC27C:
	.4byte gRam
_080AC280:
	.4byte 0x00001734
_080AC284:
	.4byte 0x00000E29
_080AC288:
	.4byte 0x00001832
_080AC28C:
	.4byte gUnknown_0816E110
_080AC290:
	.4byte 0x00000E3D
_080AC294:
	.4byte 0x00000964
_080AC298:
	.4byte gUnknown_0816E120
	THUMB_FUNC_END sub_080AC1E0

