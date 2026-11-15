	THUMB_FUNC_START sub_080CDBA0
sub_080CDBA0: @ 0x080CDBA0
	push {lr}
	lsl r0, r0, #24
	lsr r0, r0, #24
	ldr r2, _080CDC38  @ =gRam
	ldr r3, _080CDC3C  @ =0x00000996
	add r1, r2, r3
	ldrb r1, [r1]
	eor r0, r0, r1
	mov r1, #7
	and r0, r0, r1
	ldr r3, _080CDC40  @ =0x000017AA
	add r1, r2, r3
	ldrb r1, [r1]
	orr r0, r0, r1
	add r3, r3, #99
	add r1, r2, r3
	ldrb r1, [r1]
	orr r0, r0, r1
	cmp r0, #0
	bne _080CDC34
	ldr r1, _080CDC44  @ =0x000016C4
	add r0, r2, r1
	ldr r3, _080CDC48  @ =0x00000952
	add r1, r2, r3
	ldrh r0, [r0]
	ldrh r1, [r1]
	sub r0, r0, r1
	add r3, r3, #14
	add r1, r2, r3
	ldrh r1, [r1]
	sub r0, r0, r1
	add r0, r0, #12
	lsl r0, r0, #16
	lsr r0, r0, #16
	cmp r0, #23
	bhi _080CDC34
	mov r1, #182
	lsl r1, r1, #5
	add r0, r2, r1
	sub r3, r3, #8
	add r1, r2, r3
	ldrh r0, [r0]
	ldrh r1, [r1]
	sub r0, r0, r1
	add r3, r3, #12
	add r1, r2, r3
	ldrh r1, [r1]
	sub r0, r0, r1
	add r0, r0, #22
	lsl r0, r0, #16
	lsr r0, r0, #16
	cmp r0, #27
	bhi _080CDC34
	ldr r0, _080CDC4C  @ =0x00001702
	add r1, r2, r0
	mov r0, #1
	strb r0, [r1]
	ldr r1, _080CDC50  @ =0x000016F8
	add r0, r2, r1
	mov r1, #16
	strb r1, [r0]
	ldr r3, _080CDC54  @ =0x00001805
	add r0, r2, r3
	strb r1, [r0]
	ldr r0, _080CDC58  @ =0x000016CE
	add r1, r2, r0
	ldrb r0, [r1]
	mvn r0, r0
	strb r0, [r1]
	ldr r3, _080CDC5C  @ =0x000016CD
	add r1, r2, r3
	ldrb r0, [r1]
	mvn r0, r0
	strb r0, [r1]
_080CDC34:
	pop {r0}
	bx r0
_080CDC38:
	.4byte gRam
_080CDC3C:
	.4byte 0x00000996
_080CDC40:
	.4byte 0x000017AA
_080CDC44:
	.4byte 0x000016C4
_080CDC48:
	.4byte 0x00000952
_080CDC4C:
	.4byte 0x00001702
_080CDC50:
	.4byte 0x000016F8
_080CDC54:
	.4byte 0x00001805
_080CDC58:
	.4byte 0x000016CE
_080CDC5C:
	.4byte 0x000016CD
	THUMB_FUNC_END sub_080CDBA0

