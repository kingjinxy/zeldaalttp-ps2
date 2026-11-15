	THUMB_FUNC_START sub_081064F8
sub_081064F8: @ 0x081064F8
	push {lr}
	lsl r0, r0, #24
	lsr r0, r0, #24
	ldr r1, _0810651C  @ =gRam
	ldr r3, _08106520  @ =0x00001727
	add r2, r1, r3
	strb r0, [r2]
	ldr r2, _08106524  @ =0x000016CC
	add r1, r1, r2
	strb r0, [r1]
	bl sub_080975B4
	bl sub_08096F30
	bl sub_0809E394
	pop {r0}
	bx r0
_0810651C:
	.4byte gRam
_08106520:
	.4byte 0x00001727
_08106524:
	.4byte 0x000016CC
	THUMB_FUNC_END sub_081064F8

