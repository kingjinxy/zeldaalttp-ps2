	THUMB_FUNC_START sub_0807438C
sub_0807438C: @ 0x0807438C
	push {lr}
	bl sub_08072F1C
	ldr r1, _080743A4  @ =gRam
	ldr r0, _080743A8  @ =0x000009AD
	add r1, r1, r0
	ldrb r0, [r1]
	sub r0, r0, #1
	strb r0, [r1]
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080743A4:
	.4byte gRam
_080743A8:
	.4byte 0x000009AD
	THUMB_FUNC_END sub_0807438C

