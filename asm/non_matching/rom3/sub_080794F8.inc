	THUMB_FUNC_START sub_080794F8
sub_080794F8: @ 0x080794F8
	push {lr}
	ldr r0, _0807953C  @ =gRam
	mov r1, #202
	lsl r1, r1, #4
	add r0, r0, r1
	ldrb r1, [r0]
	strh r1, [r0]
	bl sub_08133438
	bl sub_08133034
	bl sub_08130030
	bl sub_0813309C
	bl sub_081300EC
	bl sub_081330EC
	bl sub_08133148
	bl sub_08133244
	bl sub_081302F0
	bl sub_08130384
	bl sub_0813041C
	bl sub_081304D4
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0807953C:
	.4byte gRam
	THUMB_FUNC_END sub_080794F8

