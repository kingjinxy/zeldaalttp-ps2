	THUMB_FUNC_START sub_080BCA5C
sub_080BCA5C: @ 0x080BCA5C
	push {r4-r6,lr}
	mov r6, r8
	push {r6}
	add r4, r0, #0
	lsl r4, r4, #24
	lsr r4, r4, #24
	ldr r5, _080BCAB0  @ =gRam
	ldr r0, _080BCAB4  @ =0x00001663
	add r6, r5, r0
	ldrb r0, [r6]
	mov r8, r0
	bl sub_080BDB54
	add r0, r4, #0
	bl sub_080B9584
	mov r0, #150
	lsl r0, r0, #4
	add r1, r5, r0
	ldr r0, _080BCAB8  @ =0x00001978
	strh r0, [r1]
	ldr r0, _080BCABC  @ =0x00000964
	add r1, r5, r0
	ldr r0, _080BCAC0  @ =0x00001568
	strh r0, [r1]
	bl sub_08101530
	ldr r0, _080BCAC4  @ =0x00000FE2
	add r5, r5, r0
	mov r0, #80
	strb r0, [r5]
	mov r0, #6
	strb r0, [r6]
	bl sub_0812F9A8
	mov r0, r8
	strb r0, [r6]
	pop {r3}
	mov r8, r3
	pop {r4-r6}
	pop {r0}
	bx r0
_080BCAB0:
	.4byte gRam
_080BCAB4:
	.4byte 0x00001663
_080BCAB8:
	.4byte 0x00001978
_080BCABC:
	.4byte 0x00000964
_080BCAC0:
	.4byte 0x00001568
_080BCAC4:
	.4byte 0x00000FE2
	THUMB_FUNC_END sub_080BCA5C

