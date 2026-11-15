	THUMB_FUNC_START sub_0810C520
sub_0810C520: @ 0x0810C520
	push {r4,r5,lr}
	lsl r0, r0, #24
	lsr r0, r0, #24
	ldr r2, _0810C560  @ =gRam
	ldr r3, _0810C564  @ =0x00000F22
	add r1, r2, r3
	add r5, r0, r1
	mov r3, #32
	strb r3, [r5]
	ldr r4, _0810C568  @ =0x00000F12
	add r1, r2, r4
	add r4, r0, r1
	strb r3, [r4]
	mov r1, #0
	ldr r0, _0810C56C  @ =0x000009DA
	add r2, r2, r0
	ldrh r0, [r2]
	cmp r0, #205
	bne _0810C548
	mov r1, #1
_0810C548:
	cmp r1, #0
	beq _0810C576
	bl GetRandomInt
	mov r1, #1
	and r1, r1, r0
	cmp r1, #0
	beq _0810C570
	ldrb r0, [r5]
	lsl r0, r0, #1
	strb r0, [r5]
	b _0810C576
_0810C560:
	.4byte gRam
_0810C564:
	.4byte 0x00000F22
_0810C568:
	.4byte 0x00000F12
_0810C56C:
	.4byte 0x000009DA
_0810C570:
	ldrb r0, [r4]
	lsl r0, r0, #1
	strb r0, [r4]
_0810C576:
	pop {r4,r5}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_0810C520

