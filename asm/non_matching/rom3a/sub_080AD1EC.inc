	THUMB_FUNC_START sub_080AD1EC
sub_080AD1EC: @ 0x080AD1EC
	push {r4,lr}
	sub sp, sp, #4
	lsl r0, r0, #24
	lsr r0, r0, #24
	lsl r1, r1, #24
	lsr r1, r1, #24
	mov r2, sp
	bl sub_080AB89C
	lsl r0, r0, #24
	asr r4, r0, #24
	cmp r4, #0
	beq _080AD20A
	mov r0, #1
	b _080AD278
_080AD20A:
	mov r0, #14
	bl sub_080C1A8C
	ldr r2, _080AD280  @ =gRam
	mov r1, sp
	ldr r3, _080AD284  @ =0x00000E29
	add r0, r2, r3
	ldrb r1, [r1]
	add r0, r0, r1
	strb r4, [r0]
	mov r1, sp
	ldr r3, _080AD288  @ =0x00001844
	add r0, r2, r3
	ldrb r1, [r1]
	add r0, r0, r1
	mov r1, #2
	strb r1, [r0]
	ldr r1, _080AD28C  @ =0x000009B2
	add r0, r2, r1
	ldrb r0, [r0]
	lsl r0, r0, #24
	asr r0, r0, #24
	cmp r0, #0
	beq _080AD24C
	sub r3, r3, #112
	add r0, r2, r3
	ldrb r1, [r0]
	cmp r1, #0
	bne _080AD24C
	mov r3, #161
	lsl r3, r3, #4
	add r0, r2, r3
	strb r1, [r0]
_080AD24C:
	ldr r2, _080AD280  @ =gRam
	mov r1, #182
	lsl r1, r1, #5
	add r0, r2, r1
	ldrh r0, [r0]
	add r0, r0, #8
	mov r3, #150
	lsl r3, r3, #4
	add r1, r2, r3
	strh r0, [r1]
	ldr r1, _080AD290  @ =0x000016C4
	add r0, r2, r1
	ldrh r0, [r0]
	sub r0, r0, #6
	add r3, r3, #4
	add r2, r2, r3
	strh r0, [r2]
	mov r0, sp
	ldrb r0, [r0]
	bl sub_080ABA78
	mov r0, #0
_080AD278:
	add sp, sp, #4
	pop {r4}
	pop {r1}
	bx r1
_080AD280:
	.4byte gRam
_080AD284:
	.4byte 0x00000E29
_080AD288:
	.4byte 0x00001844
_080AD28C:
	.4byte 0x000009B2
_080AD290:
	.4byte 0x000016C4
	THUMB_FUNC_END sub_080AD1EC

