	THUMB_FUNC_START sub_0813350C
sub_0813350C: @ 0x0813350C
	push {lr}
	mov r0, #88
	mov r1, #96
	bl sub_081318E0
	mov r0, #104
	mov r1, #112
	bl sub_08131998
	ldr r0, _0813352C  @ =gRam
	ldr r1, _08133530  @ =0x0000099B
	add r0, r0, r1
	mov r1, #1
	strb r1, [r0]
	pop {r0}
	bx r0
_0813352C:
	.4byte gRam
_08133530:
	.4byte 0x0000099B
	THUMB_FUNC_END sub_0813350C

