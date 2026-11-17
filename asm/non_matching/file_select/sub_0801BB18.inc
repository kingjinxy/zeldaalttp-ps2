	THUMB_FUNC_START sub_0801BB18
sub_0801BB18: @ 0x0801BB18
	push {lr}
	add r2, r0, #0
	add r0, r0, #108
	ldrh r0, [r0]
	cmp r0, #1
	bne _0801BB2C
	add r1, r2, #0
	add r1, r1, #107
	mov r0, #0
	strb r0, [r1]
_0801BB2C:
	ldr r1, _0801BB38  @ =gUnknown_0813A18C
	add r0, r2, #0
	bl sub_08009924
	pop {r0}
	bx r0
_0801BB38:
	.4byte gUnknown_0813A18C
	THUMB_FUNC_END sub_0801BB18

