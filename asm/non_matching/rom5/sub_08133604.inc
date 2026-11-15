	THUMB_FUNC_START sub_08133604
sub_08133604: @ 0x08133604
	push {lr}
	ldr r0, _08133618  @ =gRam
	ldr r1, _0813361C  @ =0x000009B5
	add r0, r0, r1
	mov r1, #1
	strb r1, [r0]
	bl sub_08131DCC
	pop {r0}
	bx r0
_08133618:
	.4byte gRam
_0813361C:
	.4byte 0x000009B5
	THUMB_FUNC_END sub_08133604

