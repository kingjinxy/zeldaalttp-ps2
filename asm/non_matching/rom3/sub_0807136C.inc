	THUMB_FUNC_START sub_0807136C
sub_0807136C: @ 0x0807136C
	push {lr}
	ldr r2, _08071394  @ =gRam
	ldr r1, _08071398  @ =0x00000CF8
	add r0, r2, r1
	ldrh r1, [r0]
	mov r0, #1
	and r0, r0, r1
	cmp r0, #0
	beq _0807138C
	ldr r0, _0807139C  @ =0x00000D02
	add r1, r2, r0
	ldrh r0, [r1]
	cmp r0, #0
	beq _0807138C
	sub r0, r0, #1
	strh r0, [r1]
_0807138C:
	bl sub_08130FF8
	pop {r0}
	bx r0
_08071394:
	.4byte gRam
_08071398:
	.4byte 0x00000CF8
_0807139C:
	.4byte 0x00000D02
	THUMB_FUNC_END sub_0807136C

