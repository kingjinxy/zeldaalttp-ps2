	THUMB_FUNC_START sub_0810FB20
sub_0810FB20: @ 0x0810FB20
	push {lr}
	mov r2, #0
	ldr r0, _0810FB48  @ =gBottle1
	ldr r1, _0810FB4C  @ =gBottle2
	ldrb r0, [r0]
	ldrb r1, [r1]
	orr r0, r0, r1
	ldr r1, _0810FB50  @ =gBottle3
	ldrb r1, [r1]
	orr r0, r0, r1
	ldr r1, _0810FB54  @ =gBottle4
	ldrb r1, [r1]
	orr r0, r0, r1
	cmp r0, #1
	bls _0810FB40
	mov r2, #1
_0810FB40:
	add r0, r2, #0
	pop {r1}
	bx r1
	.byte 0x00
	.byte 0x00
_0810FB48:
	.4byte gBottle1
_0810FB4C:
	.4byte gBottle2
_0810FB50:
	.4byte gBottle3
_0810FB54:
	.4byte gBottle4
	THUMB_FUNC_END sub_0810FB20

