	THUMB_FUNC_START sub_08128748
sub_08128748: @ 0x08128748
	push {r4,lr}
	ldr r2, _08128770  @ =gRam
	ldr r0, _08128774  @ =0x00001AD2
	add r3, r2, r0
	ldrh r1, [r3]
	add r1, r1, #1
	strh r1, [r3]
	ldrh r0, [r3]
	ldr r4, _08128778  @ =gTextPointer
	add r0, r0, r4
	ldrb r0, [r0]
	ldr r4, _0812877C  @ =0x00001AE4
	add r2, r2, r4
	strb r0, [r2]
	add r1, r1, #1
	strh r1, [r3]
	mov r0, #0
	pop {r4}
	pop {r1}
	bx r1
_08128770:
	.4byte gRam
_08128774:
	.4byte 0x00001AD2
_08128778:
	.4byte gTextPointer
_0812877C:
	.4byte 0x00001AE4
	THUMB_FUNC_END sub_08128748

