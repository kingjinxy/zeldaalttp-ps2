	THUMB_FUNC_START sub_080AC29C
sub_080AC29C: @ 0x080AC29C
	push {r4,lr}
	sub sp, sp, #4
	lsl r0, r0, #24
	lsr r0, r0, #24
	lsl r1, r1, #24
	lsr r1, r1, #24
	mov r2, sp
	bl sub_080AB89C
	lsl r0, r0, #24
	asr r3, r0, #24
	cmp r3, #0
	bne _080AC326
	ldr r2, _080AC330  @ =gRam
	mov r1, sp
	ldr r4, _080AC334  @ =0x00000E29
	add r0, r2, r4
	ldrb r1, [r1]
	add r0, r0, r1
	strb r3, [r0]
	mov r1, sp
	ldr r3, _080AC338  @ =0x00001844
	add r0, r2, r3
	ldrb r1, [r1]
	add r0, r0, r1
	mov r1, #1
	strb r1, [r0]
	mov r0, sp
	add r4, r4, #20
	add r1, r2, r4
	ldrb r0, [r0]
	add r1, r1, r0
	ldr r3, _080AC33C  @ =0x000016D5
	add r0, r2, r3
	ldrb r0, [r0]
	lsr r0, r0, #1
	strb r0, [r1]
	mov r4, #182
	lsl r4, r4, #5
	add r0, r2, r4
	ldrb r1, [r0]
	sub r3, r3, #20
	add r0, r2, r3
	ldrb r0, [r0]
	lsl r0, r0, #24
	asr r0, r0, #24
	lsl r0, r0, #8
	add r1, r1, r0
	mov r4, #150
	lsl r4, r4, #4
	add r0, r2, r4
	strh r1, [r0]
	ldr r1, _080AC340  @ =0x000016C4
	add r0, r2, r1
	ldrb r1, [r0]
	add r3, r3, #4
	add r0, r2, r3
	ldrb r0, [r0]
	lsl r0, r0, #24
	asr r0, r0, #24
	lsl r0, r0, #8
	add r1, r1, r0
	add r4, r4, #4
	add r2, r2, r4
	strh r1, [r2]
	mov r0, sp
	ldrb r0, [r0]
	bl sub_080ABA78
_080AC326:
	add sp, sp, #4
	pop {r4}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080AC330:
	.4byte gRam
_080AC334:
	.4byte 0x00000E29
_080AC338:
	.4byte 0x00001844
_080AC33C:
	.4byte 0x000016D5
_080AC340:
	.4byte 0x000016C4
	THUMB_FUNC_END sub_080AC29C

