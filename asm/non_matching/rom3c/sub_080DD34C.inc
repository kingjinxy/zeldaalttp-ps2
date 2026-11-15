	THUMB_FUNC_START sub_080DD34C
sub_080DD34C: @ 0x080DD34C
	push {r4,r5,lr}
	lsl r0, r0, #24
	lsr r4, r0, #24
	add r5, r4, #0
	add r0, r4, #0
	bl sub_080DD3D4
	ldr r3, _080DD390  @ =gRam
	ldr r1, _080DD394  @ =0x00000FC2
	add r0, r3, r1
	add r0, r4, r0
	ldrb r0, [r0]
	cmp r0, #0
	bne _080DD374
	ldr r0, _080DD398  @ =0x00000F52
	add r1, r3, r0
	add r1, r4, r1
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
_080DD374:
	ldr r1, _080DD39C  @ =0x00000F92
	add r2, r3, r1
	add r2, r5, r2
	ldr r1, _080DD3A0  @ =0x00000996
	add r0, r3, r1
	ldrb r0, [r0]
	eor r5, r5, r0
	lsr r0, r5, #3
	mov r1, #1
	and r0, r0, r1
	strb r0, [r2]
	pop {r4,r5}
	pop {r0}
	bx r0
_080DD390:
	.4byte gRam
_080DD394:
	.4byte 0x00000FC2
_080DD398:
	.4byte 0x00000F52
_080DD39C:
	.4byte 0x00000F92
_080DD3A0:
	.4byte 0x00000996
	THUMB_FUNC_END sub_080DD34C

