	THUMB_FUNC_START sub_080FA7CC
sub_080FA7CC: @ 0x080FA7CC
	push {r4-r7,lr}
	lsl r0, r0, #24
	lsr r4, r0, #24
	add r7, r4, #0
	add r0, r4, #0
	bl sub_080FACFC
	add r0, r4, #0
	bl Sprite3_CheckIfActive
	lsl r0, r0, #24
	lsr r5, r0, #24
	cmp r5, #0
	bne _080FA826
	add r0, r4, #0
	bl sub_080C99DC
	ldr r6, _080FA82C  @ =gRam
	ldr r1, _080FA830  @ =0x00001152
	add r0, r6, r1
	add r2, r4, r0
	ldrb r0, [r2]
	sub r0, r0, #1
	strb r0, [r2]
	sub r1, r1, #16
	add r0, r6, r1
	add r3, r4, r0
	ldrb r1, [r3]
	mov r0, #128
	and r0, r0, r1
	cmp r0, #0
	beq _080FA810
	strb r5, [r2]
	strb r5, [r3]
_080FA810:
	ldr r1, _080FA834  @ =gUnknown_0817A504
	ldr r2, _080FA838  @ =0x00000F52
	add r0, r6, r2
	add r0, r7, r0
	ldrb r0, [r0]
	lsl r0, r0, #2
	add r0, r0, r1
	ldr r1, [r0]
	add r0, r7, #0
	bl _call_via_r1
_080FA826:
	pop {r4-r7}
	pop {r0}
	bx r0
_080FA82C:
	.4byte gRam
_080FA830:
	.4byte 0x00001152
_080FA834:
	.4byte gUnknown_0817A504
_080FA838:
	.4byte 0x00000F52
	THUMB_FUNC_END sub_080FA7CC

