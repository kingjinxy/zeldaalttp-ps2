	THUMB_FUNC_START sub_080AD164
sub_080AD164: @ 0x080AD164
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
	bne _080AD1D0
	ldr r2, _080AD1D8  @ =gRam
	mov r1, sp
	ldr r4, _080AD1DC  @ =0x00000E29
	add r0, r2, r4
	ldrb r1, [r1]
	add r0, r0, r1
	strb r3, [r0]
	mov r1, sp
	ldr r3, _080AD1E0  @ =0x00001844
	add r0, r2, r3
	ldrb r1, [r1]
	add r0, r0, r1
	mov r1, #2
	strb r1, [r0]
	mov r1, sp
	add r4, r4, #10
	add r0, r2, r4
	ldrb r1, [r1]
	add r0, r0, r1
	mov r1, #64
	strb r1, [r0]
	mov r1, #182
	lsl r1, r1, #5
	add r0, r2, r1
	ldrh r0, [r0]
	sub r0, r0, #8
	mov r3, #150
	lsl r3, r3, #4
	add r1, r2, r3
	strh r0, [r1]
	ldr r4, _080AD1E4  @ =0x000016C4
	add r0, r2, r4
	ldrh r0, [r0]
	add r0, r0, #8
	ldr r1, _080AD1E8  @ =0x00000964
	add r2, r2, r1
	strh r0, [r2]
	mov r0, sp
	ldrb r0, [r0]
	bl sub_080ABA78
_080AD1D0:
	add sp, sp, #4
	pop {r4}
	pop {r0}
	bx r0
_080AD1D8:
	.4byte gRam
_080AD1DC:
	.4byte 0x00000E29
_080AD1E0:
	.4byte 0x00001844
_080AD1E4:
	.4byte 0x000016C4
_080AD1E8:
	.4byte 0x00000964
	THUMB_FUNC_END sub_080AD164

